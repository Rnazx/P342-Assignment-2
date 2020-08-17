#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
vector<vector<float>> store(string st){
    vector<vector<float>> X;
    vector<float> U;
    float T[3];
    ifstream file(st);
    if (file.is_open()){
       for(int i=0;i<3;i++){ 
            for(int i=0;i<3;i++){
                file>>T[i];
            }
            for(int i=0;i<3;i++){
                U.push_back(T[i]);
            }
            X.push_back(U);
            U={};
       }
    }
    return X;

}
int main(){
    vector<vector<float>> M=store("testA.txt");//This is where you enter the name of the text file
    vector<vector<float>> N=store("testB.txt");
    cout<<"The first Matrix is M: ";
    for(int i=0;i<3;i++){
        if(i>0) {
            cout<<endl;
            cout<<"                       ";
        }
        for(int j=0; j<3;j++){
            cout<<M[i][j]<<"   ";
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"The second Matrix is N: ";
    for(int i=0; i<3;i++){
        if(i>0) {
            cout<<endl;
            cout<<"                        ";
        }
        for(int j=0; j<3;j++){
            cout<<N[i][j]<<"   ";
        }
    }
    vector<vector<float>> prod={{},{},{}};
    float t=0;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for (int k=0;k<3;k++){
                t+=M[i][k]*N[k][j];
            }
            prod[i].push_back(t);
            t=0;
        }  
    }
    cout<<endl;
    cout<<endl;
    cout<<"The product of the two Matrices is MxN: ";
    for(int i=0; i<3;i++){
        if(i>0) {
            cout<<endl;
            cout<<"                                        ";
        }
        for(int j=0; j<3;j++){
            cout<<prod[i][j]<<"   ";
        }
    }
    vector<float> A={3,4,5};
    vector<float> prod2;
    float s=0;
    for (int l=0;l<3;l++){
        for (int k=0;k<3;k++){
            s+= M[l][k]*A[k];
        }
        prod2.push_back(s);
        s=0;
    }
    cout<<"\nThe product of M and vector ";
    for (int i=0;i<4;i++){
        if (i==0) cout<<"(";
        else {
            if (i!=3) cout<<A[i-1]<<",";
            else cout<<A[i-1]<<")";
        }
    } 
    cout<<" is: \n";
    for (int i=0;i<4;i++){
        if (i==0) cout<<"(";
        else {
            if (i!=3) cout<<prod2[i-1]<<",";
            else cout<<prod2[i-1]<<")";
        }
    }
}
/* M=1 0 0      N=0 1 0
     0 0 1        0 0 1
     0 1 0        1 0 0

prod(MxN)=0 1 0 
     1 0 0
     0 0 1

A=(3,4,5) => MxA= (3,5,4)*/


