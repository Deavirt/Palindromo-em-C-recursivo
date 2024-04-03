/*
 ============================================================================
 Name        : 1.c
 Author      : davi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char string[], int left, int right){
	return(left >= right) ? 1 :(string[left] == string[right]) && isPalindrome(string, left+1, right-1);
}
int main(void){
	char palavra[100];

	printf("Digite uma palavra:");

	scanf("%s", palavra);

	int tamanho = strlen(palavra);

	if(isPalindrome(palavra, 0, tamanho -1)){
		printf("É palindromo");
	}else{
		printf("Não é palindromo");
}
return 0;
}
