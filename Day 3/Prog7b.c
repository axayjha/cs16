/* Day 3
 * Question 7(b)
 * Write a program to display the grade of a student using switch case based on the following info:
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
 	int gradePoint;

 	printf("Enter student's mark: ");
 	scanf("%f", &mark);

 	gradePoint = mark/10;

 	switch(gradePoint)
 	{
 		case 10:
 			if(mark > 100) { printf("Invalid mark entered\n");	break; }	
 		case 9:
 			printf("Grade: O\n");
 			break;
 		case 8:
 			printf("Grade: E\n");
 			break;
 		case 7:
 			printf("Grade: A\n");
 			break;
 		case 6:
 			printf("Grade: B\n");
 			break;
 		
 		case 5:
 			printf("Grade: C\n");
 			break;
 		case 4:
 		case 3:
 		case 2:
 		case 1:
 		case 0:
 			if (mark < 0) {printf("Invalid mark entered\n");	break; }
 			printf("Grade: F\n");
 			break;
 		default:
 		  	printf("Invalid mark entered\n"); 			


 	}
 	
 }


/* Output

Enter student's mark: 40
Grade: F


*/