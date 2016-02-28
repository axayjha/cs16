/* Day 5
 * Question 1
 * Write a program to calculate the roots of a quadratic equation.
 * If it has imaginary roots then print the imaginary part of the roots.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <math.h>

 int main()
 {
 	double a, b, c, D, alpha, beta;

 	printf("Enter the coefficients of x^2 (a), x (b) and the constant (c) of the quad eq: \n");
 	scanf("%lf %lf %lf", &a, &b, &c);

 	D = b*b - 4*a*c ;

 	if (D > 0)
 	{
 		alpha = (-b + sqrt(D))/(2*a);
 		beta  = (-b - sqrt(D))/(2*a);
 		printf("Roots: %.3lf and %.3lf\n", alpha, beta);
 	}

 	else if (D == 0)
 	{
 		alpha = beta = -b/(2*a);
 		printf("Roots: %.3lf and %.3lf\n", alpha, beta);
 	}

 	else
 		printf("Imaginary roots. Imaginary part = %.3lf\n", D);


 }

 /* Output

 Enter the coefficients of x^2 (a), x (b) and the constant (c) of the quad eq: 
 1
 -5
 6
 Roots: 3.000 and 2.000

*/