#include<iostream>
#include<string>
using namespace std;
int main(){

    cout<<"Please enter a string"<<endl;
    string input;
    cin>>input;
    int width = 2*input.length() - 1;
    int height= input.length();
    int len=height;
    char space = ' ';
    char table[height][width] ;
    for(int i{};i<height;++i){
        for(int j{};j<width;++j){
            if(j<(len-1-i) || j>(len-1+i)){
                table[i][j]=space;
            }
            if(j>=(len-1-i) && j<len-1){
                table[i][j]=input[i+j-len+1];
            }
            if(j==len-1){
                table[i][j]=input[i];
            }
            if(j<=(len-1+i)&&j>len-1){
                table[i][j]=input[+len-1+i-j];
            }
        }
    }
    for(int i {}; i<height;++i){
        for(int j {};j<width;++j){
            cout<<table[i][j];
        }
        cout<<endl;
    }
    return 0;
}
