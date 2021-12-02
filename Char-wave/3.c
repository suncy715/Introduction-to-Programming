#include<stdio.h>
int main(void){
	
	char ch;
	int a, b, c=0, i, j;

	scanf("%c %d %d", &ch, &a, &b);
	
	if(a == 0){
		return 0;
	}
	else if(a == 1){
		while(c < b){
			printf("%c\n", ch);
			c++;
		}
	}

	else
		printf("%c\n", ch);	

		while(c < b){
			for(i = 1; i < a; i++){
				for(j = 1; j <= i+1; j++){
					printf("%c", ch);
				}
				printf("\n");

			}	


			for(i = a-1; i >= 1; i--){
				for(j = i; j >= 1; j--){
					printf("%c", ch);
				}
				printf("\n");
			}
			c++;
		}
	return 0;
}
