#include <iostream>
#include <string>
using namespace std;

void swap(int* a, int* b){
    int c = *b;
    *b = *a;
    *a = c;
}

void print(int* arr,int size){
    for(int i=0;i<size;i++) cout<<*(arr+i)<<" ";
}

int sumArray(int* arr,int size){
    int sum = 0;
    int* end = arr + size;
    while(arr !=end){
        sum += *arr;
        arr++;
    }
    return sum;
}

int* makeArray(int n){
    int* arr = new int(n);
    for(int i =0;i<n;i++){
        arr[i] = i+1;
    }
    return arr;
}

struct Student{
    string name;
    int age;
    float gpa;
};

struct Node{
    int value;
    Node* next;
};
int main(){
    Node* n2 = new Node;
    Node* n1 = new Node;
    n2->value = 20;
    (*n2).next = nullptr;
    n1->value = 10;
    (*n1).next = n2;

    Node* temp = n1;

    while(temp != nullptr){
        cout<<temp->value<<endl;
        Node* toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}