% ...
go :- loop(start). /* start is a dummy value used to get the looping process started. */
loop(end).
loop(X) :- X \= end, write("Type 'end' to end: "), read(Word), write('Input was '), write(Word), nl, loop(Word).
