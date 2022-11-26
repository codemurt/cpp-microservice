CC=g++
CFLAGS=-c

all: app

app.o: app.cpp
	$(CC) $(CFLAGS) app.cpp
utils.o: utils.cpp utils.h
	$(CC) $(CFLAGS) utils.cpp
app: app.o utils.o
	$(CC) app.o utils.o -o app.exe -lws2_32
clean: 
	rm -f *.o app.exe
