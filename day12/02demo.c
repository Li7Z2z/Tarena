/*
 *      宏演示
 * */
#include <stdio.h>

#define PI          3.14f
#define CIRCLE(r)   2 * PI * r

int main()
{
    int radius = 0;
    printf("请输入圆的半径:");
    scanf("%d", &radius);
    printf("圆的周长 = %g\n", CIRCLE(radius));
    return 0;
}
