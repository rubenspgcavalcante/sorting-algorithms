# -- Macros -- #
SRC = source/
OBJ = objects/
HDR = headers/
SUFIX = _sort

# -- Rules -- #
$(SRC)*.c : $(HDR)*.h
	gcc -c $(SRC)bubble$(SUFIX).c -o $(OBJ)bubble$(SUFIX).o
	gcc -c $(SRC)insertion$(SUFIX).c -o $(OBJ)insertion$(SUFIX).o
	gcc -c $(SRC)selection$(SUFIX).c -o $(OBJ)selection$(SUFIX).o
	gcc -c $(SRC)merge$(SUFIX).c -o $(OBJ)merge$(SUFIX).o
	gcc -c $(SRC)shell$(SUFIX).c -o $(OBJ)shell$(SUFIX).o
	gcc -c $(SRC)quick$(SUFIX).c -o $(OBJ)quick$(SUFIX).o
	gcc -c $(SRC)counting$(SUFIX).c -o $(OBJ)counting$(SUFIX).o
	gcc -c $(SRC)bucket$(SUFIX).c -o $(OBJ)bucket$(SUFIX).o
	gcc -c $(SRC)radix$(SUFIX).c -o $(OBJ)radix$(SUFIX).o
	gcc -c $(SRC)heap$(SUFIX).c -o $(OBJ)heap$(SUFIX).o