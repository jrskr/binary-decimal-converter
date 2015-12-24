#include <stdio.h>
#include <math.h>


int main(){

	char ch = ' ';
	
	printf("Enter D to convert a decimal number to binary and B to convert a binary number to decimal: ");
	
	scanf("%c", &ch);



	if(ch == 'D'){

		long int decNum, quotient;
	        int binNum[100];
        	int c = 1;
       	 	int j = 0;

		printf("Enter a Decimal Number: ");
		scanf("%ld", &decNum);

		quotient = decNum;

		while(quotient != 0){
			binNum[c++] = quotient % 2;
			quotient /= 2;
		}
	
		printf("Binary value of your Decimal Number %ld: ", decNum);

		for(j = (c - 1); j > 0; j--){
		
			printf("%d", binNum[j]);
		}
		printf("\n");
	}

	else if(ch == 'B'){

		long int binNum, remainder, quotient;
		int decNum = 0;
		int c = 0;
		
		printf("Enter a Binary Number: ");
		scanf("%ld", &binNum);
		
		printf("Decimal value of the Binary number %ld: ", binNum);

		while(binNum > 0){
			
			remainder = binNum % 10;
			decNum = decNum + (remainder * pow(2, c));
			c++;
			binNum = binNum / 10;
		}		
		printf("%d\n", decNum);
	
	}
	return 0;
}
