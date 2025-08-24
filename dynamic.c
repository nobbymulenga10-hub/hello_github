 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

       struct student {

         int id;
        char name[70];
        double marks;

      };


    int main() {

         struct student *students = NULL; // pointer to students 
         int count = 0;      // number of students
          int choice;


         while (1) {
              printf("\n=== student Database ===\n");

              printf("1 . Add student\n");

              printf("2 .  Display students\n");

              printf("3 .  Exit\n");

              printf("Enter your choice: ");

              scanf("%d", &choice);



              if ( choice == 1) {

                // Add new student

                count ++;

                students = realloc(students, count *  sizeof(struct student));

                 if (students == NULL) {

                printf("Memory allocation failed!\n");
                 
                return 1;
                 }

                printf("Enter ID :");

                scanf("%d", &students[count  -  1].id);

               printf("Enter Name: ");

              scanf("%s",   students[count - 1 ].name);

             printf("Enter  marks:  ");

             scanf("%f",  &students[count - 1].marks);


            }

          else if (choice == 2) {

         // Display  students

          if  (count == 0)  {

        printf("No records found. \n");

       }else {

       printf("\n--- Student Records ----\n");

          for (int i =0; i < count;i++) {

            printf(" ID: %d, Name: %s, Marks: %.2lf\n", students[i].id, students[i].name, students[i].marks);

         }

    }

  } else if (choice ==3) {

    // exit

    free(students);// free memory before exit

   printf("Exiting ....\n");

    break;

   } else {

     printf("Invalid choice!\n");

   }

  }

  return 0;

 }



