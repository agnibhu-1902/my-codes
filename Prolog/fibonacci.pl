% ...
fib(N) :- N = 0, write('1').
fib(N) :- N = 1, write('0').
fib(N) :- N = 2, write('0'), nl, write('1').
fib(N) :- N > 2, write('0'), nl, write('1'), N1 is N - 2, fib1(N1, 0, 1).
fib1(N, A, B) :- N > 0, nl, C is A + B, write(C), A1 is B, B1 is C, M is N - 1, fib1(M, A1, B1).
fib1(_, _, _).
