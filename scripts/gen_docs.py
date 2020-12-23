#!/usr/bin/env python3

# This script generates documentation for the standard library.

import sys
import pyparser as pp


class MacroSignature:
    def __init__(self, name, named_params, is_variadic):
        self.name = name
        self.named_params = named_params
        self.is_variadic = is_variadic

    @staticmethod
    def parse(string):
        pass


class DocumentBlock:
    def __init__(self):
        pass

    @staticmethod
    def parse(string):
        pass


class Macro:
    def __init__(self, document_block, macro_signature):
        self.document_block = document_block
        self.macro_signature = macro_signature

    @staticmethod
    def parse(string):
        pass


class Header:
    def __init__(self, document_block, macros):
        self.document_block = document_block
        self.macros = macros

    @staticmethod
    def parse(string):
        pass


class IR:
    def __init__(self):
        self.headers = set()

    def parse(self, header_name):
        if header_name in self.headers:
            return

        with open(header_name) as f:
            content = f.read()

        self.headers.add(header_name)

        for line in content.splitlines():
            match = re.search("#include <(.+)>", line)

            if match is None:
                output_f.write(f"{line}\n")
            else:
                parse(headers, f"include/{match[1]}")


output_file_name = sys.argv[1]

with open(output_file_name, "w") as output_f:
    ir = IR()
    ir.parse("include/epilepsy.h")

print("Done!")
