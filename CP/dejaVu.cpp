#include <bits/stdc++.h>

using namespace std;

#define ll     long long
#define pb     push_back
#define _test   int _TEST; cin>>_TEST; while(_TEST--)

int main()
{
    _test
    {
        int n, q;
        cin>>n>>q;

        vector<ll int> a(n), x(q);

        for(auto &e: a)     cin>>e;
        for(auto &e: x)     cin>>e;

        vector<vector<int>> div(31);

        vector<int> done(n);

        for(int b=30; b>=0; b--)
        {
            for(int i=0; i<n; i++)
            {
                if(done[i])     continue;

                if((a[i]%(1ll<<b)) == 0)
                {
                    done[i] = 1;
                    div[b].pb(i);
                }
            }
        }

        for(auto e: x)
        {
            for(int b=e; b<=30; b++)
            {
                for(auto i: div[b])
                {
                    div[e-1].pb(i);
                    a[i] += (1ll<<(e-1));
                }

                div[b].clear();
            }
        }

        for(auto &e: a)     cout<<e<<" ";
        cout<<"\n";
    }
}