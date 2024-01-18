#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int decimalToBase(int dec, int base);

char todigit(int num, int b);

int convertToBase10(char *number, int base);

int baseToDecimal( char *number_input, int base_input);

int main() {
	
	char numIn[50];
	int baseIn;
	int dec;
	int baseOut;

	printf("Enter A Number: ");
	scanf("%s", &numIn);
	printf("Enter The Base: ");
	scanf("%d", &baseIn);
	printf("Enter The Base You Want To Convert To: ");
	scanf("%d", &baseOut);

	dec = baseToDecimal(numIn, baseIn);
	decimalToBase(dec, baseOut);

	return 0;
}

int decimalToBase(int dec, int base) {
	int place=1;
	int digit;
	

	
	while(place<dec){
		place = place * base;
	}
	
	while(place>=1){
		digit = dec / place;
		printf("%c", todigit(digit,base));
		dec  = dec % place;
		place  = place / base;
	}
	printf("\n");
	
	
	return 0;
}

char todigit(int num, int b){
	if(num >= 0 && num <= 9){
		return '0'+num;
	}
	else if (num >= 10){
		return 'A'+ (num-10);
	}
	return '!';
}

#include <stdio.h>

int convertToBase10(char *number, int base) {
    return strtoll(number, NULL, base);
}

int baseToDecimal(char *number_input, int base_input) {

    int result = convertToBase10(number_input, base_input);

    return result;
}