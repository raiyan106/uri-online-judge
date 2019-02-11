#include<iostream>
using namespace std;

int main(){

int landscape;
cin>> landscape;

int *arr = new int[landscape];
int input;
for(int i=0; i<landscape;i++){
    cin>> input;
    arr[i] = input;
}

bool pattern = false;
if(arr[0]>arr[1]){
    pattern = true;
    for(int i=2;i<landscape;i++){
        if(i%2==0 && arr[i-1]<arr[i]) pattern = true;
        else if(i%2!=0 && arr[i-1]>arr[i]) pattern = true;
        else {
            pattern = false;
            break;
        }
    }


}
else if(arr[0]<arr[1]){
        pattern = true;
        for(int i=2;i<landscape;i++){
            if(i%2==0 && arr[i-1]>arr[i]) pattern = true;
            else if(i%2!=0 && arr[i-1]<arr[i]) pattern = true;
            else {
                pattern = false;
                break;
            }
        }

}
cout<<pattern<<endl;


}
