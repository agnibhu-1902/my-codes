10 CLS
20 S = 0
30 INPUT "ENTER THE ENDING RANGE:", J
40 FOR P = 1 TO J
50 D = P MOD 2
60 IF D = 0 THEN S = S + P
70 NEXT P
80 PRINT S
90 END

