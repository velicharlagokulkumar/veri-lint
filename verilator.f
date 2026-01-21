lint.vlt 

test.sv
tb.sv

//test_1.sv 
//tb_1.sv

//tb_2.sv

//Strict Warnings
-Wall
//Dont exit on wranings
-Wno-fatal
//Parllel threads
-j 0
//enable sv assertions
--assert
//dump as FST (compressed version of VCD)
--trace-fst
//dump structs as human readable format
--trace-structs

--x-assign unique
--x-initial unique

--timing

