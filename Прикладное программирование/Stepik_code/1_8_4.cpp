/**�������� ������� power, ����������� ���������� ������ ����� � ��������������� ����� �������.

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++**/

#include <iostream>
using namespace std;

int power(int x, unsigned p) {
    return (p == 0)? 1: x * power(x, p - 1);
}

int main()
{
    int a;
    unsigned b;

    cin >> a >> b;
    cout << power(a, b);

  return 0;
}

