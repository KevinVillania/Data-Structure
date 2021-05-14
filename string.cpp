#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){

    //string reversal
    deque<char> reverseName;
    string name = "Kevin Holden";


    for(int i = name.length()-1; i>=0; --i){

        reverseName.push_back(name[i]);
    }

    for(deque<char>::iterator it = reverseName.begin(); it != reverseName.end(); ++it){

        cout << *it;
    }


}
