/**�������� ���������, ������� ����������� ������ �� std::cin, ���� �� ��������� ����� ������ �����,
 � �������� ��������� ������ ������ �������� ����� � ������� ���������� ��������� � std::cout.

���������: ������� ����� �1-17
��������: Stepik.org ���������������� � C++**/

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
