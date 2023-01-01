sdcc -c 8255lib.c -mz80 --xram-loc 32768
sdcc -c 16x2lib.c -mz80 --xram-loc 32768
sdcc -c adc0804lib.c -mz80 --xram-loc 32768
sdcc -c 8bitformatlib.c -mz80 --xram-loc 32768

sdcc 8255_test.c -mz80 --xram-loc 32768 16x2lib.rel 8255lib.rel adc0804lib.rel 8bitformatlib.rel
