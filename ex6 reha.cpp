#include<stdio.h>
#include<math.h>
// Ex 6

long int power2(int n){
    long int max = 0;
   for(int i = 0; i < n;i++){
       if(pow(2,i) < n){
           max = i;
       }
   }
   return max;
}
    
int main(){
    int n;
    scanf("%d", &n );
    if( n< 1) {
        printf("Invalid.");
        return 0;
    }
    printf("%ld", (long int)pow(2, power2(n)));
    return 0;
}

