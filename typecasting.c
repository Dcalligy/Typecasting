#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// Typecasting
int main(void){

	// iterate from 65 onward for 26 letters in alphabet
	// printing thes ASCII letter and corresponding number
	for(int i = 65; i < 65 + 26; i++){
		// typecatsing (char) i. converting interger to char
		printf("%c is %i\n", (char) i, i);
	}

	for(char c = 'A'; c <= 'Z'; c++){
		printf("%x is %i\n", c, (int) c);
	}
}
