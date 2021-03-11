#include <iostream>
using  namespace std;
void print(int k,int n)
{
    for(;k<n;k=k+2)
    {
        cout<<k;
        if(k+2<n)
            cout<<" ";
    }
    cout<<'\n';
}
int main() {
    int i,j=0;
    cin>>i;
    int *a = new int[i];
    for(;j<i;j++)
        cin>>a[j];
    for(j=0;j<i;j++)
    {
        print(1,a[j]+1);
        print(2,a[j]+1);
        cout<<"\n";
    }
    return 0;
}
