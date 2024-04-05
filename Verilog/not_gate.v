module not_gate(a, y);
    input a;
    output y;
    assign y = ~a;
endmodule

module main; //Test bench
    reg a;
    wire y;
    not_gate NOT(a, y);

    initial
    begin
        a = 0;
    end

    initial
    begin
        #10 a = 0;
        #10 a = 1;
    end

    initial
    begin
        $monitor("a = %b, y = %b", a, y);
        #30 $finish;
    end
endmodule