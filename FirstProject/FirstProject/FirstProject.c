#include "FirstProject.h"
#include <stdio.h>
#include <locale.h>

int main(int argc, const char* argv[]) {
	setlocale(LC_ALL, "Rus");
	printf("Hello\0, World! \n");
	printf("This is a new \trow with tab. ");
	printf("This is a new row with \\ symbol\n");

	int a = 50;
	printf("text and%5d%%", a);

	short sh = 345;		// 2 bytes
	int number = -56;	// 4 bytes
	unsigned int uint = 4000000000;	// 4 bytes
	unsigned char sybol = 'A';		// 0..255
	float real = 5.345f;			// 4 bytes
	double realdouble = 5.345;		// 8 bytes long float
	// no boolean type
	int true = 1;
	int false = 0;
	char sym = 75;		// 1 byte -128..127

	printf("���������� a ����� ��������: %d \n", a);
	printf("���������� a �������� �� ������: %p \n", &a);
	
	/*
	int input;
	printf("�������, ����������, �����:");
	scanf("%d", &input);
	printf("�� ����� ����� %d, �� ������� ��� ��� ���: %d", input, input * 2);
	*/

	int variable = 70;
	printf("���������� variable %d\n", variable);
	variable = variable + 50;
	variable += 50;
	printf("� ���������� ���� ������ ���������� 50: %d\n", variable);
	
	variable = variable / 4;
	printf("������������� ������� ���������� �� 4: %d\n", variable);

	int reminder = variable % 4;
	printf(" ������� �� ������� 170 �� 4: %d\n", reminder);
	reminder++;
	printf("���������: %d\n", reminder);
	reminder--;
	printf("���������: %d\n", reminder);


	getchar();

	return 0;
}