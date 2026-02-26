
int countPrimes(int n)
{
    int i, j;
    int count = 0;

    if(n <= 2)
        return 0;

    bool prime[n];
    for(i = 0; i < n; i++)
        prime[i] = true;

    prime[0] = false;
    prime[1] = false;
    for(i = 2; i * i < n; i++)
    {
        if(prime[i] == true)
        {
            for(j = i * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for(i = 2; i < n; i++)
    {
        if(prime[i])
            count++;
    }

    return count;
}