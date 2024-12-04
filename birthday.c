/*
 *
 * @name: Ian Ranstadler
 * @email: imransta@mtu.edu
 * @date: 12/03/2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        struct Student_t { //Group of variables used in this code
                int  id;
                char name[20];
                char birthday[10];
        };

        typedef struct Student_t Student;

        void printStudents(Student students[]); //This line calls the function

        int main(int argc, char *argv[]) {

                FILE *file = NULL; //opens the file students.txt
                char *filename = "student.txt";
                file = fopen(filename, "r");

                if (file == NULL) { //This line checks to see if the file could be opened
                        fprintf(stderr, "This file could not be opened: %s\n", filename);
                        return -1;
                }

                Student students[10];

                int n = 0;
        while (fscanf(file, "%d %s %s", &students[n].id, students[n].name, students[n].birthday) == 3 && n< 10) {
                n++;
        }
        fclose(file); //closes the file after the program has read it

        printStudents(students);
        }

void printStudents(Student students[]) { //The part that does the sorting and the printing
        int processed[10] = {0}; //keeps track of the names already read

        for (int n = 0; n < 10; n++) {

                if (processed[n] == 1){ //skips a name if its already been read
                        continue;
                }

                printf("\n%s", students[n].birthday); //print the names in the file

                for (int d = 0; d < 10; d++) {
                        if(strcmp(students[n].birthday,students[d].birthday) == 0) {
                                processed[d] = 1;
                                printf("%s(%d)",students[d].name, students[d].id); //print the names of people who share birthdays
                        }
                }
        }

        printf("\n");
}
