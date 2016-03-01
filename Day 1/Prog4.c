/* Question 4
 * Write a program to convert a temperature from celcius to farhenhiet
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	float degC, degF;

 	printf("Enter the temperature in degree Celcius: ");
 	scanf("%f", &degC);

 	degF = (9*degC)/5 + 32;

 	printf("%.2f degC in degF is %.2f\n", degC, degF);
 }

 /* Output

 Enter the temperature in degree Celcius: 100
 100.00 degC in degF is 212.00

*/
