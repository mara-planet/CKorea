#include <stdio.h>

void main2() {
	//���� ����Ұ� ���� ������ ���� : ����
	char name = 'M';	 // ���� �������
	int number = -123;  // ���� �������
	float number2 = 3.14f;  //�Ҽ��� �ִ� ���� �������

		// ���� : �������
		//��������� ���� ������� �̸� = ������ ��;


	printf("Hello %c \n", name);   // �����Է�
	printf("Hello %c \n", name);
	printf("Hello %f \n", number2); //�Ҽ����ִ� ���� ���
	printf("Hello %d \n", number); //�������

	//%c : �ѱ���
	//%d : ����
	//%f : �Ҽ��� �ִ� ����
	//%s : ��������
}