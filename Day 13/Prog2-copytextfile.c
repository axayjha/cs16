/* Day 13
 * Question 2
 * Write a program to copy text from one file into another using command line argument
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main(int argc, char *argv[])
 {
     FILE * fp1, *fp2;
     char ch[1000];
     fp1 = fopen(argv[1], "r");
     fp2 = fopen(argv[2], "w");
     
     fscanf(fp1,"%s", ch);     
     do
     {
         fprintf(fp2, "%s\n", ch);
         fscanf(fp1,"%s", ch);      
            
     } while(!feof(fp1));
     
     fclose(fp1);
     fclose(fp2);
 }
 
 /* Output
 
 $ cat > one.txt
 akshay
 anand
 ^D
 
 $ ./run.sh Prog2* one.txt two.txt
 $ cat two.txt
 akshay
 anand
 
 */
 
 