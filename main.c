#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int convertToBinary(int num) {
	int binary = num;
	int count = 0;
	int arr[80];
	while(binary > 0){
		arr[count] = binary %  2;
		count++;
		binary = binary / 2;
	}
	printf("Numero em binario: ");
	for (int i = count -1; i >= 0 ; i--)
	{
		printf("%d", arr[i]);
	};
	printf("\n\n");
	return 0;
}

int convertToOctal(int num) {
	int octal = num;
	int count = 0;
	int arr[80];
	while(octal > 0){
		arr[count] = octal %  8;
		count++;
		octal = octal / 8;
	}
	printf("Numero em octal: ");
	for (int i = count -1; i >= 0 ; i--)
	{
		printf("%d", arr[i]);
	};
	printf("\n\n");
	return 0;
}


int convertToHexa(int num) {
	int hexa = num;
	int count = 0;
	int arr[80];
	while(hexa > 0){
		arr[count] = hexa %  16;
		count++;
		hexa = hexa / 16;
	}
	printf("Numero em hexadecimal: ");
	for (int i = count -1; i >= 0 ; i--)
	{
		switch (arr[i])
		{
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;
		default:
		printf("%d", arr[i]);
			break;
		}
	};
	printf("\n\n");
	return 0;
}



int main()
{
	int number;
	
	printf("Digite um numero: ");
	scanf("%d", &number);
	// system("cls") caso esteja usando cmd
	system("clear");
	printf("Numero em decimal: %d\n\n", number);
	convertToBinary(number);
	convertToOctal(number);
	convertToHexa(number);
	return 0;
}
