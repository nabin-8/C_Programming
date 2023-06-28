#include <stdio.h>

main()
{
    int i,n;
    float x,y,xp,h,m1,m2;
    float func(float,float);
    printf("\n Solution by HEUN's METHOD \n \n");

    printf("Input initial value of x and y\n");
    scanf("%f %f",&x, &y);
    printf("Input x at which y is required \n");
    scanf("%f",&xp);
    printf("Input step-size, h \n");
    scanf("%f", &h);
    /*Compute number of steps required*/
    n= ((int)(xp-x)/h+0.5);
    /*Compute y recursively at each step */
    for(i=1;i<=n;i++)
    {
        m1 = func(x,y);
        m2 = func(x+h,y+m1*h);
        x =x +h;
        y = y+ 0.5*h*(m1+m2);
        printf("%5d %10.6f %10.6f \n", i,x,y);

        /* write the final result*/
        printf("\nValue of y at x = %f is %f \n", x,y);

    }

}

    float func(float x, float y)
    {
        float f;
        f =2.0 * y/x;
        return(f);
    }

