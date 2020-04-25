/**�������� �������, ������� ��������� ����� C-style ������. ������, ��� ����������� ������� ������ ������� �� �����

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++
25.04.2020*/
#include <iostream>
#include <string>
#define SIZE 100

using namespace std;

unsigned strlen(const char *str)
{
    int counNt = 0;
    while (*str != '\0')
    {
        counNt++;
        str++;
    }
    return counNt;
}

int main()
{
    char str[SIZE];

    cin.getline(str, SIZE);
    cout << strlen(str);

	return 0;
}

