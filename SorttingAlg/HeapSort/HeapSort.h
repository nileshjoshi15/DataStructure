#ifndef _heap_sort
#define _heap_sort

class HeapSort{

    private:
        void Sort();
        void BuildHeap();
        void Heapify(int pos,int _size);
        int Parent(int i);
        int Left(int i);
        int Right(int i);
        int size;
        int* arr;

    public:
        HeapSort();
        HeapSort(int *arr,int _size);
        ~HeapSort();
        void  Display();

};

#endif

