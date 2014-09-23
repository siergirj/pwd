all: pwd

pwd: pwd.c
	gcc -Wall -O2 -o pwd pwd.c

debug:
	gcc -Wall -g -O2 -o pwd.debug pwd.c
	gdb ./pwd.debug

clean:
	rm pwd
