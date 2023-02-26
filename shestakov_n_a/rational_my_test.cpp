#include "rational/rational.h"
#include "sstream"
#include "iostream"
#include "string"

void test(const std::string& str) {
    std::istringstream istrm(str); //читай "преобразуй строку str в поток istrm", эдакая буферазция для удобства
    Rational a;
    std::cout << "Lets the test begin!" << '\n';
    try {
        std::cout << "Your fraction is " << str << '\n';
        istrm >> a; //выгрузь поток в экземпляр a;
        if (!istrm.good()) {
            std::cout << "Error: invalid reading: " << str << " -> " << a << std::endl;
            std::cout << "------------" << '\n';
            return;
        }
        Rational b(1, 1);
        std::cout << "Operation: READ -> Success: result = " << a << '\n';
        std::cout << "Opeation: DIVISION -> Success: result = " << b << " : " << a << " = " << b / a << '\n';
        std::cout << "Operation: PLUS -> Success: result = " << a << " + " << b << " = " << a + b << '\n';
        std::cout << "Operation: MINUS -> Success: result = " << a << " - " << b << " = " << a - b << '\n';
        std::cout << "All tests were succesfully finished!" << std::endl;
        std::cout << "--------------" << '\n';
    }
    catch (const std::exception& e) {
        std::cout << "Error: Division by zero!" << std::endl;
        std::cout << "------------" << '\n';
    }
}

int main() {
    test("1/3");
    test("3/0");
    test("1 /        3");
    test("3/1");
    test("3/3");
    test("0/3");
    test("6/3");
    return 0;
}