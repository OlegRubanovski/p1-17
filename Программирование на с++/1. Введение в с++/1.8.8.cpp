/*
�������� ������ ������� �1-17
1.8.8. �� ������ �� ������, ��� ������������� �������� ������ ������� � ��� ���.
��� ����, ����� ����� �����������, ������ ��� �������� �������� ������� ������,
� ������ ������� ����� �� ������������, �� ���������� ��� �������������� ����������� ����� �������-������.
���������� ������ MAX �� ��� ����������, ������� ����������� ������������� (int)
����������, ���������� � �������� �������� ���������, ���������� �� ��������,
���������� � ������ ���� ����������. ������ ������ �������:
int a = 10;
int b = 20;
int c = 0;
MAX(a, b, c); // ������ c ����� 20
MAX(a += b, b, c); // ������ a = � = 30
��� ��������� ������� ������������ ������ ��� ����� ������ ��������� ��� �������������.
���������� � ����������: ��� ����� ����������� ������ ������ MAX. ������� main �
�����-���� ������ ������� ������������� �� �����. ���������� ������ ��� ������ ������������� ���������� ��������.
���������: �������� ��� ����������� �����-������ �������������� ����������� ���
����������� ���������� ����������.  �������, ��� ������� ������ ����������� �����
� ����� ������, ������������ ������ �� ����� ��� ��������� C++. �������� ������ ���,
����� ��� ��� ����������� � ����� ������ ��������� ���������� ���. ���������, ��� ��� ��� ����� ��������� ���������
��� � ����� ������� � ��� �� ������� ������. ���� ������ ���������� �����-������
����������, �� ������������ ������� ���, ����� ��� �� ������ �� ������� ���.
24.04.2020
*/

#include <iostream>

#define MAX( x, y, r) { \
    int num2 = (y);\
    int num1 = (x);\
 r = (num1 > num2)? num1: num2;}

using namespace std;


int main()
{
    int a, a1;
    int res;
    res = 0;
    cin >> a >> a1;
    MAX(a, a1, res);
    cout << res << endl;
    MAX(a += a1, a1, res);
    cout << res << endl;
    return 0;
}
