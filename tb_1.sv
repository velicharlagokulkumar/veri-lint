module tb_1();
logic a,b,c;
    test_1 uut(.*);
    initial begin
        a=1;
        b=1;
        #10;
        $finish;
    end
endmodule

