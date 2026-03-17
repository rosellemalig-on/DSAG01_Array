#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;
    int capacity;

public:
    Array(int capacity);
    ~Array();

    void Insert(int x);
    void InsertAt(int x, int pos);
    void DeleteAt(int pos);
    void UpdateAt(int pos, int x);

    void Reverse();
    void RotateLeft(int k);
    void RotateRight(int k);
    int  Search(int x);
    int  FindMax();
    void RemoveAll(int x);
    void MoveEvensRight();
    void SortAsc();

    void Print();
    int Size() const;
};

#endif