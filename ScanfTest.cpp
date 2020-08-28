//우리 가족의 나이의 평균연령을 구하는 프로그램을 만들어보자
#include<stdio.h>

int main(void)

{
    float father;         //float실수
    float mother;
    float sister;         //변수를 선언
    float brother;
    float me;

    float FamliyAge;

    printf("아버지의 나이를 입력하시오 : ");    //모니터에 출력해야 할때 쓰는 명령어
    scanf("%f", &father);                     //키보드로 입력을 받아야할때 쓰는 명령어

    printf("어머니의 나이를 입력하시오 : ");
    scanf("%f", &mother);                     //int형일때는 %d이지만 float형일때는 %f를써야한다

    printf("누나의 나이를 입력하시오 : ");
    scanf("%f", &sister);

    printf("동생의 나이를 입력하시오 : ");
    scanf("%f", &brother);

    printf("나의 나이를 입력하시오 : ");
    scanf("%f", &me);

    FamliyAge = (father + mother + sister + brother + me)/5;    //평균을 계산하는 공식
    printf("우리 가족의 평균 나이는 %f 세이다", FamliyAge);

    return 0;                                     //함수의 정상적인 종료를 알리는 문장
}
