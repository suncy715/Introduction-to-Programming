#include<stdio.h>
int main(void){
	
	int size, i, j, offset;
	int A[20][20];
	
	scanf("%d", &size);
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &A[i][j]);
		}
	}

	//rotate
	for(i=0; i<size; i++){
		for(j=0; j<=i; j++){
			printf("%d ", A[i-j][j]);
		}
		printf("\n");
	}
	

	for(i=size-2; i>=0; i--){
                for(j=0; j<=i; j++){
                        printf("%d ", A[size-1-j][size-1-(i-j)]);
                }
                printf("\n");
	}

	//(0, 0) (0, 1) (0, 2)
	//
	//(1, 0) (1, 1) (1, 2)
	//
	//(2, 0) (2, 1) (2, 2)

	return 0;
}
