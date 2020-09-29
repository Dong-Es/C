#include<stdio.h>

int main(void)
{
	int Salary;
	int i = 0;

	while (i <= 12)
	{
		Salary = i * 3500000;
		printf("%d달만큼 일을하면 얻는 돈은 %d원입니다.\n", i, Salary);
		i++;
	}
	printf("끝났습니다.");
	return 0;
}
