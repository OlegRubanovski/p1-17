/**�������� �������, ������� ��������� ����� C-style ������. ������, ��� ����������� ������� ������ ������� �� �����

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 2.4.6 https://stepik.org/lesson/540/step/6
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

