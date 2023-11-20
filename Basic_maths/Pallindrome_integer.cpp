bool palindrome(int n)
{
    int temp = n;
    int revnum = 0;
    while (temp > 0)
    {
        long ld = temp % 10;
        temp = temp / 10;
        revnum = (revnum * 10) + ld;
    }

    if (revnum == n)
    {
        return true;
    }
    else
        return false;
}