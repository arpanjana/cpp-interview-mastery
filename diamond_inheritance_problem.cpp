#include <iostream>
using namespace std;


class A{
    
    public:
    int x = 10;
    A(){
        cout <<"A's constructor is called.\n";
    }
    ~A(){
        cout <<"A's D'tor is called.\n";
    }
};

class B: virtual public A{
    public:
    int y;
    B(){
        cout << "B's constructor is called.\n";
    }
    ~B(){
        cout << "B's D'tor is called.\n";
    }
};

class C: virtual public A{
    public:
    int z;
    C(){
        cout << "C's constructor is called.\n";
    }
    ~C(){
        cout << "C's D'tor is called.\n";
    }
};

class D: public B,public C{
    public:
    int w;
    D(){
        cout << "D's constructor is called.\n";
    }
    ~D(){
        cout << "D's D'tor is called.\n";
    }
};


int main() 
{
    D d;
    cout <<"The value of " << d.x << endl;
    return 0;
}