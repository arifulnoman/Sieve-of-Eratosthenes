#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    int i,j;
    bool prime[n+1];
    memset(prime,true,n+1);
    for(i = 2;i < n+1;i++)
    {
        if(prime[i] == true)
        {
            cout << i << " ";
            for(j = i*2;j < n+1;j = j+i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number to: ";
    cin >> n;
    sieve(n);
    return 0;
}