.. Metalang99 documentation master file, created by
   sphinx-quickstart on Mon Jan  4 08:10:23 2021.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

The Metalang99 Standard Library
===============================

The Metalang99 standard library exports a set of macros implemented using the `Metalang99 metalanguage`_.

The `METALANG99_MAJOR`, `METALANG99_MINOR`, and `METALANG99_PATCH` macros denote the major, the minor, and the patch numbers, respectively. They are defined in `metalang99.h`.

\Options
--------

If `METALANG99_NO_SMALL_PREFIX` is defined, all macros will have only one name: `METALANG99_appl`, `METALANG99_call`, etc. Otherwise, shortening aliases will also be defined: `METALANG99_appl`, `M_appl`, `METALANG99_call`, `M_call`, etc (the default behaviour).

\*Plain macros
--------------

A macro named `<X>Plain` stands for the "plain" version of `<X>`. To compute a final result of a plain macro, only preprocessor expansion is required. Plain macros are used to save some reduction steps, thereby making metaprograms faster.

For example, here are two complete metaprograms, one using `M_untuple` and the second one using `M_untuplePlain`:

.. code:: c

   M_eval(M_untuple(v((1, 2, 3))))

.. code:: c

   M_untuplePlain((1, 2, 3))

Both metaprograms result in `1, 2, 3`.

.. toctree::
   :hidden:

   eval
   lang
   choice
   tuple
   either
   maybe
   list
   variadics
   uint
   logical
   util
   control
   assert
   misc

Contents
====================================

 - `eval.h`_ - The metaprogram evaluator.
 - `lang.h`_ - The Metalang99 syntax.
 - `choice.h`_ - Choice types.
 - `tuple.h`_ - Tuple manipulation.
 - `either.h`_ - A choice type with two cases.
 - `maybe.h`_ - An optional value.
 - `list.h`_ - List manipulation.
 - `variadics.h`_ - Variadic macro utilities.
 - `uint.h`_ - Unsigned integers.
 - `logical.h`_ - Boolean algebra.
 - `control.h`_ - Control expressions.
 - `assert.h`_ - Static assertions.
 - `util.h`_ - Utilitary stuff.
 - `misc.h`_ - Miscellaneous stuff.

Indices and tables
====================================

* :ref:`genindex`
* :ref:`search`

.. _Metalang99 metalanguage: https://github.com/Hirrolot/metalang99

.. _eval.h: eval.html
.. _lang.h: lang.html
.. _choice.h: choice.html
.. _tuple.h: tuple.html
.. _either.h: either.html
.. _maybe.h: maybe.html
.. _list.h: list.html
.. _variadics.h: variadics.html
.. _uint.h: uint.html
.. _logical.h: logical.html
.. _control.h: control.html
.. _assert.h: assert.html
.. _misc.h: misc.html
.. _util.h: util.html
