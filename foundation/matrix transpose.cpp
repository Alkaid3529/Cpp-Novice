/* Alkaid#3529 */

#include<iostream>
using namespace std;

// 转职矩阵函数，按照指定的矩阵大小将矩阵转置
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

	//  读入要求的矩阵大小，方便起见，使用矩阵的默认值，默认为方阵
	cout << "请输入矩阵的尺寸 (方便起见，矩阵大小设在10以内) :\n";
	cout << "size = ";
	cin >> size;

	cout << "\n原矩阵为:\n";

	// 输出原矩阵
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}

	transpose_matrix(matrix, size);

	cout << "\n转置后的矩阵为:\n";

	//  输出转置后的矩阵
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
// int matrix[10][10] 为存储矩阵的数组，int a 为所需转置矩阵的大小
{
	int mid = 0; // 中间量，辅助值的传递

	for (int i = 0; i < a; i++) // 从行开始，逐行检索
	{
		for (int j = i + 1; j < a; j++) // 对该行每一列的元素检索
		{
			// 将对应位置的两个元素交换位置
			mid = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = mid;
		}
	}

	return;
}