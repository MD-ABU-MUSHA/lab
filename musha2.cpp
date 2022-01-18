#include<stdio.h>
#include<graphics.h>
#include<math.h>

int abs(int n)
{

    return((n>0)?n:(n*(-1)));
}


void DDA(int x0, int y0, int x1, int y1){

    int dx= x1-x0;
    int dy = y1-y0;


    int steps = abs(dx)>abs(dy)?abs(dx):abs(dy);


    float Xinc = dx/(float)steps;
    float Yinc = dy/(float)steps;


    float x = x0;
    float y = y0;


    for(int i = 0; i<= steps; i++)
    {

        putpixel(round(x), round(y), RED);

        x+=Xinc;
        y+=Yinc;
        delay(100);
    }

}


int main()
{

 int gd= DETECT,gm;
 initgraph(&gd,&gm,"");

 DDA(200,200,1400,1600);
 return 0;
}

