/*�������� ���������, ������� ����������� ������ �� std::cin, ���� �� ��������� ����� ������ �����,
� �������� ��������� ������ ������ �������� ����� � ������� ���������� ��������� � std::cout. �������
������ ��������, ����� �������� ������� �� �����. ��� ���������� ������� ��� �� ����������� ������������
�������������� �������, � ������: ���������, ������������ ������������ � ��������, ���� ���� �� ��� �
���� �������. �� ������ ���������� ����� ��������������� �������, ���� ��� ��� �����.
��������: ���������� ���������
��������: Stepik Computer Science Center (CS �����)
���������������� �� ����� C++
1.8.12 https://stepik.org/lesson/13377/step/12
23.04.2020
*/
#include <iostream>
using namespace std;
int main() {

    char c;
    bool n;
    while(cin.get(c))
        if(c != ' '){
            cout << c;
            n = true;
        }
        else if(n) {
            cout << c;
            n = false;
        }

    return 0;
}
