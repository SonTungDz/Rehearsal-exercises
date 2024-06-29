#include<stdio.h>
#include<math.h>
// Ex 8

int max3num(int a, int b, int c){
    if(a > b && a > c){
        return a;
    } else if( b > a && b > c){
        return b;
    } else {
        return c;
    }
}
int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", max3num(a,b,c));
    return 0;
}

