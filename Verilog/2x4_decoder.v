module decoder(i0, i1, y0, y1, y2, y3);
    input i0, i1;
    output y0, y1, y2, y3;
    assign y0 = ~i0 & ~i1;
    assign y1 = i0 & ~i1;
    assign y2 = ~i0 & i1;
    assign y3 = i0 & i1;
endmodule

module main;
    reg i0, i1;
    wire y0, y1, y2, y3;
    decoder DECODER(i0, i1, y0, y1, y2, y3);
    
    initial
    begin
        {i0, i1} = 0;
    end

    initial
    begin
        #10 i1 = 0; i0 = 0;
        #10 i1 = 0; i0 = 1;
        #10 i1 = 1; i0 = 0;
        #10 i1 = 1; i0 = 1;
    end

    initial
    begin
        $monitor("i1 = %b, i0 = %b, y3 = %b, y2 = %b, y1 = %b, y0 = %b", i1, i0, y3, y2, y1, y0);
        #50 $finish;
    end
endmodule