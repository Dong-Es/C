#include<stdio.h>

int main(void)
{
	int score;
	
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("A등급입니다.\n");
	}
	else if (score >= 80) {
		printf("B등급입니다.\n");
	}
	else if (score >= 70) {
		printf("C등급입니다.\n");
	}
	else if (score >= 60) {
		printf("D등급입니다.\n");
	}
	else {
		printf("F등급입니다.\n");
	}
	printf("수고하셨습니다.");

	return 0;
}
