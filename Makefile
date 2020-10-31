CC = gcc
CFLAGS = -I$(IDIR) -lm
IDIR = ./include/
SRCDIR = ./src/
SOURCES = $(SRCDIR)*.c

mast:
	$(CC) $(SOURCES) $(CFLAGS) -o $@