


#include<stdio.h>

int main(int argc, int *argv[]) {
	system("clear");
	int i;
	int *sum = 0;
	if(argc < 3) {
		printf("\n\nPlease enter two numbers ");
		return 0;
	}
	int *temp;
	for(i = 0; i < argc-1; i++) {
		(*(temp)) = (*(argv +i));
		(*(sum)) = (*(sum)) + (*(temp));
	}
	printf("%d", (*(sum)));
	//printf("\n%d + %d = %d", (*(argv+1)), (*(argv+2)), sum);
	printf("\n\n");
	return 0;
}
