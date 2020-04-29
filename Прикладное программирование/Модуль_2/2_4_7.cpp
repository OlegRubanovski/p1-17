/**��� ��������� ����������� ������� ������������ (�������) ���� C-style �����.
�������������, ��� � ������ ������ ���������� ������ (�.�. ��� ������������� � ������� ����������� �����), ����� ���������� ������������ ����� �����, �� �� ������.

���������: ������� ����� �1-17
��������: Stepik.org "���������������� �� ����� C++" Computer Science Center (CS �����) 2.4.7 https://stepik.org/lesson/540/step/6
25.04.2020*/

#include <iostream>
#define SIZE 100

using namespace std;

void strcat(char *to, const char *from)
{
    while (*to != '\0')
        to++;

    for ( ; *from != '\0'; to++, from++)
        *to = *from;

    *to = '\0';


}
int main()
{
    char str1[SIZE], str2[SIZE];

    cin.getline(str1, SIZE);
    cin.getline(str2, SIZE);

    strcat(str1, str2);
    cout << str1;
	return 0;
}
