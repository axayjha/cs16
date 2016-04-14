/* Day 10
 * Question 6
 * Write a program to read and print the names of students in a class
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 int main()
 {
 	int n, i;
 	printf("Enter the strength of the class: ");
 	scanf("%d", &n);
 	char class[n][80];

 	printf("Enter the names of the students:\n");
 	for(i=0; i<n; i++) scanf("%s", class[i]);

 	printf("\nStudents in the class: \n");	
 	printf("-----------------------\n");
 	for(i=0; i<n; i++) printf("%d %s\n", i+1, class[i]);

 	
 }

/* Output

Enter the strength of the class: 5
Enter the names of the students:
Ayan
Abhilash
Akshay
Shreya
Kaustav

Students in the class: 
-----------------------
1 Ayan
2 Abhilash
3 Akshay
4 Shreya
5 Kaustav

*/
