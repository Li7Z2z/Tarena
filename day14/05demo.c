/*
 *      二级指针演示
 * */
#include <stdio.h>

void set_null(int **pp_num)
{
    *pp_num = NULL; 
}
int main()
{
    int num = 0;
    int *p_num = &num;
    set_null(&p_num);
    printf("p_num = %p\n", p_num);
    return 0;
}
