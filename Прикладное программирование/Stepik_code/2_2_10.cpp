/**��� ��������� �������� ���������, ������� "��������������" ������������������ ������������� ����� �����.

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++**/
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
