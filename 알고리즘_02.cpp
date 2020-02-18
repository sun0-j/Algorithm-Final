#include<stdio.h>
void main() {
	int A[5][5], B[5][5], C[5][5];
	int k, sw, a, b, num;
	//**************배열A************
	k = 0;//대각선의 순서를 세는 변수
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

	} while (b < 4);//대각선 배열 갯수가 늘어나면서 수 배열
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

	} while (a + b < 8);//대각선 배열 갯수가 줄어들면서 수 배열


	//출력
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			printf("\t%d", A[c][d]);
		}
		printf("\n");
	}


	//**************배열B************

	printf("****************************************************\n");
	k = 0; sw = 1;
	a = -1; b = 0; num = 1;

	k = k + 1;
	a = a + 1;
	B[a][b] = num;
	num = num + 1;//(0,0)에 값추가
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
		}//우측상향 대각선 그리기
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
		}//좌측하향 대각선 그리기
	} while (k < 5);//대각선의 배열 갯수가 증가할때

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
		}//좌측 하향 대각선 그리기
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
			sw = sw * (-1);//우측상향 대각선그리기


		}
	} while (k < 9);//대각선의 배열 갯수가 감소할때


	//출력
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			printf("\t%d", B[c][d]);
		}
		printf("\n");
	}


	//**************배열C************
	printf("****************************************************\n");
	k = 1; sw = 1;
	a = 2; b = 2; num = 1;
	C[a][b] = num;
	num = num + 1;//(2.2)에 값 할당
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
		}//k의 갯수만큼 a감소, b증가 반복
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
		}//k의 갯수만큼 a증가, b감소 반복
	} while (k<5);
	for (int i = 0; i < 4; i++) {
		a = a - 1;
		C[a][b] = num;
		num = num + 1;

	}//마지막 a=0 부분 배열
	
	  
	//출력
	for (int c = 0; c < 5; c++) {
		for (int d = 0; d < 5; d++) {
			printf("\t%d", C[c][d]);
		}
		printf("\n");
	}
	
}