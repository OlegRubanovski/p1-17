//�� 3 2404.2020
//�������� ����������� ������� ����������
//����������� ������ �������� ���� ������������� ����� �����

unsigned gcd (unsigned a, unsigned b) {
    if (b==0)
        return a;
    else
        return gcd (b, a%b);
}
