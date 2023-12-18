#include <bits/stdc++.h>
using namespace std;

int calculateDistance(pair<int, int> point1, pair<int, int> point2) {
    return abs(point1.first - point2.first) + abs(point1.second - point2.second);
}

int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> points(2 * n);
        for (auto &i : points) {
            cin>>i;
        }
        sort(points.begin(), points.end());
        vector<pair<int, int>> coor;
        for (int i = 0; i < n; i++) {
            coor.push_back({points[i], points[n + i]});
        }

        int minD = 0;

        for (int i = 1; i < coor.size(); i++) {
            minD += calculateDistance(coor[i - 1], coor[i]);
        }

        cout<<minD<<endl;

        for (auto it : coor) {
            cout<<it.first<<" "<<it.second<<endl;
        }
        
    }
    return 0;
}