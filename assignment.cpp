#include<stdio.h>

int main(void)
{
	int x,y,z;

	x = 3;

	printf("수식에 x+1의값은 %d\n ", x + 1);
	printf("수식에 y=x+2의값은 %d\n", y=x+2);
	printf("수식에 y=10+(x=2+7)의값은 %d\n ", y = 10 + (x = 2 + 7));
	printf("수식에 z=x+y는 %d", z = x + y);

	return 0;
}
