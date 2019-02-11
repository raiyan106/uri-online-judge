#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    long long int n1,n2;
    scanf("%lld %lld",&n1,&n2);

    vector  <long long > n1Vector ;
    vector <long long> n2Vector;

    int element;
    for(int i=0;n1!=0; i++){
           element = n1%10;
            n1Vector.push_back(element);

    n1/=10;
    }

    element = 0;
    for(int i=0;n2!=0; i++){
           element = n2%10;
            n2Vector.push_back(element);

    n2/=10;
    }


    reverse(n1Vector.begin(),n1Vector.end());

    reverse(n2Vector.begin(),n2Vector.end());

    bool isSub = false;

    bool hasSub = false;

    int subCount = 0;
    int lastPos=0;
    int tempLastPos=0;
  int n1Count = 0;
  int checkerI=0;
    for(int i=0;i<n2Vector.size();i++){
            if(n1Vector.at(0) == n2Vector.at(i)){

                     checkerI = i;
                    for(int j=0;j<n1Vector.size() && checkerI<n2Vector.size();j++){


                            if(n1Vector.at(j) == n2Vector.at(checkerI) && n1Count<n1Vector.size() ){
                                isSub = true;

                                n1Count+=1;
                                checkerI+=1;
                            }
                            else{
                                isSub=false;
                                n1Count = 0;
                                cout<<subCount<<" sized"<<endl;
                                break;

                            }

                            if(n1Count==n1Vector.size()){
                                cout<<"checked"<<endl;
                                hasSub = true;
                                subCount+=1;
                                lastPos = checkerI-n1Vector.size()+1;
                                n1Count = 0;
                            }


                    }

            }




    }


//cout<<"N1 Size: "<<n1Vector.size()<<"  N2 Size: "<<n2Vector.size();
 cout<<"HasSub: "<<hasSub<<"\nSubCount is: "<<subCount<<"\nlastPos is: "<<lastPos<<endl;
 cout<<n1Vector.size()<<" "<<n2Vector.size()<<endl;

}
