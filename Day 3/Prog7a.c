/* Day 3
 * Question 7(a)
 * Write a program to display the grade of a student using if-else based on the following info:
 * 
 * ----------------------
 * Mark            Grade
 * ----------------------
 * 90 - 100          O
 * 80 - 89           E
 * 70 - 79           A
 * 60 - 69           B
 * 50 - 59           C
 *  0 - 50           F 
 * ----------------------
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	float mark;

 	printf("Enter student's mark: ");
 	scanf("%f", &mark);

 	if (mark >= 90 && mark <= 100)
 		printf("Grade: O\n");
 	else if (mark >= 80 && mark < 90)
 		printf("Grade: E\n");
 	else if (mark >= 70 && mark < 80)
 		printf("Grade: A\n");
 	else if (mark >= 60 && mark < 70)
 		printf("Grade: B\n");
 	else if (mark >= 50 && mark < 60)
 		printf("Grade: C\n");
 	else if (mark >= 0 && mark < 50)
 		printf("Grade: F\n");
 	else
 		printf("Invalid mark entered\n");
 }


/* Output

Enter student's mark: 85
Grade: E

*/