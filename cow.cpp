#include<iostream>
#include<vector>
#include<algorithm>
#include"cow.h"
using namespace std;

void::Cow::cow_reverse_sort(vector<int>& a) {
    sort(a.begin(), a.end(), greater<int>());
}
int::Cow::cow_add(vector<int>& b) {
    int total=0;
    for(int r=0; r<5; ++r) {
        total+= b.at(r);  
    }

    cout<<"the total weight of top five heaviest cow is: "<<total<<endl;
}

