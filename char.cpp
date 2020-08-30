#include<stdio.h>

int main(void)
{
	char a = 'p';
	char b = 'p';
	char c = 'a';					//char형에 변수 설정 char = "a"라고 쓰면 오류가 일어난다 char ""(작은 따음표)라고 써야한다 
	char d = 'l';
	char e = 'e';

	printf("abcde를 합치면 만들어지는 단어는? :  %c %c %c %c %c" ,c,a,b,d,e );

	return 0;
	
}
