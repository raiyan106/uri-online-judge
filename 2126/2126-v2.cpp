#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int T=1;
            string str,str2;

            int *n1Vector = NULL;
            int *n2Vector = NULL;

            while(cin>>str>>str2){


            const int N1SIZE = int (str.length());
            const int N2SIZE = int (str2.length());

            n1Vector = new int[N1SIZE];
            n2Vector = new int[N2SIZE];


           for(int i =0;i<N1SIZE;i++){

               n1Vector[i] = str[i]-'0';
           }


           for(int i =0;i<N2SIZE;i++){

               n2Vector[i] = str2[i]-'0';
           }


            bool isSub = false;

            bool hasSub = false;

            int subCount = 0;
            int lastPos=0;
            int tempLastPos=0;
          int n1Count = 0;
          int checkerI=0;
            for(int i=0;i<N2SIZE;i++){
                    if(n1Vector[0] == n2Vector[i]){

                             checkerI = i;
                            for(int j=0;j<N1SIZE && checkerI<N2SIZE;j++){


                                    if(n1Vector[j] == n2Vector[checkerI] && n1Count<N1SIZE){
                                        isSub = true;

                                        n1Count+=1;
                                        checkerI+=1;
                                    }
                                    else{
                                        isSub=false;
                                        n1Count = 0;
                                        break;

                                    }

                                    if(n1Count==N1SIZE){
                                        hasSub = true;
                                        subCount+=1;
                                        lastPos = checkerI-N1SIZE+1;
                                        n1Count = 0;
                                    }


                            }

                    }




            }


            if(hasSub){
                cout<<"Caso #"<<T<<":"<<endl;
                cout<< "Qtd.Subsequencias: "<<subCount<<endl;
                cout<<"Pos: "<<lastPos<<"\n"<<endl;
            }
            else{
                 cout<<"Caso #"<<T<<":"<<endl;
                 cout<< "Nao existe subsequencia\n"<<endl;
            }
            T+=1;

            delete [] n1Vector;
            delete [] n2Vector;




            }


}
