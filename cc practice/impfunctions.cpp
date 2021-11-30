bool perfect_square(int a)
{
    int num = sqrt(a);
    if (num * num == a)
        return true;
    return false;
}
int digits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
int modularExponentiation(int x, int n)
{
    int result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = ((result % MOD) * (x % MOD)) % MOD;
        }
        x = ((x % MOD) * (x % MOD)) % MOD;
        n = n / 2;
    }
    return result % MOD;
}