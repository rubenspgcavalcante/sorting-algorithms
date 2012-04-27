# -- Macros -- #
SRC = source/
OBJ = objects/
HDR = headers/

# -- Rules -- #
$(SRC)*.c : $(HDR)*.h
	gcc -c $(SRC)bubble_sort.c -o $(OBJ)bubble_sort.o
	gcc -c $(SRC)insertion_sort.c -o $(OBJ)insertion_sort.o
	gcc -c $(SRC)selection_sort.c -o $(OBJ)selection_sort.o
	gcc -c $(SRC)merge_sort.c -o $(OBJ)merge_sort.o
	gcc -c $(SRC)shell_sort.c -o $(OBJ)shell_sort.o
	