% ...
person(john,smith,45,london,doctor).
person(martin,williams,33,birmingham,teacher).
person(henry,smith,26,manchester,plumber).
person(jane,wilson,62,london,teacher).
person(mary,smith,29,glasgow,surveyor).
allteachers :- person(Forename, Surname, _, _, teacher), write(Forename), write(' '), write(Surname), nl, fail.
allteachers.
