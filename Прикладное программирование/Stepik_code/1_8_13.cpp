/**�������� ��������� ��� ���������� �������������� ��������� �� ��������� 2.

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++**/

#include <iostream>

int logf(int b)
{
    int a = 2;
    int i = 0;
    while (b >= a)
    {
        b /= a;
        i++;
    }

    return i;

}

using namespace std;

int main()
{
    int t;
    int num;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> num;
        cout << logf(num)<< endl;
    }

    return 0;
}
