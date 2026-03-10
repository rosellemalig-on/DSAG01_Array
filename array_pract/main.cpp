#include <iostream>
#include "Array.h"
using namespace std;

int main() {
    Array arr(10);

    arr.Insert(10);
    arr.Insert(20);
    arr.Insert(30);
    arr.Insert(40);
    arr.Print();

    arr.InsertAt(15,1);
    arr.Print();

    arr.DeleteAt(2);
    arr.Print();

    arr.UpdateAt(1,99);
    arr.Print();

    arr.Reverse();
    arr.Print();

    arr.RotateRight(1);
    arr.Print();

    arr.SortAsc();
    arr.Print();

    cout << "Search 99 index: " << arr.Search(99) << endl;
    cout << "Max value: " << arr.FindMax() << endl;

    arr.RemoveAll(99);
    arr.Print();

    arr.MoveEvensRight();
    arr.Print();

    return 0;
}