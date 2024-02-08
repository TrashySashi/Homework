all: help.exe strlength.exe strconcat.exe  strcompare.exe 
	./help.exe
	./strlengtht.exe Ivan
	./strcompare.exe Alex Alan 
	./strconcat.exe Hello World

help.exe: help.c
	gcc help.c -o help.exe

mystrings.o:
	gcc -c mystrings.c -o mystrings.o

strlength.exe: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe
	
strconcat.exe: strconcat.c mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.exe: strcompare.c mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe
	

clean:
	del *.exe *.o