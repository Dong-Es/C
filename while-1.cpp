#include<stdio.h>

int main(void)
{
	int Salary;
	int Month;
	int money;
	int i;

	i = 1;

	printf("몇개월간 은행에 돈을 넣을것인지 적으시오 : ");
	scanf_s("%d", &Month);

	while (i<=Month)
	{
		Salary = Month * 3500000;
		money = Salary * 1.024;
		i++;
	}
	printf("%d달동안 은행에 넣으신돈의 총합은 %d원이고 이율이2.4%더해서 %d원입니다.", Month, Salary,money);
	printf("끝났습니다.");

	return 0;
}
