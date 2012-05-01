# -- Macros -- #
SRC = source/
OBJ = objects/
HDR = headers/
SUFIX = _sort
FLAGS = -c -ansi -pedantic -Wall -std=c99
# -- Rules -- #
all:
	gcc $(FLAGS) $(SRC)bubble$(SUFIX).c -o $(OBJ)bubble$(SUFIX).o
	gcc $(FLAGS) $(SRC)insertion$(SUFIX).c -o $(OBJ)insertion$(SUFIX).o
	gcc $(FLAGS) $(SRC)selection$(SUFIX).c -o $(OBJ)selection$(SUFIX).o
	gcc $(FLAGS) $(SRC)merge$(SUFIX).c -o $(OBJ)merge$(SUFIX).o
	gcc $(FLAGS) $(SRC)shell$(SUFIX).c -o $(OBJ)shell$(SUFIX).o
	gcc $(FLAGS) $(SRC)quick$(SUFIX).c -o $(OBJ)quick$(SUFIX).o
	gcc $(FLAGS) $(SRC)counting$(SUFIX).c -o $(OBJ)counting$(SUFIX).o
	gcc $(FLAGS) $(SRC)bucket$(SUFIX).c -o $(OBJ)bucket$(SUFIX).o
	gcc $(FLAGS) $(SRC)radix$(SUFIX).c -o $(OBJ)radix$(SUFIX).o
	gcc $(FLAGS) $(SRC)heap$(SUFIX).c -o $(OBJ)heap$(SUFIX).o
