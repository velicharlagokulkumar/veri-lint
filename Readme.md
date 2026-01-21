## Verilator
```
verilator -f verilator.f --lint-only
```
<img width="1066" height="106" alt="image" src="https://github.com/user-attachments/assets/a1c07b4a-8a6d-494b-925e-7ce48a955ba8" />

```
verilator --binary -f verilator.f --top tb
./obj_dir/Vtb
```
<img width="294" height="35" alt="image-1" src="https://github.com/user-attachments/assets/d918c78d-eca6-49ef-bb1a-352feed94e2a" />

## Icarus Verilog

```
iverilog -g2012 -o my_design counter_tb.sv counter.sv
vvp my_design
gtkwave test.vcd
```
<img width="417" height="344" alt="image copy" src="https://github.com/user-attachments/assets/68f2957d-d4de-4e07-a56f-124060dd631f" />
<img width="1065" height="255" alt="image copy 2" src="https://github.com/user-attachments/assets/2836f944-edc8-40e5-b4e6-26586646ebe5" />

