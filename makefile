SRCDIR = source
SRC = $(SRCDIR)/*.c
SRCS = $(wildcard $(SRC))
OBJREF = $(SRCS:.c=.o)
OBJ = $(subst source, objects, $(OBJREF))

SOBJREF = $(SRCS:.c=.so)
SOBJ = $(subst source, so, $(SOBJREF))

CFLAGS = -c -ansi -pedantic -fPIC -Wall -std=c99
CSHAREFLAGS = -shared -Wl,-soname,

all: $(OBJ) $(SOBJ)
	
%.o: $(SRCS)
	gcc $(CFLAGS) $< -o $@

%.so: $(SRCS)
	gcc $(CSHAREFLAGS)$@.1 -o $@ $<

clean:
	rm -f objects/*.o
	rm -f so/*.so
