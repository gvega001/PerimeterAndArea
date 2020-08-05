#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,w;

    h = 3.2;
    w = 5.3;

    double area=0;
    area = h*w;

    double perimeter=0;
    perimeter = (h+w)*2.0;

    printf("\nThe width is: %e", w);

    printf("\nThe height is: %e", h);

    printf("\nThe perimeter of the rectangle is %f ", perimeter);
    printf("\nThe area of the rectangle is %f" , area);

}
