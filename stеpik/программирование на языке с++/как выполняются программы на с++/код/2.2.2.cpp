//�� 3 2404.2020
/*��� ��������� �������� ���������, ������� "��������������" ������������������ ������������� ����� �����.
�� ���� �������� ������������������ ����������� ��������� ������������� ����� �����.
������������������ ������������� �����. ��������� ������� ��� ������������������ � �������� �������.

�� ������ ����� ����� ��� �� ��������� ���������.
����������� ���� � ��� ������ ��������� ����� ������������������,
�� �� �������� �� ������, �.�. �������� ��� �� �����.*/

#include <iostream>
using namespace std;

void q()
{
  int number;
  cin >> number;
  if (number != 0)
  {
    q();
    cout << number << " ";
  }}

int main(int argc, char *argv[])
{
  q();
        return 0;
}
