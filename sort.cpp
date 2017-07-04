#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    string arr[n];
    string a[q];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    for(int i=0;i<q;i++)
        {
            cin>>a[i];
        }
    int flag;
    for(int i=0;i<q;i++)
      {
        flag=0;
        for(int j=0; j<n; j++)
         {
            if(a[i]==arr[j])
              flag++;
         }
        cout<<flag;
       }
    return 0;
}

