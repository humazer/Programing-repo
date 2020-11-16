targets = main.bin test.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: task1main.bin task2main.bin task3main.bin task4main.bin task5main.bin task6main.bin

task1main.bin:
	gcc -g src/task1.c -o dist/task1main.bin
task2main.bin:
	gcc -g src/task2.c -o dist/task2main.bin
task3main.bin:
	gcc -g src/task3.c -o dist/task3main.bin
task4main.bin:
	gcc -g src/task4.c -o dist/task4main.bin
task5main.bin:
	gcc -g src/task5.c -o dist/task5main.bin
task6main.bin:
	gcc -g src/task6.c -o dist/task6main.bin
	

