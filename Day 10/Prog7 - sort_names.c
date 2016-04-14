/* Day 10
 * Question 7
 * Write a program to sort names of students in a class
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


 #include <stdio.h>
 #include <string.h>

 int main()
 {
 	int n, i, j;
 	printf("Enter the strength of the class: ");
 	scanf("%d", &n);
 	char class[n][80];

 	printf("Enter the names of the students:\n");
 	for(i=0; i<n; i++) scanf("%s", class[i]);


 	for(i=0; i<n; i++)	
 	{
 		for(j=0; j<n; j++)
 		{
 			if(strcmp(class[i], class[j]) <=0){
 				char temp[80];
 				strcpy(temp, class[i]);
 				strcpy(class[i], class[j]);
 				strcpy(class[j], temp);
 			}

 		}
 		
 	}

 	printf("\nStudents in the class: \n");	
 	printf("-----------------------\n");
 	for(i=0; i<n; i++) printf("%d %s\n", i+1, class[i]);

 	
 }


/* Output

Enter the strength of the class: 6
Enter the names of the students:
Akshay
Abhilash
Shreya
Kaustav
Swarnava
Nishat

Students in the class: 
-----------------------
1 Abhilash
2 Akshay
3 Kaustav
4 Nishat
5 Shreya
6 Swarnava

*/
