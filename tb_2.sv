module tb_2();
logic [31:0] a = '0;
logic [31:0] b = '1;
logic [31:0] c = 'x;
logic [31:0] d = 'z;
    initial begin
        #1
        a = '0;
        b = '1;
        c = 'x;
        d = 'z;
        $display("a=%b, b=%b, c=%b, d=%b", a, b, c, d);
        #10;
        $finish;
    end
endmodule   
