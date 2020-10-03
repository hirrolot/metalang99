## EBNF grammar

```ebnf
<term>  ::= { <call> | <final> }* ;

<call>  ::= "call(" <op> "," <args> ")" ;
<op>    ::= <ident> ;
<args>  ::= "(" { <arg> "," }* <arg> ")" ;
<arg>   ::= "" | <term> ;

<final> ::= "final(" { <pp-token> }* ")" ;
```

## Reduction rules

```
reduce =
    call(op, arg1, ..., argN) ---> op(reduce(arg1), ..., reduce(argN))
    final(x1, ..., xN)        ---> x1, ..., xN
```
