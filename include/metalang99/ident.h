/**
 * @file
 * Identifier manipulation.
 *
 * An identifier is a sequence of characters, digits, and the underscore (`_`), in any order. For
 * example: `_ak39A`, `192_iAjP_2`, `ro11`.
 */

#ifndef ML99_IDENT_H
#define ML99_IDENT_H

#include <metalang99/priv/util.h>

#include <metalang99/lang.h>

/**
 * Tells whether @p ident belongs to a set of identifiers defined by @p prefix.
 *
 * If `ML99_cat(prefix, ident)` exists, it must be an object-like macro which expands to `()`. If
 * so, `ML99_detectIdent(prefix, ident)` will expand to truth, otherwise (`ML99_cat(prefix, ident)`
 * does **not** exist), `ML99_detectIdent(prefix, ident)` will expand to falsehood.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/ident.h>
 *
 * #define FOO_x ()
 * #define FOO_y ()
 *
 * // 1
 * ML99_detectIdent(v(FOO_), v(x))
 *
 * // 1
 * ML99_detectIdent(v(FOO_), v(y))
 *
 * // 0
 * ML99_detectIdent(v(FOO_), v(z))
 * @endcode
 */
#define ML99_detectIdent(prefix, ident) ML99_call(ML99_detectIdent, prefix, ident)

/**
 * Compares two identifiers @p x and @p y for equality.
 *
 * This macro is a shortcut to `ML99_detectIdent(ML99_cat3(prefix, x, v(_)), y)`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/ident.h>
 *
 * #define FOO_x_x ()
 * #define FOO_y_y ()
 *
 * // 1
 * ML99_identEq(v(FOO_), v(x), v(x))
 *
 * // 1
 * ML99_identEq(v(FOO_), v(y), v(y))
 *
 * // 0
 * ML99_identEq(v(FOO_), v(x), v(y))
 * @endcode
 */
#define ML99_identEq(prefix, x, y) ML99_call(ML99_identEq, prefix, x, y)

/**
 * The predefined #ML99_identEq detector prefix of C keywords.
 *
 * It can handle all the <a href="https://en.cppreference.com/w/c/keyword">C11 keywords</a>.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/ident.h>
 *
 * // 1
 * ML99_identEq(v(ML99_C_KEYWORD_DETECTOR), v(while), v(while))
 * @endcode
 */
#define ML99_C_KEYWORD_DETECTOR ML99_PRIV_C_KEYWORD_DETECTOR_

/**
 * The predefined #ML99_detectIdent detector prefix of the underscore character (`_`).
 *
 * # Examples
 *
 * @code
 * #include <metalang99/ident.h>
 *
 * // 1
 * ML99_detectIdent(v(ML99_UNDERSCORE_DETECTOR), v(_))
 * @endcode
 */
#define ML99_UNDERSCORE_DETECTOR ML99_PRIV_UNDERSCORE_DETECTOR_

/**
 * The predefined #ML99_identEq detector prefix of lowercase characters
 * (`abcdefghijklmnopqrstuvwxyz`).
 *
 * # Examples
 *
 * @code
 * #include <metalang99/ident.h>
 *
 * // 1
 * ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(x), v(x))
 * @endcode
 */
#define ML99_LOWERCASE_DETECTOR ML99_PRIV_LOWER_DETECTOR_

/**
 * The same as #ML99_LOWERCASE_DETECTOR but deals with the corresponding uppercase characters.
 */
#define ML99_UPPERCASE_DETECTOR ML99_PRIV_UPPER_DETECTOR_

/**
 * The predefined #ML99_identEq detector prefix of digits (`0123456789`).
 *
 * # Examples
 *
 * @code
 * #include <metalang99/ident.h>
 *
 * // 1
 * ML99_identEq(v(ML99_DIGIT_DETECTOR), v(5), v(5))
 * @endcode
 */
#define ML99_DIGIT_DETECTOR ML99_PRIV_DIGIT_DETECTOR_

#define ML99_DETECT_IDENT(prefix, ident) ML99_PRIV_IS_TUPLE(ML99_PRIV_CAT(prefix, ident))
#define ML99_IDENT_EQ(prefix, x, y)      ML99_DETECT_IDENT(ML99_PRIV_CAT3(prefix, x, _), y)

#ifndef DOXYGEN_IGNORE

#define ML99_detectIdent_IMPL(prefix, ident) v(ML99_DETECT_IDENT(prefix, ident))
#define ML99_identEq_IMPL(prefix, x, y)      v(ML99_IDENT_EQ(prefix, x, y))

#define ML99_PRIV_C_KEYWORD_DETECTOR_auto_auto                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_break_break                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_case_case                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_char_char                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_const_const                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_continue_continue             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_default_default               ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_do_do                         ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_double_double                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_else_else                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_enum_enum                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_extern_extern                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_float_float                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_for_for                       ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_goto_goto                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_if_if                         ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_inline_inline                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_int_int                       ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_long_long                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_register_register             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_restrict_restrict             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_return_return                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_short_short                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_signed_signed                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_sizeof_sizeof                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_static_static                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_struct_struct                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_switch_switch                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_typedef_typedef               ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_union_union                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_unsigned_unsigned             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_void_void                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_volatile_volatile             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_while_while                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Alignas__Alignas             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Alignof__Alignof             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Atomic__Atomic               ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Bool__Bool                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Complex__Complex             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Generic__Generic             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Imaginary__Imaginary         ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Noreturn__Noreturn           ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Static_assert__Static_assert ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Thread_local__Thread_local   ()

#define ML99_PRIV_UNDERSCORE_DETECTOR__ ()

#define ML99_PRIV_LOWER_DETECTOR_a_a ()
#define ML99_PRIV_LOWER_DETECTOR_b_b ()
#define ML99_PRIV_LOWER_DETECTOR_c_c ()
#define ML99_PRIV_LOWER_DETECTOR_d_d ()
#define ML99_PRIV_LOWER_DETECTOR_e_e ()
#define ML99_PRIV_LOWER_DETECTOR_f_f ()
#define ML99_PRIV_LOWER_DETECTOR_g_g ()
#define ML99_PRIV_LOWER_DETECTOR_h_h ()
#define ML99_PRIV_LOWER_DETECTOR_i_i ()
#define ML99_PRIV_LOWER_DETECTOR_j_j ()
#define ML99_PRIV_LOWER_DETECTOR_k_k ()
#define ML99_PRIV_LOWER_DETECTOR_l_l ()
#define ML99_PRIV_LOWER_DETECTOR_m_m ()
#define ML99_PRIV_LOWER_DETECTOR_n_n ()
#define ML99_PRIV_LOWER_DETECTOR_o_o ()
#define ML99_PRIV_LOWER_DETECTOR_p_p ()
#define ML99_PRIV_LOWER_DETECTOR_q_q ()
#define ML99_PRIV_LOWER_DETECTOR_r_r ()
#define ML99_PRIV_LOWER_DETECTOR_s_s ()
#define ML99_PRIV_LOWER_DETECTOR_t_t ()
#define ML99_PRIV_LOWER_DETECTOR_u_u ()
#define ML99_PRIV_LOWER_DETECTOR_v_v ()
#define ML99_PRIV_LOWER_DETECTOR_w_w ()
#define ML99_PRIV_LOWER_DETECTOR_x_x ()
#define ML99_PRIV_LOWER_DETECTOR_y_y ()
#define ML99_PRIV_LOWER_DETECTOR_z_z ()

#define ML99_PRIV_UPPER_DETECTOR_A_A ()
#define ML99_PRIV_UPPER_DETECTOR_B_B ()
#define ML99_PRIV_UPPER_DETECTOR_C_C ()
#define ML99_PRIV_UPPER_DETECTOR_D_D ()
#define ML99_PRIV_UPPER_DETECTOR_E_E ()
#define ML99_PRIV_UPPER_DETECTOR_F_F ()
#define ML99_PRIV_UPPER_DETECTOR_G_G ()
#define ML99_PRIV_UPPER_DETECTOR_H_H ()
#define ML99_PRIV_UPPER_DETECTOR_I_I ()
#define ML99_PRIV_UPPER_DETECTOR_J_J ()
#define ML99_PRIV_UPPER_DETECTOR_K_K ()
#define ML99_PRIV_UPPER_DETECTOR_L_L ()
#define ML99_PRIV_UPPER_DETECTOR_M_M ()
#define ML99_PRIV_UPPER_DETECTOR_N_N ()
#define ML99_PRIV_UPPER_DETECTOR_O_O ()
#define ML99_PRIV_UPPER_DETECTOR_P_P ()
#define ML99_PRIV_UPPER_DETECTOR_Q_Q ()
#define ML99_PRIV_UPPER_DETECTOR_R_R ()
#define ML99_PRIV_UPPER_DETECTOR_S_S ()
#define ML99_PRIV_UPPER_DETECTOR_T_T ()
#define ML99_PRIV_UPPER_DETECTOR_U_U ()
#define ML99_PRIV_UPPER_DETECTOR_V_V ()
#define ML99_PRIV_UPPER_DETECTOR_W_W ()
#define ML99_PRIV_UPPER_DETECTOR_X_X ()
#define ML99_PRIV_UPPER_DETECTOR_Y_Y ()
#define ML99_PRIV_UPPER_DETECTOR_Z_Z ()

#define ML99_PRIV_DIGIT_DETECTOR_0_0 ()
#define ML99_PRIV_DIGIT_DETECTOR_1_1 ()
#define ML99_PRIV_DIGIT_DETECTOR_2_2 ()
#define ML99_PRIV_DIGIT_DETECTOR_3_3 ()
#define ML99_PRIV_DIGIT_DETECTOR_4_4 ()
#define ML99_PRIV_DIGIT_DETECTOR_5_5 ()
#define ML99_PRIV_DIGIT_DETECTOR_6_6 ()
#define ML99_PRIV_DIGIT_DETECTOR_7_7 ()
#define ML99_PRIV_DIGIT_DETECTOR_8_8 ()
#define ML99_PRIV_DIGIT_DETECTOR_9_9 ()

// Arity specifiers {
#define ML99_detectIdent_ARITY 2
#define ML99_identEq_ARITY     3
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_IDENT_H
