#include<stdio.h>

int main(void)
{
int x;                            //변수 설정
int y;
int sum;

sum = x+y;                        //덧셈을 하는 공식
printf("a+b의 값은 : %d\n" sum);

sum = x-y;                        //뺄셈을 하는 공식
printf("a-b의 값은 : %d\n" sum);

sum = x*y;                        //곱셈을 하는 공식
printf("a+b의 값은 : %d\n" sum);

sum = x%y;                        //나눗셈을 하는 공식
printf("a+b의 값은 : %d\n" sum);

sum = x+y;                        //나머지를 구하는 공식
printf("a+b의 값은 : %d" sum);

return 0;                         //함수의 끝을 알리는 명령어

}

