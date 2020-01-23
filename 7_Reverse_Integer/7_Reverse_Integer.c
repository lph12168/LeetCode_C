/*
7. 整数反转
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
*/
#include <stdio.h>

int reverse(int x)
{

    int y = 0;
    int INT_MAX = 0x7fffffff;
    int INT_MIN = 0x80000000;
#if 0
    if (x > INT_MAX || x < INT_MIN) {
        printf("Input value overflow !\n");
        return 0;
    }
    while (x) {
        y = y * 10 + x % 10;  //递归
        x = x / 10;
    }
    printf("MAX = %d, MIN = %d\n", INT_MAX, INT_MIN);
    if (y > INT_MAX || y < INT_MIN)
        return 0;
    else
        return y;
#endif
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
            return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}
void main()
{
    int input, output;
    printf("Please input a value !\n");
    scanf("%d", &input);
    //printf("input = %d !\n", input);
    output = reverse(input);
    printf("input value is %d\nreverse value is %d\n", input, output);
}
