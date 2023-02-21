/* Alkaid#3529 */

#include<iostream>
using namespace std;

// תְ������������ָ���ľ����С������ת��
void transpose_matrix(int matrix[10][10], int a);

int main()
{

	int matrix[10][10];
	int size = 0;


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matrix[i][j] = (i * i + j * i + j ^ i) % 10;
		}
	}

	//  ����Ҫ��ľ����С�����������ʹ�þ����Ĭ��ֵ��Ĭ��Ϊ����
	cout << "���������ĳߴ� (��������������С����10����) :\n";
	cout << "size = ";
	cin >> size;

	cout << "\nԭ����Ϊ:\n";

	// ���ԭ����
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}

	transpose_matrix(matrix, size);

	cout << "\nת�ú�ľ���Ϊ:\n";

	//  ���ת�ú�ľ���
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}

	return 0;

}

void transpose_matrix(int matrix[10][10], int a)
// int matrix[10][10] Ϊ�洢��������飬int a Ϊ����ת�þ���Ĵ�С
{
	int mid = 0; // �м���������ֵ�Ĵ���

	for (int i = 0; i < a; i++) // ���п�ʼ�����м���
	{
		for (int j = i + 1; j < a; j++) // �Ը���ÿһ�е�Ԫ�ؼ���
		{
			// ����Ӧλ�õ�����Ԫ�ؽ���λ��
			mid = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = mid;
		}
	}

	return;
}