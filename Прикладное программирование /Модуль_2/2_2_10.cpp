/**��� ��������� �������� ���������, ������� "��������������" ������������������ ������������� ����� �����.

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 2.2.10 https://stepik.org/lesson/538/step/10
23.04.2020 **/
#include <iostream>

using namespace std;

void flip()
{
    int num;
    cin >> num;
    if (num)
    {
        flip();
        cout << num << " ";
    }
}

int main()
{
    flip();

	return 0;
}
