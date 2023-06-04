#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(a==0 && b==0 && c==0 && d==0) cout << "IN\n";
        else cout << "OUT\n";
    }



    return 0;
}



