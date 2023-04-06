% ...
readin :- get(X), process(X).
process(42).
process(X) :- write(X), nl, readin.
