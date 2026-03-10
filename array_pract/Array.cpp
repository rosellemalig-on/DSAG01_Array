#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int capacity){
    this->capacity = capacity;
    data = new int[capacity];
    size = 0;
}

Array::~Array(){
    delete[] data;
}

// EASY
void Array::Insert(int x){
    // ANSWER HERE
}

void Array::InsertAt(int x, int pos){
    // ANSWER HERE
}

void Array::DeleteAt(int pos){
    // ANSWER HERE
}

void Array::UpdateAt(int pos, int x){
    // ANSWER HERE
}

// MEDIUM
void Array::Reverse(){
    // ANSWER HERE
}

void Array::RotateLeft(int k){
    // ANSWER HERE
}

void Array::RotateRight(int k){
    // ANSWER HERE
}

int Array::Search(int x){
    // ANSWER HERE
}

int Array::FindMax(){
    // ANSWER HERE
}

void Array::RemoveAll(int x){
    // ANSWER HERE
}

// HARD
void Array::MoveEvensRight(){
    // ANSWER HERE
}

void Array::SortAsc(){
    // ANSWER HERE
}

void Array::Print(){
    for(int i=0;i<size;i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

int Array::Size() const{
    return size;
}