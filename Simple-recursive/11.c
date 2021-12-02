#include<stdio.h>

/*
用 recursive 方式，產生下面的輸出
Input: 10 
Output: ((((1+2)*3+4)*5+6)*7+8)*9+10=4555 
Input: 11 
Output: (((((1+2)*3+4)*5+6)*7+8)*9+10)*11=50105
*/

int f(int x);

int main(void){
	printf("=%d\n", f(10));
	return 0;
}


int f(int x){

	int ans;
			
	
	if(x==1){
		printf("%d", x);
		return x;
	}

	
  	if(x%2!=0){
		printf("(");
  	}
  	else{
  	}

	if(x%2==0){
		ans = x+f(x-1);
    		printf("+%d", x);
	}
	else{
		ans = x*f(x-1);
		printf(")*%d", x);
	}

	return ans;
}
