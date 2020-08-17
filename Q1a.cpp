#include<iostream>
using namespace std;
int main(){
float sum=0;
float nofdist=0;
    for (int i=1;i<=6;i++){
        cout<<"--o--";//displaying the grid
        for(int j=1;j<=6;j++){
            sum+=abs(i-j);//calculating sum of all distances and no. of distances
            nofdist+=1;
        }
    }
cout<<endl<<"The average distance between two points is: "<<sum/nofdist;
return 0;
}
