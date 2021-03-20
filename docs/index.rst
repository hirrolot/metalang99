.. Metalang99 documentation master file, created by
   sphinx-quickstart on Mon Jan  4 08:10:23 2021.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

The Metalang99 Standard Library
===============================

The Metalang99 standard library exports a set of macros implemented using the `Metalang99 metalanguage`_.

The `ML99_MAJOR`, `ML99_MINOR`, and `ML99_PATCH` macros denote the major, the minor, and the patch numbers, respectively. They are defined in `metalang99.h`.

Naming conventions
------------------

Macros following the `SCREAMING_CASE` naming convention are called "plain" macros. To compute a final result of a plain macro, only preprocessor expansion is required (i.e., without involving the Metalang99 evaluator). Plain macros are used to save some reduction steps, thereby making metaprograms faster.

Sometimes, there exist two versions of the same macro: one is plain, and the other is Metalang99-compliant. For example, here are two complete metaprograms, one using `ML99_untuple` and the second one using `ML99_UNTUPLE`:

.. code:: c

   ML99_eval(ML99_untuple(v((1, 2, 3))))

.. code:: c

   ML99_UNTUPLE((1, 2, 3))

Both metaprograms result in `1, 2, 3`.

.. toctree::
   :hidden:

   lang
   choice
   tuple
   variadics
   list
   either
   maybe
   nat
   logical
   util
   control
   assert
   gen

Contents
====================================

 - `lang.h`_ - The core metalanguage.
 - `choice.h`_ - Choice types.
 - `tuple.h`_ - Tuple manipulation.
 - `variadics.h`_ - Variadic arguments manipulation.
 - `list.h`_ - List manipulation.
 - `either.h`_ - A choice type with two cases.
 - `maybe.h`_ - An optional value.
 - `nat.h`_ - Natural numbers ([0; 255]).
 - `logical.h`_ - Boolean algebra.
 - `control.h`_ - Control flow operators.
 - `assert.h`_ - Static assertions.
 - `util.h`_ - Utilitary stuff.
 - `gen.h`_ - Support for C language constructions.

Indices and tables
====================================

* :ref:`genindex`
* :ref:`search`

.. _Metalang99 metalanguage: https://github.com/Hirrolot/metalang99

.. _lang.h: lang.html
.. _choice.h: choice.html
.. _tuple.h: tuple.html
.. _variadics.h: variadics.html
.. _list.h: list.html
.. _either.h: either.html
.. _maybe.h: maybe.html
.. _nat.h: nat.html
.. _logical.h: logical.html
.. _control.h: control.html
.. _assert.h: assert.html
.. _util.h: util.html
.. _gen.h: gen.html
