all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe
	./safeadd.exe 6 2
	./safesubtract.exe 6 2
	./safemultiply.exe 6 2
	./safedivide.exe 6 2

safeint.o: safeint.c 
	gcc -c safeint.c -o safeint.o

safeadd.exe: safeadd.c safeint.o 
	gcc safeadd.c safeint.o -o safeadd.exe

safesubtract.exe: safesubtract.c safeint.o
	gcc safesubtract.c safeint.o -o safesubtract.exe

safemultiply.exe: safemultiply.c safeint.o
	gcc safemultiply.c safeint.o -o safemultiply.exe

safedivide.exe: safedivide.c safeint.o
	gcc safedivide.c safeint.o -o safedivide.exe


clean:
	del *.exe *.o