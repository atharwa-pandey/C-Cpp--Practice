#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int test_case {};
    cin>>test_case;
    while(test_case){
        int64_t number {};
        cin>>number;
        int p {1};
        bool answer {false};
        while((int64_t)(number/pow(2,p)>=1)){
            if(number==pow(2,p)){
                cout<<"No"<<endl;
                answer = true;
                break;
            }
            ++p;
        }
        if(!answer){
            cout<<"Yes"<<endl;
        }
        test_case--;
    }
}