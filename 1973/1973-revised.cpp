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


for(long long int i = 0; i<totalStars;i++){
     scanf("%lld",&sheepArr[i]);
     totalSheep+=sheepArr[i];
}


long long int stolen = 0;
long long int i = 0;
long long int currentSheep;
while(1){

    if(i==0 && sheepArr[i]%2==0){
        checker[i] = true;
        if(sheepArr[i]>0)
        {
            sheepArr[i]-=1;
            stolen+=1;
            }
        break;
    }

    else if(i==totalStars-1 && sheepArr[i]%2==1){
        checker[i] = true;
        stolen+=1;
        sheepArr[i] -=1;
        break;
    }

    else if(sheepArr[i]%2==1){
        if(checker[i]==false)
            checker[i] = true;
        stolen+=1;
        sheepArr[i]-=1;

        //cout<<"Sheep for star: "<<i<<" is: "<<sheepArr[i]<<" and checker is: "<<checker[]<<endl;
        i+=1;

    }
    else if(sheepArr[i]%2==0){
         if(checker[i]==false)
            checker[i] = true;

        if(sheepArr[i]>0)
        {
            stolen+=1;
            sheepArr[i]-=1;
        }
        //cout<<"Sheep for star: "<<i<<" is: "<<sheepArr[i]<<endl;

       i-=1;
    }

}

for(long long int i = 0;i<totalStars;i++) {
    if(checker[i]) totalCheckedStars++;
}



//cout<<totalCheckedStars<<" "<<totalSheep-stolen<<endl;
printf("%lld %lld\n",totalCheckedStars,totalSheep-stolen);




}
