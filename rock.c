   #include <stdio.h>
     int main(){

    int marks [100],i, n, sum, highest, lowest;
    float average;
    char choice;
   
     while (1) {
     sum = 0;

     printf("Enter student number:");
      scanf("%d",  &n);


    for(i=0; i < n; i++) {
    printf("Enter mark for student %d\n", i+1);
     scanf("%d", &marks[i]);
     sum += marks[i];
     }

  // display marks
 
   printf("marks entered \n");
    for(i=0; i < n; i++) {
     printf("%d\n",  marks[i]);
     }

    //  calculate 
     average = (float) sum/n;
     printf("\nAverage = %.2f\n", average);



      highest = marks[0];
     for(i=1; i < n; i++) {
       if(marks[i] > highest) {
        highest = marks[i];
         }
       }
      printf("The highest number = %d\n",  highest);

     lowest = marks[0];
     for(i=1; i < n ; i++) {
      if(marks[i] < lowest) {
        lowest = marks[i];
        }
       }
      printf("The lowest number = %d\n", lowest);


     // Ask user if they want to continue
        printf("\nDo you want to enter another set of marks? (y/n): ");
        scanf(" %c", &choice); // space before %c fixes newline issue

        if (choice == 'n' || choice == 'N') {
            printf("\nThank you for using the program!\n");
            break;  // exit the loop
            }      
        }
 return 0;

}























      
     
