#include<stdio.h>
#include<string.h>

int main(void){
	
	//A[5][0]
	//
	//B[0][5][5][0][5][0]
	

	char A[5], B[10];
	int maximum = 0, i, j, k, N;
	int count;
	int eq;
	int max_count = 0;

	scanf("%s", A);
	scanf("%d", &N);
	for(k=0; k<N; k++){
		scanf("%s", B);

		count = 0;

		for(i = 0; i <= strlen(B)-strlen(A); i++){
			eq = 1;
			for (j = 0; j < strlen(A); j++){
				if(A[j] != B[i+j]){
					eq = 0;
					break;
				}
			}
			if(eq == 1){
				count = count + 1;
			}
		}

		if(count > max_count){
			max_count = count;
		}
	}

	printf("%d\n", max_count);

	return 0;
}
