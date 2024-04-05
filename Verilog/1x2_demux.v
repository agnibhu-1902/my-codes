module demux(i, e, s, y0, y1);
    input i, e, s;
    output y0, y1;
    assign y0 = e & ~s & i;
    assign y1 = e & s & i;
endmodule

module main;
    reg i, e, s;
    wire y0, y1;
    demux DEMUX(i, e, s, y0, y1);

    initial
    begin
        {i, e, s} = 0;
    end

    initial
    begin
        #10 e = 0; s = 0; i = 0;
        #10 e = 0; s = 0; i = 1;
        #10 e = 1; s = 0; i = 0;
        #10 e = 1; s = 0; i = 1;
        #10 e = 1; s = 1; i = 0;
        #10 e = 1; s = 1; i = 1;
    end

    initial
    begin
        $monitor("i = %b, e = %b, s = %b, y0 = %b, y1 = %b", i, e, s, y0, y1);
        #70 $finish;
    end
endmodule