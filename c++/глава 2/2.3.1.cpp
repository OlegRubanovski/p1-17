void swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}

void reverse(int* a, unsigned size)
{
    for (int i = 0; i < size/2; ++i)
    {
        swap(a[i],a[size-1-i]);
    }
}

void rotate(int a[], unsigned size, int n)
{
    if (n > size)
    {
        n %= size;
    }
    reverse(a, n);
    reverse(a + n, size - n);
    reverse(a, size);
}
