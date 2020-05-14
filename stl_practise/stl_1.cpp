//vector, set and mapp examples

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool f(int x, int y){
    return x > y;
}

void vectorPractise(){
    // vector init
    vector<int> A = { 1, 2, 3, 4 };
    cout << A[1] << endl;
    
    //sort - default asc - O(NlogN)
    sort(A.begin(), A.end());
    for(int x: A){
        cout << x << " ";
    }
    cout << endl;

    //search - binary_search - O(LogN)
    bool present = binary_search(A.begin(), A.end(), 3);
    cout << "3 Found: " << present << endl;
    present = binary_search(A.begin(), A.end(), 33);
    cout << "33 Found: " << present << endl;

    //add to back of vector
    A.push_back(33);
    A.push_back(33);
    A.push_back(33);
    A.push_back(33);

    //init iterator with auto
    auto it = lower_bound(A.begin(), A.end(), 33);
    //init iterator the old school way
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 33);
    cout << "it1: " << *it << endl;
    cout << "it2: " << *it2 << endl;
    cout << "it diff: " << it - it2 << endl;

    //sort the vector in desc
    sort(A.begin(), A.end(), f);
    vector<int>::iterator it3;
    for(it3 = A.begin(); it3 != A.end(); it3++){
        cout << *it3 << endl;
    }

    //modify vector values
    for(int &x: A){
        x++;
    }
    for(int x: A){
        cout << x << " ";
    }
    cout << endl;
}

void setPractise(){

}

void mapPractise(){

}

int main(){
    vectorPractise();
    return 0;
}