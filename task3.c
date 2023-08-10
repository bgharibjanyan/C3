#include<stdio.h>

int sort(int arr[],const int size );

int main(){

const int size=10;

int nums[10] = {0,1,4,7,8,9,6,3,2,5};

sort(nums,10);

for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, nums[i]);
    }

return 0;
}

int sort(int arr[],const int size){

	for(int i=(size-1);i>=0;i--){
	
		for(int j=0;j<size-1;j++){
			
			if (arr[j]<arr[j+1]){
				
				int current =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=current;
			
			}
		}
	}

}
