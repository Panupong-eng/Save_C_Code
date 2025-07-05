#include <stdio.h>
int main()
{
    float s1, s2, area, h;
    s1 = 2.0;
    s2 = 3.0;
    h = 4.0;
    area = 0.5 * (s1 + s2) * h;
    printf("The area of the trapezoid is: %.2f\n", area);
}