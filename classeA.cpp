#include <iostream>
using namespace std;

class A {
    private:
    int A1;
    float A2;
    public:
    int getA1();
    void setA1(int _n);

    float getA2();
    void setA2(float _n);
    void MA1();
    void MA2();
    void MA3();

};

//Getters and Setters
int A::getA1() {
    return this -> A1;
}
void A::setA1(int _n) {
    this -> A1 = _n;
}
float A::getA2() {
    return this -> A2;
}
void A::setA2(float _n) {
    this -> A2 = _n;
}

//Métodos
void A::MA1() {
    cout << "MA1" << endl;
}
void A::MA2() {
    cout << "MA2" << endl;
}
void A::MA3(){
    cout << "Alteração a classe A partir do clone." << endl;
}

int main(){
}
