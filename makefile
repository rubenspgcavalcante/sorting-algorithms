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
	gcc -c $(SRC)quick_sort.c -o $(OBJ)quick_sort.o
	gcc -c $(SRC)counting_sort.c -o $(OBJ)counting_sort.o
	gcc -c $(SRC)bucket_sort.c -o $(OBJ)bucket_sort.o
	gcc -c $(SRC)radix_sort.c -o $(OBJ)radix_sort.o
	gcc -c $(SRC)heap_sort.c -o $(OBJ)heap_sort.o