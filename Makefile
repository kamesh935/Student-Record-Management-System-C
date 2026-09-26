CC = gcc

OBJ = main.o stud_add.o stud_del.o stud_mod.o stud_show.o stud_sort.o stud_save.o

student: $(OBJ)
	$(CC) -o student $(OBJ)

main.o: main.c student.h
	$(CC) -c main.c

stud_add.o: stud_add.c student.h
	$(CC) -c stud_add.c

stud_del.o: stud_del.c student.h
	$(CC) -c stud_del.c

stud_mod.o: stud_mod.c student.h
	$(CC) -c stud_mod.c

stud_show.o: stud_show.c student.h
	$(CC) -c stud_show.c

stud_sort.o: stud_sort.c student.h
	$(CC) -c stud_sort.c

stud_save.o: stud_save.c student.h
	$(CC) -c stud_save.c

clean:
	rm -f *.o student student.dat
