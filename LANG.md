## EBNF grammar

```ebnf
<term> ::= { <call> | <value> }* ;

<call> ::= "c(" <macro-name> "," <args> ")" ;
<macro-name> ::= <ident> ;
<args> ::= "(" { <term> }* ")" ;

<value> ::= "v(" { <pp-token> }* ")" ;
```

## Reduction rules

```
reduce =
    c(op, arg1 ... argN) ---> reduce(op(reduce(arg1), ..., reduce(argN)))
    v(x1, ..., xN)        ---> x1, ..., xN
```
