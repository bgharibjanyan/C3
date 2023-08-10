#include<stdio.h>

int main(){

	static int arrLength=10;

	int numbers[arrLength];

	int sum=0;

	for(int i=0;i<arrLength;i++)
	{
		scanf("%i",&numbers[i]);
		sum += numbers[i];
	}
	printf("%i",sum);

	

return 0;
}
