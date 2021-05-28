#include<iostream>

using namespace std;

int main(){
    
    int n {};
    cin>>n;
    if (n>0 && n<1001){
    int side = 2*n - 1;
    int table[side][side] ;
    for(int k {};k<n;++k){
        for(int i {};i<side;++i){
            for(int j{};j<side;++j){
                if((i==k&&(j>=k && j<=side-k-1))  || (j==k&&(i>=k&&i<=side-k-1)) || (i==side-k-1 &&(j>=k && j<=side-k-1)) || (j==side-k-1 && (i>=k &&i<=side-k-1))){
                    table[i][j]=n-k;
                }
            }
        }
    }
    for(int i {};i<side;++i){
        for(int j {};j<side;++j){
            cout<<table[i][j];
        }
        cout<<endl;
    }
}
    return 0;
}