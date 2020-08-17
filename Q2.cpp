#include<iostream>
using namespace std;
int main(){
    float A[3]={1,2,3};
    float B[3]={4,5,6};
    float sum[3];
    float dprod=0;
    for (int i=0;i<3;i++){
        sum[i]=A[i]+B[i];
        dprod+=A[i]*B[i];
    }
    cout<<"The sum of the two vectors is :";
    //for displaying vector as a row vector
    for (int i=0;i<4;i++){
        if (i==0) cout<<"(";
        else {
            if (i!=3) cout<<sum[i-1]<<",";
            else cout<<sum[i-1]<<")";
        }
    }
    cout<<"\nThe dot product is :"<<dprod;
}
/*A=(1,2,3) B=(4,5,6) => sum=(5,7,9) and dprod=32*/