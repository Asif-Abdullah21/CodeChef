#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,j;
    cin >> t;

    while(t--)
    {
        int n,cnt=0;
        cin >> n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }

        for(i=0;i<n;i++)
        {
            int mini=0,maxx=0;
            for(j=0;j<n;j++)
            {
                if(a[j]<=a[i]) mini++;
                else maxx++;
            }
            if(mini>maxx) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
