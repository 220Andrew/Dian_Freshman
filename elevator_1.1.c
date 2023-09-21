#include<stdio.h>
#include<math.h>

int main()
{
	int from, to, at, time = 0;
	printf("Please type in 3 numbers A B C (from 1-10)\n"
		"For there being one person from floor A to B while the elevator stays at C\n");
	scanf_s("%d %d %d", &from, &to, &at);
	printf("At\tTime\tNumber\n");
	printf("%d\t0\t0\n", at);
	time += abs(from - at);
	printf("%d\t%d\t1\n", from, time);
	time += abs(to - from);
	printf("%d\t%d\t0\n", to, time);
	
	return 0;
}
