#include <iostream>

using namespace std;

#include "IntVector.h"

int main()
{


    // IntVector test1(3, 4);

    // cout << ".at(0) test1. Expected 4: " << test1.at(0) << endl;
    // cout << ".at(1) test1. Expected 4: " << test1.at(1) << endl;
    // //cout << ".at(1) test1. Expected Error: " << test1.at(3) << endl; // Clear
    // cout << ".front() test1. Expected 4: " << test1.front() << endl;
    // cout << ".back() test1. Expected 4: " << test1.back() << endl;
    // cout << ".empty() test1. Expected 0: " << test1.empty() << endl;
    // cout << ".size() test1. Expected 3: " << test1.size() << endl;
    // cout << ".capacity test1. Expected 3: " << test1.capacity() << endl << endl;



    // IntVector test2(0, 0);

    // cout << ".empty() test2. Expected 1: " << test2.empty() << endl;
    // //cout << ".at(0) test2. Expected Error: " << test2.at(0) << endl; // Clear!

        // ProAs start

    IntVector test3(5 , 5);

    test3.insert(1,1);
    cout << ".insert(1,1) test3. Expected 1: " << test3.at(1) << endl; // Clear

    // test3.insert(10,1);
    // cout << ".insert(5) test3. Expected insert_range_check: " << test3.at(1) << endl; // Clear

    // test3.insert(-1,1);
    // cout << ".insert(-1,1) test3. Expected insert_range_check: " << test3.at(1) << endl; // Clear

    test3.erase(1);
    cout << ".erase(-1,1) test3. Expected 5: " << test3.at(1) << endl; // Clear

    test3.push_back(1);
    cout << ".push_back(1) && .back() test3. Expected 1: " << test3.back() << endl; // Clear
  
    test3.pop_back();
    cout << ".pop_back() && .back() test3. Expected 5: " << test3.back() << endl; // Clear

    test3.resize(20);
    cout << ".resize(20) && .back() test3. Expected 0: " << test3.back() << endl; // Clear

    // test3.clear();
    // cout << ".clear() test3. Expected at_range_check: " << test3.at(0) << endl; // Clear


    // test3.erase(10);
    // cout << ".erase(10) test3. erase_range_check: " << test3.at(1) << endl; // Clear

    // test3.erase(-1);
    // cout << ".erase(-1) test3. erase_range_check: " << test3.at(1) << endl; // Clear

    IntVector test4(0,0);

    test4.insert(0,1);
    cout << ".insert(0, 1) test4. Expected 1: " << test4.at(0) << endl; // Clear
    test4.erase(0);

    test4.reserve(5);
    test4.insert(0,1);
    cout << ".reserve(5) test4. Expected 1: " << test4.at(0) << endl; // Clear

    IntVector test5(5, 5);

    test5.resize(10, 10);
    cout << ".resize(10, 10) && .back() && front() test5. Expected 5 10: " << test5.front() << " " << test5.back() << endl; // Clear

    // test5.resize(5, 5);
    // cout << ".resize(5, 5): test5. Expected: at_range_check" << test5.at(8) << endl; // Clear
    
    return 0;

}