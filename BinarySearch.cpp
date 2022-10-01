#include <iostream>

using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }   
    return -1;
}
void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
sort(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key )<<endl;

    return 0;
}
