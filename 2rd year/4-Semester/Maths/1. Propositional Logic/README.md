# Some Important Law
- 1 Idempotent law
```
p  /\  p e p and p v p ⇒ p
```
- 2 Commutative law
 ```
p /\ q ⇒ q /\ p and p v q ⇒ q v p
```
- 3 Associative law
```
(p v q) v r = p v (q v r)
and (p A q) A r = p A (q A r)

```
- 4 De-Morgan law
```
~(p /\ q) ⇒ ~p V ~q
and ~(p v q) ⇒ ~p /\ ~q
```
- 5  p --> q ⇒ ~p /\ ~q







  # NORMAL FORM
Let A(p1 , p2 , p3 , .....pn) be a statement formula then the
construction of truth table may not be practical always.
So, we consider alternate procedure known as reduction to
normal form.

## (i) Disconjunction Normal Form : A statement form which
consist of disjunction between conjunction is called DNF
Example : (1) (p A q) v r
          (2) (p /\ ~q ) V (~p /\ r) V (r /\ ~q)



## Example : Obtain the DNF of the form (p -->q) /\ (~p /\ q)
Solution : We know that
p --> q ⇒ ~q V q
So, (~p v q) A (~p A q)
Apply distributive law
(~p /\ ~p /\ q) V (q  /\ ~p /\ q)
⇒ (~p /\ q) V (q /\ ~p)

 
