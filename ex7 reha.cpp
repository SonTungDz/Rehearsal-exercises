#include<stdio.h>
#include<math.h>
// Ex 7
int bigger(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", bigger(a,b));
    return 0;
}

