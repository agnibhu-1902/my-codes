module mux(i0, i1, e, s, y);
    input i0, i1, e, s;
    output y;
    assign y = (e & ~s & i0) | (e & s & i1);
endmodule

module main;
    reg i0, i1, e, s;
    wire y;
    mux MUX(i0, i1, e, s, y);

    initial
    begin
        {i0, i1, e, s} = 0;
    end

    initial
    begin
        #10 e = 0; s = 0; i0 = 1; i1 = 0;
        #10 e = 1; s = 0; i0 = 0; i1 = 1;
        #10 e = 1; s = 0; i0 = 1; i1 = 0;
        #10 e = 1; s = 1; i0 = 1; i1 = 0;
        #10 e = 1; s = 1; i0 = 0; i1 = 1;
    end

    initial
    begin
        $monitor("i0 = %b, i1 = %b, e = %b, s = %b, y = %b", i0, i1, e, s, y);
        #60 $finish;
    end
endmodule