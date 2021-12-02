#include<stdio.h>
#include<string.h>

int main(void){
	
	int A_fish, B_fish, year;
	int fish_amount, c;
	char whichone;

	scanf("%d %d",&A_fish, &B_fish);
	scanf("%d", &year);

	for(c=0; c<year; c++){

		while (getchar()!='\n'); //very important!!!, if we didn't clean \n from scanf(year) %c will replace by \n 

		scanf("%c%d", &whichone, &fish_amount);

		if(whichone == 'A'){
			A_fish = (A_fish * 1.08) - fish_amount;
			B_fish = (B_fish * 1.08) + fish_amount;
		}
		else{
			A_fish = (A_fish * 1.08) + fish_amount;
			B_fish = (B_fish * 1.08) - fish_amount;
		}
		

	}

	printf("%d %d\n", A_fish, B_fish);

	return 0;
}
