#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
        if(k<=ceil(n/2.0)){
            cout<<k*2-1<<endl;
        }
        else{
             long long t= k%(long long)ceil(n/2.0);

            if(n%2==0&&n==k) cout<<n<<endl;
            else cout<<t*2<<endl;
        }


    return 0;
}
