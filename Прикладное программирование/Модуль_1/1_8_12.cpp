/**�������� ���������, ������� ����������� ������ �� std::cin, ���� �� ��������� ����� ������ �����,
 � �������� ��������� ������ ������ �������� ����� � ������� ���������� ��������� � std::cout.

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 1.8.12. https://stepik.org/lesson/13377/step/12
23.04.2020 **/



#include <iostream>

using namespace std;

int main()
{
    char c = '\0';
    char prev_c = '\0';

    while (cin.get(c)) {
        if (c == ' ' && prev_c == ' ')
            continue;
        cout << c;
        prev_c = c;

    }

    return 0;
}
