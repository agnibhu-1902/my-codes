% ...
readterms(Infile) :- see(Infile), repeat, read(X), write(X), nl, X = end, seen.
