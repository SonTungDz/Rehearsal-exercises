#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	while(1){
		if(n>0 && n < 10){
			break;
		} else{
			printf("Invalid number, please try again!");
			return 0;
		}
	}
	int a[10001];
	int countA = 0;
	int countB = 0;
	for(int i = 0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0;i<n;i++){
		if(a[i] < 0 ){
			printf("Error");
		}
	}
	for(int i = 0;i<n;i++){
		if(a[i] % 4 == 1){
			countA += a[i];
		}
	}
	for(int i = 0;i<n;i++){
		if(a[i] % 4 == 2){
			countB += a[i];
		}
	}
	int countD = 0;
	int C = (2 * countA) + countB;
	for(int i = 0;i<n;i++){
		if(a[i] >= C){
			countD++;
		}
	}
	printf("%d %d %d %d", countA, countB, C, countD);
	return 0;
}
