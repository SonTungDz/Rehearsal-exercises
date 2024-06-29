#include<stdio.h>
#include<math.h>
// Ex 5

int checkevenodd(int n){
        if(n % 2 != 0){
            return 1;
        } else {
            return 0;
        }
    }
    
int main(){
    int n;
    scanf("%d", &n);
    if(checkevenodd(n)){
        printf("odd");
    } else{
        printf("even");
    }
    return 0;
}
