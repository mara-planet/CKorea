#include <stdio.h>

void main8() {
	int result1 = 3 - 5;
	printf("3-5%d\n", result1);
	
	// 1+1
	int result2 = 1 + 1;
	printf("1+1%d\n", result2);
	// 2-1
	int result3 = 2-1;
	printf("2－1%d\n", result3);
	// 3*3
	int result4 = 3*3;
	printf("3×3%d\n", result4);
	// 10/2
	int result5 = 10 / 2;
	printf("10÷2%d\n", result5);
	// 10.0/3.0
	float result6 = 10.0 / 3.0;
	printf("10.0÷3.0%f\n", result6);

	// % : 나머지 구하기
	int result9 = 10 % 3;      // == 1
	printf("10을 3으로 나눈 나머지는 = %d\n", result9);

	// 배수를 구할때, 홀짝을 구분할 때
	// 3의 배수 == 3으로 나눈 나머지가 0
	printf("3의 배수면 %d는 0과 같다.\n", result9);  // 1과 0이 같지 않아 틀린것.

	int num = 3;
	printf("num이 홀수면 1, 짝수면 0 >> %d\n", num % 2);
}

// 1＋1=2
// 2－1=1
// 3×3=9
// 10÷2=5
// 10.0÷3.0=3.333333
// ㄷ 한자 