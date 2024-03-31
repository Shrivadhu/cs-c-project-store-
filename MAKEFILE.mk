# Compiler
CC=gcc

a.exe: mainn.o store.o
	gcc mainn.o store.o -o a.exe

mainn.o: mainn.c store.h
	gcc -c mainn.c

store.o: store.c store.h
	gcc -c store.c
