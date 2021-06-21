#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIFKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYBTKFUOMPCIASRxznlwebgjhqdybtkfuompciasr"};
    int position {};
    cout<< "Enter your message :"<<endl;
    string input;
    getline(cin,input);
    cout<<"Encrypting..."<<endl;
    // cout<<input<<endl;
    for(size_t i {};i<(sizeof(input)/sizeof('a'));++i){
        position = alphabet.find(input[i]);
        if(position>=0 && position<52){
        input[i] = key[position];
        }
        
    }
    cout<<input<<endl;

    return 0;
}