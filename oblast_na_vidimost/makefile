all: taskmanager.exe
	./taskmanager.exe

taskmanager.exe: taskmanager.c processes.o
	gcc processes.o taskmanager.c -o taskmanager.exe

processes.o:
	gcc -c processes.c -o processes.o

clean:
	del *.o taskmanager.exe
