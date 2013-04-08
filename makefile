C_FILES := $(wildcard source/*.c)
OBJ_FILES := $(addprefix objects/,$(notdir $(C_FILES:.c=.o)))
SO_FILES := $(addprefix so/,$(notdir $(C_FILES:.c=.so)))

CFLAGS = -c -ansi -pedantic -fPIC -Wall -std=c99
CSHAREFLAGS = -fPIC -shared -Wl,-soname,

all: $(OBJ_FILES) $(SO_FILES)
	
objects/%.o: source/%.c
	gcc $(CFLAGS) -o $@ $<

so/%.so: source/%.c
	gcc $(CSHAREFLAGS)$@.1 -o $@ $<

clean:
	rm -f objects/*.o
	rm -f so/*.so
