#include<stdio.h>
int main(void){
	
	//


	int m, n, i, j;
	int A[20][20];

	scanf("%d %d", &m, &n);
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &A[i][j]);
		}
	}

	for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                	if(A[i][j]!=0){
				printf("%d %d %d\n", i, j, A[i][j]);
			}
                }
        }

	

	return 0;
}

