module test;

  logic reset = 0;
  logic clk = 0;
  always #5 clk = !clk;

  logic [7:0] value;

  counter #(.WIDTH(8)) c1 (
    .clk(clk), 
    .reset(reset),
    .out(value)
);

  initial begin
     $dumpfile("test.vcd");
     $dumpvars(0,test);
     
     # 17 reset = 1;
     # 11 reset = 0;
     # 29 reset = 1;
     # 11 reset = 0;
     # 100 $stop;
  end


  initial
     $monitor("At time %t, value = %h (%0d)",
              $time, value, value);
endmodule