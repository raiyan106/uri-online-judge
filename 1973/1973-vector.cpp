#include<iostream>
#include <vector>
using namespace std;

int main(){

long long int totalStars;
//long long int *sheepArr = NULL;

long long int totalSheep=0;
cin>>totalStars;

vector <long long> sheepArr (totalStars);

//sheepArr = new long long int[totalStars];

for(int i = 0; i<sheepArr.size();i++){
     cin>>sheepArr.at(i);
     totalSheep+=sheepArr.at(i);
}


long long int stolen = 1;
long long int i = 0;
sheepArr.at(i)-=1;
i=1;
long long int currentSheep;
while( !(i>=sheepArr.size())){

    if(sheepArr.at(i) == 0) break;
   // if(i>=sheepArr.size()) break;

    else{
        stolen = stolen + 1;
        //cout<<"Stolen at: "<<i<<" is: "<<stolen<<endl;

        currentSheep = sheepArr.at(i);
        sheepArr.at(i) -=1;

        if(currentSheep%2!=0){
            i= i+1;

        }
        else{
            i= i-1;
        }


    }
}


cout<< totalSheep-stolen;




}
