module full_subtractor(a, b, cin, s, cout);
    input a, b, cin;
    output s, cout;
    assign s = a ^ b ^ cin;
    assign cout = (~a & b) | (b & cin) | (~a & cin);
endmodule

module main;
    reg a, b, cin;
    wire s, cout;
    full_subtractor FS(a, b, cin, s, cout);

    initial
    begin
        {a, b, cin} = 0;
    end

    initial
    begin
        #10 a = 0; b = 0; cin = 0;
        #10 a = 0; b = 0; cin = 1;
        #10 a = 0; b = 1; cin = 0;
        #10 a = 0; b = 1; cin = 1;
        #10 a = 1; b = 0; cin = 0;
        #10 a = 1; b = 0; cin = 1;
        #10 a = 1; b = 1; cin = 0;
        #10 a = 1; b = 1; cin = 1;
    end

    initial
    begin
        $monitor("a = %b, b = %b, cin = %b, s = %b, cout = %b", a, b, cin, s, cout);
        #90 $finish;
    end
endmodule