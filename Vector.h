#ifndef VECTOR_H
#define VECTOR_H

class Vector{

    private:
        std::vector<int> intVector;

    public:
        void InputVector(int number);
        void PrintVector();
        void SearchVector(int num);
        void InsertVector(int place, int num);
        void DeleteVector(int num);
};


#endif // VECTOR_H
