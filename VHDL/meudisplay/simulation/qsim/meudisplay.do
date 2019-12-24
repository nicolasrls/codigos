onerror {quit -f}
vlib work
vlog -work work meudisplay.vo
vlog -work work meudisplay.vt
vsim -novopt -c -t 1ps -L cycloneii_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.meudisplay_vlg_vec_tst
vcd file -direction meudisplay.msim.vcd
vcd add -internal meudisplay_vlg_vec_tst/*
vcd add -internal meudisplay_vlg_vec_tst/i1/*
add wave /*
run -all
