#include<stdio.h>
#include<math.h>
// Ex 3
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	if(a < 0 && b >= 0){
		printf("%d", a);
	} else if(a >= 0 && b < 0){
		printf("%d", b);
	} else if(a<0 && b<0){
		printf("%d", 2 * a);
	} else if(a>=0 && b >= 0){
		printf("%d", a+b);
	}
	
	return 0;
	
}
