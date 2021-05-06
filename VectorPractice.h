#ifndef VECTORPRACTICE_H
#define VECTORPRACTICE_H
#include <vector>
using namespace std;


class VectorPractice
{
    private:
        vector<int> numVector;

    public:
        VectorPractice(int number);
        void InputNumber(int number);

        void SearchNumber(int number);
        int SearchNumber2(int number);
        int SearchNumber3(int arr[], int numElements, int number);

        void InsertNumber(int index, int number);
        void DeleteNumber(int position);
        void PrintNumber();

};

#endif // VECTORPRACTICE_H
