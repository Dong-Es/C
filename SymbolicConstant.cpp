#include<stdio.h>
#define EXCHANGE_RATE 8950 //시급
  
//한달 월급과 연봉을 구하는 프로그램을 만들것입니다 (시간당 최저시급)

int main(void)
{
	int time;	 // 몇시간
	int month;	 // 몇달
	int day;	 // 한달에 일하는 날
	int salary1; // 한달월급 
	int salary2; // 연봉

	printf("몇시간 일했는지 적으시오 : ");
	scanf("%d", &time);

	printf("한달에 일을 몇일 나가는지 적으시오 : ");
	scanf("%d", &day);

	printf("회사의 몇달 일했는지 적으시오 : ");
	scanf("%d", &month);

	salary1 = time * day* EXCHANGE_RATE; //한달 월급을 구하는 공식

	salary2 = salary1 * month;			 //연봉을 구하는공식

	printf("당신이 한달에 %d시간을 %d일씩 일은 한다면 당신의 한달 월급은 %d원이며 연봉은 %d원 입니다.", time,day,salary1,salary2 );

	return 0;
}
