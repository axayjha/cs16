/* Day 7
 * Insertion Sort 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


 
#include <stdio.h>
 
int main()
{
  int n, i, j, t;
 
  printf("Enter the length of the array: ");
  scanf("%d", &n);

  int array[n];
 
  printf("\nEnter %d  elements of the array:\n", n);
 
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
 
  for (i = 1 ; i <= n - 1; i++) {
    j = i;
 
    while ( d > 0 && array[j] < array[j-1]) {
      t          = array[j];
      array[j]   = array[j-1];
      array[j-1] = t;
 
      j--;
    }
  }
 
  printf("Sorted array:\n");
 
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }
 
  return 0;
}