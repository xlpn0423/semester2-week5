/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Jiexiang Xu
 * ID: 201956729
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];
	int len,i;
	
	printf("Enter a hexadecimal:");

	fgets(hex,9,stdin);

	len=strlen(hex);

	if ( hex [len - 1] == '\n' ) {
		
		hex [len - 1] = '\0';
		
		len--;
	}

	for ( i = 0 ; i < len ; i++ ) {

		char a = toupper(hex[i]);

		if(a >= '0' && a <= '9'){

			decimal = decimal + a - '0'; 
		
		} else if ( a >= 'A' && a <= 'F') {

			decimal = decimal + a - 'A';

		} else {

			printf("Error: Invalid Hexadecimal\n");
			
			return 0;

		}
		
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result

	printf("decimal:%ld\n", decimal);
	
	return 0;
}