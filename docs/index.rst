.. Metalang99 documentation master file, created by
   sphinx-quickstart on Mon Jan  4 08:10:23 2021.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

The Metalang99 Standard Library
===============================

The Metalang99 standard library exports a set of macros implemented using the `Metalang99 metalanguage`_.

If `METALANG99_NO_SMALL_PREFIX` is defined, all macros will have only one name: `METALANG99_appl`, `METALANG99_call`, etc. Otherwise, shortening aliases will also be defined: `METALANG99_appl`, `M_appl`, `METALANG99_call`, `M_call`, etc (the default behaviour).

\*Plain macros
--------------


A macro named `<X>Plain` stands for the "plain" version of `<X>`. Plain macros are implemented as ordinary preprocessor macros, without use of the Metalang99 metalanguage. They are used to save some reduction steps, thereby making metaprograms faster.

For example, here are two complete metaprograms, one using `M_unparenthesise` and the second one using `M_unparenthesisePlain`:

.. code:: c

   M_eval(M_unparenthesise(v((1, 2, 3))))

.. code:: c

   M_unparenthesisePlain((1, 2, 3))

Both metaprograms result in `1, 2, 3`.

\*Stateful macros
-----------------

A macro named `<X>Stateful` stands for the "stateful" version of `<X>`. Stateful macros are typically higher-order -- they explicitly track states of their functional arguments, thus giving rise to stateful computations.

A metafunction passed to a higher-order stateful counterpart must accept its current state as a first argument and evaluate to `<new-state>, <result>`. `<new-state>` will be provided to a subsequent invocation of that metafunction.

`<result>` can comprise of multiple commas, however, if you want your state to contain at least one comma, you must parenthesise it.

For example, consider this usage of `M_listMapStateful`:

.. code:: c

    #define F_IMPL(i, x) M_call(F_FINAL, M_uintInc(v(i)), v(i ~ x))
    #define F_FINAL_IMPL(state, result) v(state, result)
    #define F_ARITY 2

    // 0 ~ A, 1 ~ B, 2 ~ C
    M_listMapStateful(v(0), v(F), M_list(v(A, B, C)))

`F_FINAL` is a common idiom: it accepts a state and a result of computation and transforms them to `v(state, result)`.

The macros `M_stateless*` turn a stateless metafunction into a metafunction that can be passed to `<X>Stateful`. For example, this is how `M_listMap` can be implemented:

.. code:: c

    #define METALANG99_listMap_IMPL(f, list)                                                           \
        METALANG99_listMapStateful(v(~), METALANG99_stateless(v(f)), v(list))

.. toctree::
   :hidden:

   eval
   lang
   uint
   logical
   choice
   either
   maybe
   list
   variadics
   util
   control
   assert
   misc

Contents
====================================

 - `eval.h`_ - The metaprogram evaluator.
 - `lang.h`_ - The Metalang99 syntax.
 - `uint.h`_ - Unsigned integers.
 - `logical.h`_ - Boolean algebra.
 - `choice.h`_ - Choice types.
 - `either.h`_ - A choice type with two cases.
 - `maybe.h`_ - An optional value.
 - `list.h`_ - List manipulation.
 - `variadics.h`_ - Variadic macro utilities.
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
.. _uint.h: uint.html
.. _logical.h: logical.html
.. _choice.h: choice.html
.. _either.h: either.html
.. _maybe.h: maybe.html
.. _list.h: list.html
.. _variadics.h: variadics.html
.. _control.h: control.html
.. _assert.h: assert.html
.. _misc.h: misc.html
.. _util.h: util.html
