/* Test
 * Question 7
 * Write a program to find LCM of two positive integers entered by user
 * Version 2
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


#include <stdio.h>
int main()
{
  int num1, num2, max;
  printf("Enter two positive integers: ");
  scanf("%d %d", &num1, &num2);
  max=(num1>num2) ? num1 : num2; /* maximum value is stored in variable max */
  while(1)                       /* Always true. */
  {
      if(max%num1==0 && max%num2==0)
      {
          printf("LCM of %d and %d is %d\n", num1, num2, max);
          break;          /* while loop terminates. */
      }
      ++max;
  }
  return 0;
}

/* Output

Enter two positive integers: 12
21
LCM of 12 and 21 is 84

*/