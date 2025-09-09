#include <stdio.h>
#include <limits.h>

int main(void) {

	char ch = 'A'; 
	printf("char : \n");
	printf("Value : %c\n", ch);
	printf("Max : %d\n", CHAR_MAX);
	printf("Min : %d\n", CHAR_MIN);





	//char 1 byte				- 문자
	// signed short int 2 byte - 정수 //

	signed short int sshort = 12345; 
	printf("\n signed short int : \n");
	printf("Value : %d\n", sshort);
	printf("Max : %d\n", SHRT_MAX);
	printf("Min : %d\n", SHRT_MIN);

	
	// unsigned short int 2 bte - 정수//

	unsigned short int ushort = 12345U;
	printf("\n Unsigned short int : \n");
	printf("Value : %d\n", ushort);
	printf("Max : %d\n", USHRT_MAX);

	

	// signed int 4 byte -  정수
	signed  int sint = 12345;
	printf("\n signed short int : \n");
	printf("Value : %d\n", sint);
	printf("Max : %d\n", INT_MAX);
	printf("Min : %d\n", INT_MIN);
	// unsigned int 4 byte - 정수//
	unsigned  int uint = 12345U;
	printf("\n Unsigned  int : \n");
	printf("Value : %d\n", uint);
	printf("Max : %d\n", UINT_MAX);


	// long은 다른 운영체제에서 다른 바이트 크기
	// 보통 4바이트 리눅스/유닉스/맥에서는 8바이트
	// 윈도우에서 long long 하면 8바이트

	// signed long int 4 byte - 정수
	signed  long int slong = 123456789L;
	printf("\n signed long int : \n");
	printf("Value : %d\n", slong);
	printf("Max : %d\n", LONG_MAX);
	printf("Min : %d\n", LONG_MIN);

	// unsigned long int 4 byte - 정수 //
	unsigned long int ulong = 123456789UL;
	printf("\n Unsigned  long int : \n");
	printf("Value : %d\n", ulong);
	printf("Max : %d\n", ULONG_MAX);


	//  float  ( 항상 부호 있다) 4 byte - 실수 //
	float f = 123.456f;
	printf("\n float f : \n");
	printf("Value : %f \n", f);
	//printf("Max : %d\n", FLT_MAX);
//	printf("Min : %d\n", FLT_MIN);

	// double (항상 부호 있다) 8 byte - 실수//
	double d = 123456.7890123f;
	printf("\n double d : \n");
	printf("Value : %.3f \n", d);
	//printf("Max : %d\n", DBL_MAX);
//	printf("Min : %d\n", DBL_MIN);


	



	return 0;
}