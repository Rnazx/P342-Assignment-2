#include<iostream>
using namespace std;
int main(){
    float sum=0;
    float nofdist=0;
    //displaying the grid
    for (int i=1;i<=13;i++){
        if (i>1) cout<<endl;
        for(int j=1;j<=6;j++){
            if (i%2!=0) cout<<"  |  ";
            else cout<<"--o--";
        }
    }
    //calculating sum of all distances and no. of distances
    for (int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            for(int k=1; k<=6;k++){
                for(int l=1;l<=6;l++){
                    sum+= abs(i-k) + abs(j-l);
                    nofdist+=1;
                }
            }

        }
    }
cout<<endl<<"The average distance between two points is: "<<sum/nofdist;
return 0;
}