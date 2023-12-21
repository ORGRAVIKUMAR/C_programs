#include <stdio.h>
void  main()
{
    int x,y;
    printf("Enter values for x and y");
    scanf("%d",&x);
    scanf("%d",&y);
    x = x + y; 
    y = x - y; 
    x = x - y; 
    printf("After Swapping: x = %d, y = %d", x, y);
    
}


