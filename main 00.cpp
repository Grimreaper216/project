#include<iostream>
#include<Windows.h>
using namespace std;


//함수 만들기 
	// 함수이름 : print To 100
	// 0~100 까지 출력 동작
	//입력값 없음
	//출력값 없음
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}
//함수 만들기 
	// 함수이름 : print To Even
	// 0~100 까지 짝수 출력 동작
	//입력값 없음
	//출력값 없음
void printToEven()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i * 2;
		cout << number[i] << endl;
	}
}
//함수 만들기 
	// 함수이름 : print To Odd
	// 0~100 까지 홀수 출력 동작
	//입력값 없음
	//출력값 없음
void printToOdd()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
}
//함수 만들기 
	// 함수이름 : print To 3Dra
	// 0~100 까지 3배수 출력 동작
	//입력값 없음
	//출력값 없음
void printTo3Dra()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i * 3;
		cout << number[i] << endl;
	}
}
//함수 만들기 
	// 함수이름 : print To 3multi
	// 0~100 까지 3승수 출력 동작
	//입력값 없음
	//출력값 없음
void printTo3multi()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;

		//3, 3*3, 3*3*3, 3*3*3*3 ....
		for (int j = 0; j < i; ++j) //j가 i 번까지 실행하면서 3을 곱해준다
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}
}
//함수 만들기 
	// 함수이름 : print To Gogodan
	// ndml rnrneks *9까지 출력
	//입력값 int n
	//출력값 없음
void printToGogodan(int n)
{
	for (int i = 1; i <= 9; ++i)
	{
		cout << n << "*" << i << "=" << i << n << endl;
	}
}
//함수 만들기 
	// 함수이름 : print Factorial
	// n! 을 구한 결과값을 반환한다
	//입력값 int n
	//출력값 int
int printFactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;

	}
	cout << result << endl;
	return result;
}
//void형은 리턴값이 필요 없으니 int함수는 return 값이 필요함으로 가장 마지막에 추가 해줘야함


int main()
{
	//x를 Location x라고 가정하고 +방향 으로 갔다가 -방향으로 계속 움직이게 하자
	int x = { 0 };
	bool isMoveRight = true;

	while (1)
	{
	
		system("cls");
		
		cout << x << endl;

		if (isMoveRight)
		{
			x++;
			if (x > 100)
			{
				isMoveRight = false;
			}
		}

			else
			{
				x--;
				if (x <= 0)
				{
					isMoveRight = true;
				}
			}
		Sleep(100);

	}
}


 
		
	

	
	


	//for (int i = 0; i < 100; ++i)
	//{
	//	number[i] = i;
	//	cout << number[i] << endl;
	//}

	////if 사용말고 for로만
	////1~100 까지 짝수만 넣어서 출력
	//for (int i = 0; i < 100; ++i)
	//{
	//	//i    = 1,2,3,4, 5, 6, 7, 8, 9,10.....
	//	//i *2 = 2,4,6,8,10,12,14,16,18,20....
	//	//i *2 + 1 = 1,3,5,7,9,11,13,15,17,19
	//	//i *3 = 3,6,9,12,15,18,21,24,27...
	//	number[i] = i * 2;
	//	cout << number[i] << endl;
	//}

	//for (int i = 0; i < 100; i++)
	//{
	//	number[i] = i *2 + 1;
	//	cout << number[i] << endl;
	//}

	////number에 0~100 까지 3의 배수 출력
	//for (int i = 0; i < 100; ++i)
	//{
	//	number[i] = i * 3;
	//	cout << number[i] << endl;
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	number[i] = 1;

	//	//3, 3*3, 3*3*3, 3*3*3*3 ....
	//	for (int j = 0; j < i; ++j) //j가 ㅑ 번까지 실행하면서 3을 곱해준다
	//	{
	//		number[i] *= 3;
	//	}
	//	cout << number[i] << endl;
	//}

	////i0 = 3
	////i1 = i0 *3
	////i2 = i1 *3
	////i3 = i2 *3
	////i4 = i3 *3
	//number[0] = 3;
	//for (int i = 0; i < 10; ++i)
	//{
	//	number[i] = number[i - 1] * 3;
	//	cout << number[i - 1] <<  endl;
	//}

	//cout << number[i] << endl;
	//2 *1 =2
	//2 *2 =4
	//2 *3 =6
	//2 *4 =8
	//2 *5 =10
	//2 *6 =12
	/*for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			number[j] = j * i;
			cout << i << " * " << j << " = " << number[j] << endl;
		}
		
	}*/
	//숫자 하나를 입력받아서
	//그 숫자에 2~9까지 구구단 출력

	/*int a = { 0 };
	cout << " A = ? " << endl;
	cin >> a;
	cout << "a = " << a << endl;

	for (int i = 1; i <= 9; ++i)
	{
		int result = a * i;
		cout << a << "*" << i << " = " << result << endl;
	}*/

	// 팩토리아 구하기
	/*int n, result = 1;
	cin >> n;
	for (; n > 0; --n)
		result *= n;

	cout << result << endl;*/

	/*int a = { 0 };
	cin >> a;

	int result = 1;
	for (int i = 1; i <= a; ++i)
	{
		result *= i;

	}
	cout << result << endl;*/


