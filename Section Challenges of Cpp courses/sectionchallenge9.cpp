#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> data {};
    int new_number {};
    double mean {};
    int smallest {};
    int largest {};
    char selection {};
    bool number_prexist {false};
    do{
        
        cout<< "P - Print all numbers"<<endl;
        cout<< "A - Add a new number to list"<<endl;
        cout<< "M - Find mean of the list"<<endl;
        cout<< "S - Display the smallest number"<<endl;
        cout<< "L - Display the largest number"<<endl;
        cout<< "Q - Quit from the menu"<<endl;
        cout<< "\n Enter a valid choice :"<<endl;
        cin>> selection;

        if(selection=='P'|| selection=='p'){
            cout<<"[ ";
            for(auto var:data){
                cout<<var<<" ";
            }
            cout<<"]"<<endl;
        }
        else if (selection=='A' || selection=='a'){
            cout<<"Enter new number that should be added: ";
            cin>> new_number;
            for(auto var:data){
                if(var == new_number){
                    cout<<"Number is already present in the list."<<endl;
                    number_prexist = true;
                    break;
                }
            }
            if(!number_prexist){
            data.push_back(new_number);
            cout<<"\n"<< new_number<<" added"<<endl;
            }
        }
        else if (selection=='M' || selection=='m'){
            if(data.size() !=0){
            for(auto var:data){
                mean = mean + var;
            }
            mean = mean/data.size();
            cout<<"Mean of the  list is "<<mean<<" ."<<endl;
        }
        else{
            cout<<"List is empty, cannot find the mean."<<endl;
        }
        }
        else if (selection=='S' || selection=='s'){
            if(data.size() !=0){
            smallest = data[0];
            for(int i{}; i<data.size();++i){
                if(smallest>data[i]){
                    smallest=data[i];
                }
            }
            cout<<"Smallest number in the list is "<<smallest<<endl;
        }
        else{
            cout<<"List is empty, cannot find the smallest number."<<endl;
        }
        }
        else if (selection=='L' || selection=='l'){
            if(data.size() !=0){
            largest = data[0];
            for(int i{}; i<data.size();++i){
                if(largest<data[i]){
                    largest=data[i];
                }
            }
            cout<<"Largest number in the list is "<<largest<<endl;
        }
        else{
            cout<<"List is empty, cannot find the largest number."<<endl;
        }
        }
        else if(selection=='q' || selection == 'Q'){
            cout<<"Goodbye..."<<endl;
        }
        else{
            cout<<"Please enter a valid choice."<<endl;
        }
        cout<<"\n-------------------------------"<<endl;

    }while(selection!='q' && selection != 'Q');

    return 0;

}