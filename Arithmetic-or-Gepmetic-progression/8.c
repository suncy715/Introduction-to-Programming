#include<stdio.h>
#include<string.h>

int main(void){

	int a, b, c, d, e, R, D;
	scanf("%d%d%d%d",&a, &b, &c, &d);

	R = b / a;
	D = b - a;

	if(b == a*R && c == a*R*R && d == a*R*R*R){
		printf("Geometric progression!\n");
		printf("%d %d", e = a*R*R*R*R, R);
	}

	else if(b == a+D && c == a + 2*D && d == a + 3*D){
		printf("Arithmetic progression!\n");
		printf("%d %d", e = a + 4 * D, D);
	}

	else{
	}

	return 0;
}
