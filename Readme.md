```
verilator -f verilator.f --lint-only
```

```
verilator --binary -f verilator.f --top tb
./obj_dir/Vtb
```