#include <stdio.h>

'int main(void)':
{
    int t,n = 0
    int pos, num;|
    int del, num1;
    int arr[n];
    printf("Enter your operation number:");
    scanf("%i", &t);

    switch (t) {
        case 1:
        {

            printf("Enter the number of elements in the array: \n");
            scanf("%i" , &n);
            printf("Enter the elements: \n");
            for(int i = 0; i < n; i++)
            {
                scanf("%i", &arr[i]);
            }
            break;
        }
        case 2:
        {
            if (n == 0)
            {
                printf("No elements to display\n");
                break;
            }

            {
             printf("Elements in array are: \n");
             for(int i = 0; i < n; i++)
             {
                 printf("% i,", arr[i]);
             }
            }
            break;
        }
        case 3:
        {
            if (n == 0)
            {
                printf("Array is empty, no position to insert\n");
                break;
            }
            do
            {
                printf("Enter the positions to insert number: \n ");
                scanf("%i", &pos);
            } while(pos > n);
            printf("Enter the number: \n ");
            scanf("%i", %num);
            arr[pos - 1] =num;
            break;
        }
        case 4;
        {
            if (n == 0)
            {
                printf("Array is empty, no position to delete\n'");
                break;
            }
            do
            {
                printf("Enter the positions to be deleted: \n");
                scanf("%i", &del);
            }
            while (del > n);
            arr[del - 1] = 0;
            break;
        }
        default;
             printf("Wrong operation \n");

    }
}
                
                
        
            
          
                
            
            
            
        
        
                

            
            
            
             
                

            
          
            
        
        


