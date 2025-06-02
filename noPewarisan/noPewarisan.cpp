#include<iostream>
using namespace std;

class baseClass final;
{
    public:
    virtual void perkenalan ()
    {
        cout<< "Halo saya Function dari baseClass" << endl;
    }
};

class derivedClass : public baseClass
{
    public:
    void perkenalan () 
    {
        cout<< "Halo saya Function dari derivedClass";
    }
};

int main ()
{
    derivedClass a;
    a.perkenalan();

    return 0;
    
}