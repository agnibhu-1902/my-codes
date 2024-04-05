module nor_gate(a, b, y);
    input a, b;
    output y;
    assign y = a ~| b;
endmodule

module test;
    reg a, b;
    wire y;
    nor_gate NOR(a, b, y);

    initial
    begin
        {a, b} = 0;
    end

    initial
    begin
        #10 a = 0; b = 0;
        #10 a = 0; b = 1;
        #10 a = 1; b = 0;
        #10 a = 1; b = 1;
    end

    initial
    begin
        $monitor("a = %b, b = %b, y = %b", a, b, y);
        #50 $finish;
    end
endmodule