//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
   int r,c,i,j;
   printf("Enter the number of rows:\n");
   scanf("%d",&r);
   printf("Enter the number of columns:\n");
   scanf("%d",&c);
   printf("Enter the elements:\n");
   int a[r][c];
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
   scanf("%d\n", &a[i][j]);
   }
   }
   printf("Matrix:\n");
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
   printf("%d\n", a[i][j]);
   }
   }
   return 0;
}
