#include<stdio.h>
void main() {
	int A[5][5], B[5][5], C[5][5];
	int k, sw, a, b, num;
	//**************�迭A************
	k = 0;//�밢���� ������ ���� ����
	a = 1; b = 0; num = 1;

	do {
		if (a == 0) {
			k = k + 1;
			a = k;
			b = k - a;
			A[a][b] = num;
			num = num + 1;

		}
		a = a - 1;
		b = k - a;
		A[a][b] = num;
		num = num + 1;

	} while (b < 4);//�밢�� �迭 ������ �þ�鼭 �� �迭
	do {
		if (a == 0 || b == 4) {
			k = k + 1;
			a = 4;
			b = k - a;
			A[a][b] = num;
			num = num + 1;


		}
		else {
			a = a - 1;
			b = k - a;
			A[a][b] = num;
			num = num + 1;
		}

	} while (a + b < 8);//�밢�� �迭 ������ �پ��鼭 �� �迭


	//���
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			printf("\t%d", A[c][d]);
		}
		printf("\n");
	}


	//**************�迭B************

	printf("****************************************************\n");
	k = 0; sw = 1;
	a = -1; b = 0; num = 1;

	k = k + 1;
	a = a + 1;
	B[a][b] = num;
	num = num + 1;//(0,0)�� ���߰�
	do {

		if (sw == 1) {
			k = k + 1;
			a = a + 1;
			B[a][b] = num;
			num = num + 1;

			do {
				a = a - 1;
				b = b + 1;
				B[a][b] = num;
				num = num + 1;

			} while (a > 0);
			sw = sw * (-1);
		}//�������� �밢�� �׸���
		else {
			k = k + 1;
			b = b + 1;
			B[a][b] = num;
			num = num + 1;

			do {
				a = a + 1;
				b = b - 1;
				B[a][b] = num;
				num = num + 1;

			} while (b > 0);
			sw = sw * (-1);
		}//�������� �밢�� �׸���
	} while (k < 5);//�밢���� �迭 ������ �����Ҷ�

	do {

		if (sw == 1) {
			k = k + 1;
			b = b + 1;
			B[a][b] = num;
			num = num + 1;

			do {
				a = a - 1;
				b = b + 1;
				B[a][b] = num;
				num = num + 1;

			} while (b < 4);
			sw = sw * (-1);
		}//���� ���� �밢�� �׸���
		else {
			k = k + 1;
			a = a + 1;
			B[a][b] = num;
			num = num + 1;

			do {
				a = a + 1;
				b = b - 1;
				B[a][b] = num;
				num = num + 1;

			} while (a < 4);
			sw = sw * (-1);//�������� �밢���׸���


		}
	} while (k < 9);//�밢���� �迭 ������ �����Ҷ�


	//���
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			printf("\t%d", B[c][d]);
		}
		printf("\n");
	}


	//**************�迭C************
	printf("****************************************************\n");
	k = 1; sw = 1;
	a = 2; b = 2; num = 1;
	C[a][b] = num;
	num = num + 1;//(2.2)�� �� �Ҵ�
	do {
		if (sw == 1) {
			for (int i = 0; i < k; i++) {
				a = a - 1;
				C[a][b] = num;
				num = num + 1;
				
			}
			for (int i = 0; i < k; i++) {
				b = b + 1;
				C[a][b] = num;
				num = num + 1;
				
			}
			k = k + 1;
			sw = sw * (-1);
		}//k�� ������ŭ a����, b���� �ݺ�
		if (sw == -1) {
			for (int i = 0; i < k; i++) {
				a = a + 1;
				C[a][b] = num;
				num = num + 1;
				
			}
			for (int i = 0; i < k; i++) {
				b = b - 1;
				C[a][b] = num;
				num = num + 1;
			
			}
			k = k + 1;
			sw = sw * (-1);
		}//k�� ������ŭ a����, b���� �ݺ�
	} while (k<5);
	for (int i = 0; i < 4; i++) {
		a = a - 1;
		C[a][b] = num;
		num = num + 1;

	}//������ a=0 �κ� �迭
	
	  
	//���
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			printf("\t%d", C[c][d]);
		}
		printf("\n");
	}
	
}