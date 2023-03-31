#include<bits/stdc++.h>
using namespace std;
void printing_array(int*arr,int size,int i)
{
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10];
    int size,i=0,pos,num;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    if(size>10)
    {
        cout<<"overflow conditon array size is exceed"<<endl;
    }
    else
    {
        cout<<"enter the element of array "<<endl;
        for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }

    }
    cout<<"before adding "<<endl;
    printing_array(arr,size,0);
    cout<<"if u want to add element to array enter the posotion  and the value"<<endl;
    cin>>pos>>num;
    if(pos<0||pos>size+1)
    {
        cout<<"invalid position "<<endl;
    }
    if(pos==1)
    {
        for(i=size-1;i>=0;i--)
        {
            arr[i+1]=arr[i];

        }
        arr[0]=num;
        size++;
    }
    if(pos==size)
    {
        arr[size]=num;
        size++;
    }
    else{
        for(i=size-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
    }
    cout<<"after adding element "<<endl;
    printing_array(arr,size,0);
}