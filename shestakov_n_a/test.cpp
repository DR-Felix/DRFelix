#include "rational/rational.h"
#include "sstream"
#include "iostream"
#include "string"

void test_rational(const std::string& str) {
    std::istringstream istrm(str);
    Rational g;
    std::string tests_separator = "\n-------------";
    try {
        std::cout << "START test: str = " << str << '\n';
        istrm >> g;
        if (!istrm.good()) {
            std::cout << "Error: \"READ ERROR\": " << str << " -> " << g << tests_separator << std::endl;
            return;
        }
        Rational a(1, 1);
        std::cout << "Success: \"READ\" reading result = " << g << '\n';
        Rational buf = a / g;
        std::cout << "Success: \"DIVISION\" " << a << " : " << g << " = " << a / g << '\n';
        std::cout << "Success: \"PLUS\" " << g << " + " << a << " = " << a + g << '\n';
        std::cout << "Success: \"MINUS\" " << g << " - " << a << " = " << g - a << '\n';
        std::cout << "ALL tests success" << tests_separator << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << tests_separator << std::endl;
    }
}
int main() {
    test_rational("1\3");
    test_rational("-1/3");
    test_rational("1/3");
    test_rational("1/0");
    return 0;
}
