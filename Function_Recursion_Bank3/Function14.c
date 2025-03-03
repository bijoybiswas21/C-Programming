#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int add = sum(4, 8);
    printf("sum is :%d", add);
    return 0;
}