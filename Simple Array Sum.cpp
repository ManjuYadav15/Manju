#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,sum=0;
    cin >> n;
    int arr[100];
    for(int i = 0;i < n;i++){
       cin >> arr[i];
    }
    for(int i=0;i<n;i++)
        {
        sum+=arr[i];
        }
    cout<<sum<<endl;
    return 0;
}
