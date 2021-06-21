#include<iostream>

using namespace std;

void print(int [],size_t);
int *apply_all(int [],size_t, int[],size_t);

int main(){
    int array_1[] {1,2,3,4,5};
    int array_2[] {10,20,30};

    const size_t array1_size {5};
    const size_t array2_size {3};
    
    cout<<"Array 1:";
    print(array_1,array1_size);
    cout<<"Array 2:";
    print(array_2,array2_size);

    int *result = apply_all(array_1,array1_size,array_2,array2_size);

    constexpr size_t result_size {array1_size*array2_size};

    cout<<"Result";
    print(result,result_size);
    delete []result;
    cout<<endl;
    return 0;
}

void print(int array[],size_t array_size){
    for(size_t i{}; i<array_size;++i){
        cout<<" "<<array[i];
    }
    cout<<endl;
    cout<<"--------------------------------"<<endl;
}

int *apply_all(int array_1[],size_t array1_size,int array_2[],size_t array2_size){
    size_t result_size {array1_size*array1_size};
    int *result {nullptr};
    result = new int[result_size];
    int k {};
    for(size_t i{};i<array1_size;++i){
        for(size_t j{};j<array2_size;++j){
            result[k]=array_1[i]*array_2[j];
            ++k;
        }
    }
    return result;
}