// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int numbers [5];
    int size = 5;
    int i;
    
    printf(" Array size 5.\n");
    printf("Please enter numbers:\n");
    
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("\n The array you entered are:\n");
    for (i = 0; i < 5; i++) {
        printf("Element at indexs %d: %d\n", i, numbers[i]);
    }
    
    printf("\n Systummm Faaddd diye bhai!\n");
    

    return 0;
}
