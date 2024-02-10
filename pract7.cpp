#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>
#include <locale.h>  

void ShowAllNegativeNumbers(FILE* file) {
	int number=0;
	if (fscanf(file, "%d", &number)==1) {
		if (number < 0)
			std::cout << number<<"\n";
		ShowAllNegativeNumbers(file);
	}
	else {
		return;
	}
}

int main()
{
	FILE* file;
	if ((file = fopen("numbers.txt", "r")) == NULL) {
		printf("Файл невозможно создать или открыть\n");
		return 1;
	}
	ShowAllNegativeNumbers(file);
}


