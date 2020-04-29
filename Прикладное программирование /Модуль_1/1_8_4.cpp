/**�������� ������� power, ����������� ���������� ������ ����� � ��������������� ����� �������.

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 1.8.4. https://stepik.org/lesson/13377/step/4
23.04.2020 **/

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

