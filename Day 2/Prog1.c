/* Day 2
 * Question 1
 * Write a program to show the use of relational operators (<, <=, >, >=, ==, !=)
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int a=1, b=3, c=2, d=4, e =4, i;

 	i = a<b;
 	printf("%d\n", i);

 	i = b<=d;
 	printf("%d\n", i);

 	i = e>a;
 	printf("%d\n", i);

 	i = c>=e;
 	printf("%d\n", i);

 	i = d==e;
 	printf("%d\n", i);

 	i = d!=a;
 	printf("%d\n", i);


 }


/* Output

   1
   1
   1
   0
   1
   1

   */
