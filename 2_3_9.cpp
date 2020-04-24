/**� ���� ������ ��� ����� ����������� �������, ������� �������� ���������� ������� ����� �� �������� ����� ������� (����������� �����).

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++
24.04.2020*/

#include <iostream>
#define SIZE 100

using namespace std;

void rotate(int a[], unsigned size, int shift)
{
    int num = 0;

    for (int i = 0; i < (shift %= size); i++){
        num = a[0];
        for (int j = 0; j < size -1 ; j++)
            a[j] = a[j+1];
        a[size - 1] = num;
    }
}

int main()
{
    int arr[SIZE] = {};
    int n, k;

    cin >> n;
    for (int *p = arr; p <= arr + n - 1; ++p)
        cin >> *p;
    cin >> k;

    rotate(arr, n, k);
    for (int *p = arr; p <= arr + n - 1; ++p)
        cout << *p << " ";
	return 0;
}
