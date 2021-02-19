//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
  

    //Write your code here
     int a[50], i, size, large, small;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements of the array:\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    large = a[0];
    for(i = 1; i < size; i++)
    {
        if(large < a[i])  
        {
            large = a[i]; 
        }
    }
    printf("The largest element is: %d\n",large);

    small = a[0];  
    for(i = 1; i < size; i++) { if(small>a[i])
        {
            small = a[i];   
        }
    }
    printf("The smallest element is: %d\n", small);
    return 0;
    }
