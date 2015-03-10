




#include<stdio.h>

int main(int argc,int argv[]) {
	system("clear");
	int i;
	int sum = 0;
	for(i = 0; i < argc-1; i++) {
		printf("%d+",argv[i]);
		sum +=argv[i];
	}
	printf(" = %d", sum);
	printf("\n\n");
	return 0;
}
