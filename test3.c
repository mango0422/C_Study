#include <stdio.h>

int main(void){
    int num1=0, num2=0, sum=0;
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num1);
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num2);
    sum = num1 + num2;
    printf_s("두 숫자의 합은 %d 이다.\n",sum);

    int num3=0, num4=0, sub=0;
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num3);
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num4);
    sub = num3 - num4;
    printf_s("두 숫자의 차는 %d 이다.\n",sub);

    int num5=0, num6=0, mul=0;
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num5);
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num6);
    mul = num5 * num6;
    printf_s("두 숫자의 곱은 %d 이다.\n", mul);

    int num7=0, num8=0;
    float div = 0.0;
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num7);
    printf_s("숫자를 입력하시오: ");
    scanf_s("%d", &num8);
    div = (float)(num7 / num8);
    printf_s("나눗셈 결과는 %f 이다.\n", div);
}