#include<iostream>
#include<Windows.h>
using namespace std;


//�Լ� ����� 
	// �Լ��̸� : print To 100
	// 0~100 ���� ��� ����
	//�Է°� ����
	//��°� ����
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}
//�Լ� ����� 
	// �Լ��̸� : print To Even
	// 0~100 ���� ¦�� ��� ����
	//�Է°� ����
	//��°� ����
void printToEven()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i * 2;
		cout << number[i] << endl;
	}
}
//�Լ� ����� 
	// �Լ��̸� : print To Odd
	// 0~100 ���� Ȧ�� ��� ����
	//�Է°� ����
	//��°� ����
void printToOdd()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
}
//�Լ� ����� 
	// �Լ��̸� : print To 3Dra
	// 0~100 ���� 3��� ��� ����
	//�Է°� ����
	//��°� ����
void printTo3Dra()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i * 3;
		cout << number[i] << endl;
	}
}
//�Լ� ����� 
	// �Լ��̸� : print To 3multi
	// 0~100 ���� 3�¼� ��� ����
	//�Է°� ����
	//��°� ����
void printTo3multi()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;

		//3, 3*3, 3*3*3, 3*3*3*3 ....
		for (int j = 0; j < i; ++j) //j�� i ������ �����ϸ鼭 3�� �����ش�
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}
}
//�Լ� ����� 
	// �Լ��̸� : print To Gogodan
	// ndml rnrneks *9���� ���
	//�Է°� int n
	//��°� ����
void printToGogodan(int n)
{
	for (int i = 1; i <= 9; ++i)
	{
		cout << n << "*" << i << "=" << i << n << endl;
	}
}
//�Լ� ����� 
	// �Լ��̸� : print Factorial
	// n! �� ���� ������� ��ȯ�Ѵ�
	//�Է°� int n
	//��°� int
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
//void���� ���ϰ��� �ʿ� ������ int�Լ��� return ���� �ʿ������� ���� �������� �߰� �������


int main()
{
	//x�� Location x��� �����ϰ� +���� ���� ���ٰ� -�������� ��� �����̰� ����
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

	////if ��븻�� for�θ�
	////1~100 ���� ¦���� �־ ���
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

	////number�� 0~100 ���� 3�� ��� ���
	//for (int i = 0; i < 100; ++i)
	//{
	//	number[i] = i * 3;
	//	cout << number[i] << endl;
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	number[i] = 1;

	//	//3, 3*3, 3*3*3, 3*3*3*3 ....
	//	for (int j = 0; j < i; ++j) //j�� �� ������ �����ϸ鼭 3�� �����ش�
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
	//���� �ϳ��� �Է¹޾Ƽ�
	//�� ���ڿ� 2~9���� ������ ���

	/*int a = { 0 };
	cout << " A = ? " << endl;
	cin >> a;
	cout << "a = " << a << endl;

	for (int i = 1; i <= 9; ++i)
	{
		int result = a * i;
		cout << a << "*" << i << " = " << result << endl;
	}*/

	// ���丮�� ���ϱ�
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


