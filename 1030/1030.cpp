#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

vector<int> arr;


int test;
cin>>test;
int totalSize=0, skip=0;

for(int j=0;j<test;j++)
{
    cin>>totalSize>>skip;
    int tS=totalSize;
    int Sk = skip;

    for(int i=0;i<tS;i++)
        arr.push_back(i+1);

    int s = Sk;
    int step = s-1;
    int i=0;
    while(true)
    {
        if(arr.size()==1) break;
        int arr_size = arr.size();
        i=(i+step)%arr_size;
        arr.erase(arr.begin() +i);
    }

    cout<<"Case "<<j+1<<": "<<arr[0]<<endl;

    arr.erase(arr.begin());

}




}

