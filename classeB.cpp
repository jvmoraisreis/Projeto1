#include <iostream>>
using namespace std;
class B {
    private:
    int B1;
    float B2;
    public:
    int getB1();
    void setB1(int _n);

    float getB2();
    void setB2(float _n);
    void MB1();
    void MB2();
    void MB3();
};

//Getters and Setters
int B::getB1() {
    return this -> B1;
}
void B::setB1(int _n) {
    this -> B1 = _n;
}
float B::getB2() {
    return this -> B2;
}
void B::setB2(float _n) {
    this -> B2 = _n;
}

//Métodos
void B::MB1() {
    cout << "MB1" << endl;
}
void B::MB2() {
    cout << "MB2" << endl;
}
void B::MB3() {
    cout << "MB3" << endl;
}

int main(){}