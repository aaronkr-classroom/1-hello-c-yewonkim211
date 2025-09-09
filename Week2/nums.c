#include <stdio.h>
#include <limits.h>

int main(void) {

	char ch = 'A'; 
	printf("char : \n");
	printf("Value : %c\n", ch);
	printf("Max : %d\n", CHAR_MAX);
	printf("Min : %d\n", CHAR_MIN);





	//char 1 byte				- ����
	// signed short int 2 byte - ���� //

	signed short int sshort = 12345; 
	printf("\n signed short int : \n");
	printf("Value : %d\n", sshort);
	printf("Max : %d\n", SHRT_MAX);
	printf("Min : %d\n", SHRT_MIN);

	
	// unsigned short int 2 bte - ����//

	unsigned short int ushort = 12345U;
	printf("\n Unsigned short int : \n");
	printf("Value : %d\n", ushort);
	printf("Max : %d\n", USHRT_MAX);

	

	// signed int 4 byte -  ����
	signed  int sint = 12345;
	printf("\n signed short int : \n");
	printf("Value : %d\n", sint);
	printf("Max : %d\n", INT_MAX);
	printf("Min : %d\n", INT_MIN);
	// unsigned int 4 byte - ����//
	unsigned  int uint = 12345U;
	printf("\n Unsigned  int : \n");
	printf("Value : %d\n", uint);
	printf("Max : %d\n", UINT_MAX);


	// long�� �ٸ� �ü������ �ٸ� ����Ʈ ũ��
	// ���� 4����Ʈ ������/���н�/�ƿ����� 8����Ʈ
	// �����쿡�� long long �ϸ� 8����Ʈ

	// signed long int 4 byte - ����
	signed  long int slong = 123456789L;
	printf("\n signed long int : \n");
	printf("Value : %d\n", slong);
	printf("Max : %d\n", LONG_MAX);
	printf("Min : %d\n", LONG_MIN);

	// unsigned long int 4 byte - ���� //
	unsigned long int ulong = 123456789UL;
	printf("\n Unsigned  long int : \n");
	printf("Value : %d\n", ulong);
	printf("Max : %d\n", ULONG_MAX);


	//  float  ( �׻� ��ȣ �ִ�) 4 byte - �Ǽ� //
	float f = 123.456f;
	printf("\n float f : \n");
	printf("Value : %f \n", f);
	//printf("Max : %d\n", FLT_MAX);
//	printf("Min : %d\n", FLT_MIN);

	// double (�׻� ��ȣ �ִ�) 8 byte - �Ǽ�//
	double d = 123456.7890123f;
	printf("\n double d : \n");
	printf("Value : %.3f \n", d);
	//printf("Max : %d\n", DBL_MAX);
//	printf("Min : %d\n", DBL_MIN);


	



	return 0;
}