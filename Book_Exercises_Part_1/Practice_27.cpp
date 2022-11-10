#include <stdio.h>
#include <conio.h>
    int main()
    {
    while(1){
 
        long int input_arr[5], odd_arr[5],even_arr[5];
        int i, j = 0, k = 0, n;
 
        printf("Enter the size of the array : ");
        scanf("%d", &n);
 
        printf("\nEnter the elements of the array : \n");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", & input_arr[i]);
            fflush(stdin);
        }
 
        /*  Copy odd and even elements into their respective arrays */
 
        for (i = 0; i < n; i++)
        {
            if (input_arr[i] % 2 == 0)
            {
                even_arr[j] = input_arr[i];
                j++;
            }
            else
            {
                odd_arr[k] = input_arr[i];
                k++;
            }
        }
 
        printf("The elements of the Odd array are : ");
        for (i = 0; i < k; i++)
        {
            if(i<(k-1)){
                      printf("%ld", odd_arr[i]);
                      printf(", ");
            }else{
                  printf(" %ld", odd_arr[i]);
            }
        }
 
        printf("\nThe elements of the Even array are : ");
        for (i = 0; i < j; i++)
        {
            if(i<(j-1)){
                      printf("%ld", even_arr[i]);
                      printf(", ");
            }else{
                  printf(" %ld", even_arr[i]);
            }
        }
        printf("\n");
        }
        return 0;
        getch();
    }
