#include <stdio.h>

void main2() {
	//자주 사용할것 같은 데이터 저장 : 변수
	char name = 'M';	 // 글자 저장공간
	int number = -123;  // 숫자 저장공간
	float number2 = 3.14f;  //소수점 있는 숫자 저장공간

		// 변수 : 저장공간
		//저장공간의 형태 저장공간 이름 = 저장할 값;


	printf("Hello %c \n", name);   // 글자입력
	printf("Hello %c \n", name);
	printf("Hello %f \n", number2); //소수점있는 숫자 출력
	printf("Hello %d \n", number); //숫자출력

	//%c : 한글자
	//%d : 숫자
	//%f : 소수점 있는 숫자
	//%s : 여러글자
}