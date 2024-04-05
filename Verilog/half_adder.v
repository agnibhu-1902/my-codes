module half_adder(a, b, s, c);
    input a, b;
    output s, c;
    assign s = a ^ b;
    assign c = a & b;
endmodule

module main;
    reg a, b;
    wire s, c;
    half_adder HA(a, b, s, c);

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
        $monitor("a = %b, b = %b, s = %b, c = %b", a, b, s, c);
        #50 $finish;
    end
endmodule