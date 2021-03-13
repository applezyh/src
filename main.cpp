#include <iostream>
using namespace std;
void swap(int* a, int i, int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}
int permutation(int* a,int low,int high)
{
    int p = a[low];
    while (low < high)
    {
        while (low < high && a[high] >= p)
        {
            high--;
        }
        swap(a, low, high);
        while (low < high && a[low] <= p)
        {
            low++;
        }
        swap(a, low, high);
    }
    return low;

}
void Qsort(int* a, int start, int end)
{
    if (start < end)
    {
        int p = permutation(a, start, end);
        Qsort(a, p+1, end);
        Qsort(a, start, p-1);
    }
}
int deleteElement(int* a,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; (k + 1) != n; k++)
                    a[k] = a[k + 1];
                n--;
                j--;
            }
            else break;
        }
    }
    return n;
}
int main() {
 int n1=0,n2=0;
 cin>>n1>>n2;
 int* A=new int[n1+n2];
 for(int i=0;i<n1+n2;i++)
     cin>>A[i];
Qsort(A,0,n1+n2-1);
for(int i=0;i<deleteElement(A,n1+n2);i++){
    cout<<A[i];
    if(i!=n1+n2-1)
        cout<<" ";
}
    return 0;
}