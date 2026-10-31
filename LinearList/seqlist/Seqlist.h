#ifndef SEQLIST_H
#define SEQLIST_H

const int maxsize = 100;//default array size
template<typename T>
class seqlist{
    private:
        T data[maxsize];//store the data
        int length;//mark the actual size
    public:
        seqlist();//default construction
        seqlist(T *dataptr, int length);//construction with known data
        ~seqlist();//deconstruction
        int getlength();//get the length of the list
        int empty();//check if empty
        T find(int i);//find element with location
        int locate(T data);//find element with value
        int insert(T data, int i);//insert an element at specified location
        int remove(int i);//delete element at specified location
        void print();//print all element
};

#endif
