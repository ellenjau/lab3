#include "cow.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;


int main() {
    //decalre n for number of cow, w is the weight
    int n,w;
    //object for class Cow
    Cow cowobj;

    //read file.in
    ifstream fin ("file.in");
    if(!fin) {
        cerr<<"oops!!! fail reading"<<endl;
        exit(1);
    };

    //get the number of cows
    fin>>n;
    vector<int> momo(n);

    //get the weight of each cow
    for (int i=0; i<n; ++i) {
        fin>>w;
        momo.push_back(w);// w means the value of the newly pushed item
    };

    //call function from class Cow to sort greater
    cowobj.cow_reverse_sort(momo);


    //call function from class Cow to do the addition
    cowobj.cow_add(momo);

    //close the file for safety
    fin.close();

    return 0;
}
