#include <iostream>
using namespace std;

class D {
    private:
    double D1;
    char D2;
    public:
    int getD1();
    void setD1(double _n);

    float getD2();
    void setD2(char _n);
    void MD1();
    void MD2();
};

//Getters and Setters
int D::getD1() {
    return this -> D1;
}
void D::setD1(double _n) {
    this -> D1 = _n;
}
float D::getD2() {
    return this -> D2;
}
void D::setD2(char _n) {
    this -> D2 = _n;
}

//Métodos
void D::MD1() {
    cout << "MD1" << endl;
}
void D::MD2() {
    cout << "MD2" << endl;
}

int main(){}
