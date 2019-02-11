#include<iostream>
#include<cstdio>
using namespace std;

int main(){

long long int totalStars;
long long int *sheepArr = NULL;
long long int totalSheep=0;
long long int totalCheckedStars = 0;
bool *checker = NULL;
//cin>>totalStars;
scanf("%lld", &totalStars);

sheepArr = new long long int[totalStars];

checker = new bool[totalStars];
for(long long int i =0;i<totalStars;i++){
    checker[i] = false;
}

checker[0] = true;

for(long long int i = 0; i<totalStars;i++){
     scanf("%lld",&sheepArr[i]);
     totalSheep+=sheepArr[i];
}


long long int stolen = 1;
long long int i = 0;
sheepArr[i]-=1;
i=1;
long long int currentSheep;
while(1){

    if(sheepArr[i] <= 0) break;
    if(i>=totalStars || i<0) break;

    else{
        stolen = stolen + 1;
        //cout<<"Stolen at: "<<i<<" is: "<<stolen<<endl;

        currentSheep = sheepArr[i];
        if(checker[i] == false)
        {
            checker[i] = true;

        }

        sheepArr[i] -=1;

        if(currentSheep%2!=0){
            i= i+1;

        }
        else{
            i= i-1;
        }


    }
}

for(long long int i = 0;i<totalStars;i++) {
    if(checker[i]) totalCheckedStars++;
}




//cout<<totalCheckedStars<<" "<<totalSheep-stolen<<endl;
printf("%lld %lld\n",totalCheckedStars,totalSheep-stolen);




}
