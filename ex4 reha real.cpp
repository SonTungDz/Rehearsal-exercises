#include<stdio.h>
#include<math.h>
// Ex 4
int main(){
	int n;
	int M = 0;
	int S = 0;
	scanf("%d", &n);
	int a[1001];
	for(int i = 0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0;i<n;i++){
		if((a[i] % 2 == 0)&& (a[i] % 3 == 0)){
			M++;
		}
	}
	for(int i = 0;i<n;i++){
	    if((a[i] % 2 != 0) && (a[i] % 3 == 0)){
	        S = S + a[i];
	    }
	}
    if(M > 5 ){
        printf("%d", S);
    } else if(M >= 1 && M <= 5){
        printf("%d", 2 * S);
    } else if(M == 0){
        printf("%d", n);
    }
	return 0;
}
