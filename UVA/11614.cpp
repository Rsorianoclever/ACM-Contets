#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int main()
{
    int N;
    cin>>N;
    unsigned long long x;
    x=sqrt(1+8*N);
    x=(N-1)/2;
    cout<<floor(x)+1<endl;


    return 0;
}
