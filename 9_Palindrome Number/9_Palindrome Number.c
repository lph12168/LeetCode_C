/*
9. 回文数
判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
*/
#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
    int a,b;\
    a = x;
    b = 1;

    if (x <= 0) //负数有负号不是回文数
        return false;

    if (x % 10 == 0) //个位数是0不是回文数
        return false;

    while (a >= 10) { //b是最高位,a是最低位
        b *= 10;
        a /= 10;
    }

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    while (x != 0) {
        if (x % 10 != x / b) {
            return false;
        }
        x = x % b / 10; //比如12321, 12321%10000==2321 可以将最高位去掉，然后 2321/10==232 可以将最低位去掉
        b /= 100;
    }
    return true;
}

void main()
{
    int input;
    bool output;
    printf("Please input a value !\n");
    scanf("%d", &input);
    output = isPalindrome(input);
    printf("input value is %d\n", input);
    if (output)
        printf("the value is Palindrome\n");
    else
        printf("the value is not Palindrome\n");
    
}
