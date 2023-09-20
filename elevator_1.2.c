#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp = fopen("./input.txt", "r");
	if (fp == NULL) {
		printf("fail to open the file");
		return -1;
	}

	int time = 0;
	int from, to, at;
	fscanf(fp, "elevator %d\n%d %d", &at, &from, &to);
	
	printf("At\tTime\tNumber\n");
	printf("%d\t0\t0\n", at);
	time += abs(from - at);
	printf("%d\t%d\t1\n", from, time);
	time += abs(to - from);
	printf("%d\t%d\t0\n", to, time);

	return 0;
}
