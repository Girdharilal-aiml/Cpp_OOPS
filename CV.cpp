#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];

    }

    void add(int el){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = el;
    }

    void print(){
        for(int i=0; i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }

    int getindx(int idx){
        if(size == 0){
            cout<<"Empty Array"<<endl;
            return -1;
        }
        if(idx>size || idx<0){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        return arr[idx]; 
    }

    void remove(){
        if(size == 0){
            cout<<"Empty Array"<<endl;
        }
        size--;

    }

};

int  main(){
    Vector v;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(88);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(1);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(0);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    
    // v.getindx(10);

    v.remove();
    v.print();

    return 0;
}
