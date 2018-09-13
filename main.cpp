/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 13, 2018, 12:50 AM
 */

#include <iostream>

class Mango {
public:

    void eatMango() {
        std::cout << "eating Mango \n";
    }
};

class Banana {
public:

    void eatBanana() {
        std::cout << "eating Mango \n";
    }
};

struct myStruct {
    int x;
    int y;
    char c;
    bool b;
};

int main() {

    /// type_casting any pionter to another any pointer!!!! Dangerous!!!!!

    Mango* m;

    Banana* b;

    Banana* b2 = reinterpret_cast<Banana*> (m);

    b2->eatBanana();

    ///////////////////////////////////////////////////////////////////////////

    myStruct mstr;

    mstr.x = 5;
    mstr.y = 10;
    mstr.c = 'n';
    mstr.b = true;

    int* p = reinterpret_cast<int*> (&mstr);

    std::cout << *p << '\n';

    p++;

    std::cout << *p << '\n';

    p++;

    char* cr = reinterpret_cast<char*> (p);


    std::cout << *cr << '\n';

    cr++;

    bool* bol = reinterpret_cast<bool*> (cr);

    std::cout << *bol << '\n';

    return 0;
}

