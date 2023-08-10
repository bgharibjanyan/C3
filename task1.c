#include<stdio.h>

int main(){

int sideLength=0;

scanf("%i",&sideLength);

char sym='*';


for(int i=0;i<sideLength;i++)
{

        for(int j=0;j<i;j++)
        {
                printf("%c",sym);
        }
	puts("\n");
}

return 0;

}

