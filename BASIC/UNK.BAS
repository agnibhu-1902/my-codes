10 CLS
20 DIM A(5)
30 A(1) = 10: A(2) = 5: A(3) = 13: A(4) = 7: A(5) = 24
40 K = 1
50 WHILE K <= 5
60 IF A(K) MOD 2 = 0 THEN A(K) = A(K) + 3 ELSE A(K) = A(K) + 2.5
70 K = K + 1: WEND
80 FOR I = 1 TO 5
90 PRINT A(I) \ 10,
100 NEXT I
110 END


