/*�������� ����������� ������� ���������� ����������� ������ �������� ���� ������������� ����� �����
(Greatest Common Divisor, GCD).
��������: ���������� ���������
��������: Stepik Computer Science Center (CS �����)
���������������� �� ����� C++
2.2.8 https://stepik.org/lesson/538/step/8
24.04.2020
*/
unsigned gcd(unsigned a, unsigned b)
{
    return b == 0 ? a : gcd(b, a % b);
}


