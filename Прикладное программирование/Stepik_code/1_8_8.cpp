/**���������� ������ MAX �� ��� ����������, ������� ����������� ������������� (int) ����������, ���������� � �������� �������� ���������,
���������� �� ��������, ���������� � ������ ���� ����������.

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++**/

#include <iostream>
#define MAX(x, y, r) { \
    int num1 = (x);\
    int num2 = (y);\
    r = (num1 > num2)? num1: num2;}

using namespace std;


int main()
{
    int a;
    int b;
    int res = 0;

    cin >> a >> b;
    MAX(a, b, res);
    cout << res << endl;
    MAX(a+=b, b, res);
    cout << res << endl;

  return 0;
}


