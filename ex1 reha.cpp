#include<stdio.h>
#include<math.h>

int main(){
	double x, y;
	scanf("%lf %lf", &x, &y);
	double f2 = y * (5 - x);
	double f1 = pow(x,2) + pow(y,2) - 5*x*y;
	if(f1<0) {
		f1 *= -1;
		printf("%.2lf", f1 + f2);
	} else {
		printf("%.2lf", f1 + f2);
	}
	return 0;
}
