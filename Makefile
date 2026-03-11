CC     = gcc
CFLAGS = -Wall

%.exe: %.c sorting.c
	$(CC) $(CFLAGS) $< sorting.c -o $@

clean:
	del *.exe *.o