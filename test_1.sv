module test_1 (
    input a,b,
    output logic c
);

    always_comb begin
      // c=0; // comment for checking lint
        if(a)
        c=b;
    end

endmodule
