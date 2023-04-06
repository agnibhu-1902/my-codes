% ...
loop:-write('Type end to end: '),read(Word),
write('Input was '),write(Word),nl,
(Word=end;loop).
