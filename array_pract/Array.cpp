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
    data[size] = x;
    size++;
}

void Array::InsertAt(int x, int pos){
    // ANSWER HERE
    for(int i = size; i > pos; i--){
        data[i] = data[i - 1];
    }
    data[pos] = x;
    size++;
}

void Array::DeleteAt(int pos){
    // ANSWER HERE
    for(int i = pos; i < size - 1; i++){
        data[i] = data[i + 1];
    }
    size--;
}

void Array::UpdateAt(int pos, int x){
    // ANSWER HERE
    for(int i = size; i > pos; i--){
        data[i] = data[i - 1];
    }
    data[pos] = x;
    size++;

}

// MEDIUM
void Array::Reverse(){
    // ANSWER HERE
    for(int i = 0; i < size/2; i++){
        int temp = data[i];
        data[i] = data[size - 1 - i];
        data[size - 1 - i] = temp;
    }
}

void Array::RotateLeft(int k){
    // ANSWER HERE
    k = k % size; // Important: avoids unnecessary full circles

    for(int r = 0; r < k; r++) {
        int first = data[0];
        for(int i = 0; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        data[size - 1] = first;
    }

}

void Array::RotateRight(int k){
    // ANSWER HERE
    k = k % size;          // Optimization: remove "full circles"

    for(int r = 0; r < k; r++) {
        int last = data[size - 1];
        for(int i = size - 1; i > 0; i--) {
            data[i] = data[i - 1];
        }
        data[0] = last;
    }
}

int Array::Search(int x){
    // ANSWER HERE
   for (int i = 0; i < size; i++) {
        
        // 2. Check if the current element matches x
        if (data[i] == x) {
            return i; // Success! Return the position and exit the function
        }
    }

    // 3. If we finish the loop, it means x isn't in the array
    return -1;
}

int Array::FindMax(){
    // ANSWER HERE
    int max = 0;
    for(int i = 0; i < size; i++){
        if(data[i] > max){
            max = data[i];
        }
    }
    return max;
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