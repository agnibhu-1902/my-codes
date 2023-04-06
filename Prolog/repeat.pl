% ...
get_answer(Ans) :- write('Enter answer to the question'), nl, repeat, write('Answer yes or no: '), read(Ans), valid(Ans), write('Your answer is '), write(Ans).
valid(yes).
valid(no).
