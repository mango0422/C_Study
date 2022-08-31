#include <stdio.h>

int main(void){
    int num[2]={0, 0}, sub=0;
    for(int i=0; i<2; i++){
        int num0 = 0;
        printf_s("숫자를 입력하시오: ");
        scanf("%d", &num[i]);
    }
    sub = num[0] - num[1];
    printf_s("두 숫자의 차는 %d 이다.", sub);

    return (0);
}