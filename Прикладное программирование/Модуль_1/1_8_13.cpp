/**�������� ��������� ��� ���������� �������������� ��������� �� ��������� 2.

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 1.8.13. https://stepik.org/lesson/13377/step/13
23.04.2020 **/



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
