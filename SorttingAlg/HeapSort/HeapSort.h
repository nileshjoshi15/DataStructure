#ifndef _heap_sort
#define _heap_sort

class HeapSort{

    private:
        void BuildHeap();
        void Heapify(int pos,int _size);
        int Parent(int i);
        int Left(int i);
        int Right(int i);
        int size;
        int* arr;

    public:
        int* Sort();
        HeapSort();
        HeapSort(int *arr,int _size);
        ~HeapSort();
        void  Display();

};

#endif

