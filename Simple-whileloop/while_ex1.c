#include<stdio.h>

int main(void){
	int i, j;

	//Normal case
	i = 1;
	while(i<=9){
		j = 1;
		while(j<=9){
			printf("%3d", i*j);
			j = j + 1;	
		}
	printf("\n");
	i = i + 1;
	}

	printf("\n");
	
	//upper-left triangle
	//1  2  3  4  5  6  7  8  9
	//2  4  6  8 10 12 14 16
	//3  6  9 12 15 18 21
	//4  8 12 16 20 24
	//5 10 15 20 25
	//6 12 18 24
	//7 14 21 
	//8 16
	//9
	//
	
	i = 1;
	while(i<=9){
		j = 1;
		while(j<=10-i){
			printf("%3d", i*j);
			j = j + 1;
		}
	printf("\n");
	i = i + 1;
	}
	
	printf("\n");
		
	//upper-right triangle
	//1  2  3  4  5  6  7  8  9
	//   4  6  8 10 12 14 16 18
	//      9 12 15 18 21 24 27
	//        16 20 24 28 32 36
	//           25 30 35 40 45
	//              36 42 48 54
	//                 49 56 63
	//                    64 72
	//			 81
	//
	
	i = 1;
	while(i<=9){
		j = 1;
		while(j < i){
			printf("   ");
			j = j + 1;
		}
		while(j <= 9){
			printf("%3d", i*j);
			j = j + 1;
		}	
	printf("\n");
	i = i + 1;
	}

	printf("\n");

	//lower-left triangle
	//1
	//2  4
	//3  6  9
	//4  8 12 16
	//5 10 15 20 25
	//6 12 18 24 30 36
	//7 14 21 28 35 42 49
	//8 16 24 32 40 48 56 64
	//9 18 21 36 45 54 63 72 81
	
	i = 1;
	while(i <= 9){
		j = 1;
		while (j <= i){
			printf("%3d", i*j);
			j = j + 1;
		}
	printf("\n");
	i = i + 1;
	} 

	printf("\n");

	//lower-right triangle
	//                        9
	//                    16 18
	//                 21 24 27
	//              24 28 32 36
	//           25 30 35 40 45
	//        24 30 36 42 48 54
	//     21 28 35 42 49 56 63
	//  16 24 32 40 48 56 64 72
	//9 18 21 36 45 54 63 72 81
	
	i = 1;
	while(i <= 9){
		j = 1;
		while(j < 10-i){
			printf("   ");
			j = j + 1;
		}
		while(j <= 9){
			printf("%3d", i*j);
			j = j + 1;
		}
	printf("\n");
	i = i + 1;
	}
	return 0;
	
}

