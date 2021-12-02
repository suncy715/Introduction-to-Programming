/*
  Prime numbers' table
  Sieve of Eratosthenes
*/

#include<stdio.h>

//#define N 10000
//int A[N+1];

int main(void){
	
	int i, j, N;

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	scanf("%d",&N);

	int A[N+1];

	/*intital the array*/
	for(i=0; i<N; i++){
		A[i] = 1;
	}
	
	/*Algorithm started*/
	for(i=2; i*i<=N; i++){

		if(A[i]){
			for(j=i*i; j<=N; j=j+i){
				A[j] = 0;
			}
		}
	}
	
	/*printf primes' list*/
	for (i=2; i<=N; i++){
		if(A[i]){
			printf("%d, ", i);
		}
	}

	printf("\n");

	return 0;
}
