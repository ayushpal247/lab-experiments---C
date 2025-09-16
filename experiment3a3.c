// wap to check if three points are collinear or not.
#include <stdio.h>
int main()
{    
    int x1, x2, x3, y1, y2, y3, area;  
    printf("enter all three coordinates: x1,y1,x2,y2,x3,y3");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("the coordinates are: (%d,%d),(%d,%d),(%d,%d)", x1, y1, x2, y2, x3, y3);
   
    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))/2;
    if (area == 0)
    {
        printf("\n the points are collinear");
    }
    else
    {
        printf("\n the points are non collinear");
    }
    return 0;
}
