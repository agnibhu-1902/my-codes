% ...
get_answer(Ans) :- write('Enter answer to the question'), nl, get_answer2(Ans).
get_answer2(Ans) :- write("Answer 'yes' or 'no': "), read(A), ((valid(A), Ans = A); get_answer2(Ans)).
valid(yes).
valid(no).
