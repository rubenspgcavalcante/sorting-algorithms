# -- Macros -- #
SRC = source/
OBJ = objects/
HDR = headers/
SO  = so/
SUFIX = _sort
FLAGS = -c -ansi -pedantic -fPIC -Wall -std=c99
# -- Rules -- #
all:
	gcc $(FLAGS) $(SRC)bubble$(SUFIX).c      -o $(OBJ)bubble$(SUFIX).o
	gcc $(FLAGS) $(SRC)insertion$(SUFIX).c   -o $(OBJ)insertion$(SUFIX).o
	gcc $(FLAGS) $(SRC)selection$(SUFIX).c   -o $(OBJ)selection$(SUFIX).o
	gcc $(FLAGS) $(SRC)merge$(SUFIX).c       -o $(OBJ)merge$(SUFIX).o
	gcc $(FLAGS) $(SRC)shell$(SUFIX).c       -o $(OBJ)shell$(SUFIX).o
	gcc $(FLAGS) $(SRC)quick$(SUFIX).c       -o $(OBJ)quick$(SUFIX).o
	gcc $(FLAGS) $(SRC)counting$(SUFIX).c    -o $(OBJ)counting$(SUFIX).o
	gcc $(FLAGS) $(SRC)bucket$(SUFIX).c      -o $(OBJ)bucket$(SUFIX).o
	gcc $(FLAGS) $(SRC)radix$(SUFIX).c       -o $(OBJ)radix$(SUFIX).o
	gcc $(FLAGS) $(SRC)heap$(SUFIX).c        -o $(OBJ)heap$(SUFIX).o
	
share:
	gcc -shared -o $(SO)bubble$(SUFIX).so       $(OBJ)bubble$(SUFIX).o
	gcc -shared -o $(SO)insertion$(SUFIX).so    $(OBJ)insertion$(SUFIX).o
	gcc -shared -o $(SO)selection$(SUFIX).so    $(OBJ)selection$(SUFIX).o
	gcc -shared -o $(SO)merge$(SUFIX).so        $(OBJ)merge$(SUFIX).o
	gcc -shared -o $(SO)shell$(SUFIX).so        $(OBJ)shell$(SUFIX).o
	gcc -shared -o $(SO)quick$(SUFIX).so        $(OBJ)quick$(SUFIX).o
	gcc -shared -o $(SO)counting$(SUFIX).so     $(OBJ)counting$(SUFIX).o
	gcc -shared -o $(SO)bucket$(SUFIX).so       $(OBJ)bucket$(SUFIX).o
	gcc -shared -o $(SO)radix$(SUFIX).so        $(OBJ)radix$(SUFIX).o
	gcc -shared -o $(SO)heap$(SUFIX).so         $(OBJ)heap$(SUFIX).o
