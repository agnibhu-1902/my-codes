% ...
readline :- get0(X), process(X).
process(10).
process(X) :- X =\= 10, put(X), nl, readline.
