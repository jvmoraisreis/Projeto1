#include <iostream>
using namespace std;
class C {
    private:
    string C1;
    int C2;
    public:
    string getC1();
    void setC1(string _n);

    int getC2();
    void setC2(int _n);

    void MC1();
    void MC2();

};

//Getters and Setters
string C::getC1() {
    return this -> C1;
}
void C::setC1(string _n) {
    this -> C1 = _n;
}
int C::getC2() {
    return this -> C2;
}
void C::setC2(int _n) {
    this -> C2 = _n;
}

//Métodos
void C::MC1() {
    cout << "MC1" << endl;
}
void C::MC2() {
    cout << "MC2" << endl;
}

int main(){}