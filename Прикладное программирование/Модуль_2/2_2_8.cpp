/**�������� ����������� ������� ���������� ����������� ������ �������� ���� ������������� ����� �����

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 2.2.8 https://stepik.org/lesson/538/step/8
23.04.2020 **/

#include <iostream>

using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
   if (b == 0)
        return a;
    else
        return gcd(b, a%b);

}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}
