#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    int firstDiagonal=0;
    int secondDiagonal=0;
    cin >> n;
    int count=n-1;
    vector< vector<int> > a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
          cin >> a[i][j];
       }
    }

    for(int i=0; i<n; i++)
    { 
        firstDiagonal+=a.at(i).at(i);
        secondDiagonal+=a.at(count).at(i);
        count--;
    }
    cout << abs(firstDiagonal-secondDiagonal);

    return 0;
}

