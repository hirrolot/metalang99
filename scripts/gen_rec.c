/*
 * Usage: ./gen_rec <power-of-two> <output-path> <header-guard>
 * Example: ./build/gen_rec 14 "../include/epilepsy/eval/rec" EPILEPSY_EVAL_REC_UNROLL_H
 */

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    int rc;

    assert(argc == 4);

    unsigned power_of_two;
    rc = sscanf(argv[1], "%u", &power_of_two);
    assert(rc == 1);

    const char *const output_path = argv[2], *const header_guard = argv[3];

    const size_t file_name_size = strlen(output_path) + strlen("/unroll.h") + 1;
    char *file_name = malloc(file_name_size);
    assert(file_name);
    snprintf(file_name, file_name_size, "%s/unroll.h", output_path);

    FILE *fp = fopen(file_name, "w");
    assert(fp);
    printf("Generating 2^%u recursion unrollers to '%s'...\n", power_of_two, file_name);

    free(file_name);

    rc = fprintf(
        fp,
        "\
#ifndef %s\n\
#define %s\n\n\
#define EPILEPSY_PRIV_REC_UNROLL EPILEPSY_PRIV_REC_0\n\n",
        header_guard, header_guard);
    assert(rc > 0);

    for (unsigned i = 0; i < pow(2, power_of_two); i++) {
        rc = fprintf(
            fp,
            "\
#define EPILEPSY_PRIV_REC_%u(...) EPILEPSY_PRIV_REC_MATCH(EPILEPSY_PRIV_REC_%u_, EPILEPSY_PRIV_REC_CHOICE(__VA_ARGS__))(EPILEPSY_PRIV_REC_TAIL(__VA_ARGS__))\n\
#define EPILEPSY_PRIV_REC_%u_0continue EPILEPSY_PRIV_REC_%u\n\
#define EPILEPSY_PRIV_REC_%u_0stop(...) __VA_ARGS__\n\n",
            i, i, i, i + 1, i);
        assert(rc > 0);
    }

    rc = fprintf(fp, "#endif // %s\n", header_guard);
    assert(rc > 0);

    rc = fclose(fp);
    assert(rc == 0);

    printf("Done!\n");
}
