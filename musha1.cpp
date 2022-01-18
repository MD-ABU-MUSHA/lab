#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd= DETECT, gm;
    int x, x1,y, y1, dx,dy,m,b;
    initgraph(&gd, &gm," ");

    printf("\n\n Enter X: ");
    scanf("%d", &x);


    printf("\n\n Enter Y: ");
    scanf("%d", &y);


    printf("\n\n Enter X1: ");
    scanf("%d", &x1);


    printf("\n\n Enter Y: ");
    scanf("%d", &y1);


    dy= y1-y;
    dx=x1-x;
    m= dy/dx;
    b=y-(m*x);

    for(x;x<=x1;x++)
    {

        y=(m*x)+b;
        putpixel(x,y,1);
        delay(100);
        printf("X = %d; Y = %d \n\n", x,y);
    }

    getch();
}
