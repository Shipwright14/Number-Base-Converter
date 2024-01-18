#include<stdio.h>


char todigit(int num, int b){
	if(num >= 0 && num <= 9){
		return '0'+num;
	}
	else if (num >= 10){
		return 'A'+ (num-10);
	}
	return '!';
}

int main() {
	int dec;
	int base;
	int place=1;
	int digit;
	
	printf("Enter A Decimal: ");
	scanf("%d", &dec);
	printf("Enter The Base: ");
	scanf("%d", &base);
	
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