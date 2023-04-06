% ...
copychars(Outfile) :- tell(Outfile), copy_characters, told.
copy_characters :- get0(N), process(N).
process(33).
process(N) :- put(N), copy_characters.
