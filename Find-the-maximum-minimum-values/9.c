#include<stdio.h>
#include<stdlib.h>
int main (void){

	int x, y, i, j;
	int A[100][100];
	int max,  min;
	int imax, jmax, imin, jmin;

	scanf("%d%d",&x, &y);
	
	for(i=0; i<x; i++){
		for(j=0;j<y; j++){
			scanf("%d", &A[i][j]);
			if(i == 0 && j == 0){
				max = A[i][j];
				min = A[i][j];
				imax = jmax = i;
				imin = jmin = j;
			}
			else
				if(A[i][j] >= max){
					max = A[i][j];
					imax = i;
					jmax = j;
				}
				else if(A[i][j] < min){
					min = A[i][j];
					imin = i;
					jmin = j;
				}
				else{
				}

		}
	}

	printf("%d %d",abs(imax-imin)+abs(jmax-jmin),  max-min);
	
	return 0;
}
