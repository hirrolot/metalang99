## EBNF grammar

```ebnf
<term> ::= { <call> | <value> }* ;

<call> ::= "c(" <macro-name> "," <args> ")" ;
<macro-name> ::= <ident> ;
<args> ::= "(" { <term> }* ")" ;

<value> ::= "v(" { <pp-token> }* ")" ;
```
