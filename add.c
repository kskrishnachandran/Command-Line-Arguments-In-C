




#include<stdio.h>

int main(int argc,int argv[]) {
	system("clear");
	int i;
	int sum = 0;
	if(argc < 3) {
		printf("\n\nPlease enter two numbers ");
		return 0;
	}
	for(i = 0; i < argc-1; i++) {
		sum = sum + argv[i];
	}
	
	printf("%d + %d = %d", argv[1], argv[2], sum);
	printf("\n\n");
	return 0;
}
