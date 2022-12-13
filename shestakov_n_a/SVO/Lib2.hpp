#include <iosfwd>


struct Rdec2D {
	double x = 0.0;
	double y = 0.0;
};

struct RPol2D {
	double len = 0.0;
	double deg = 0.0;
};


std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& z);
std::ostream& operator<<(std::ostream& ostrm, const RPol2D& z);

Rdec2D operator*(double m, const Rdec2D& rhs);
Rdec2D operator*(const Rdec2D lhs, double m);
Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs);
Rdec2D operator--(const Rdec2D& lhs);
Rdec2D operator-(const Rdec2D& rhs);
Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs);
Rdec2D operator/(const Rdec2D& lhs, double m);

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs);
bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs);

double dot(const Rdec2D& lhs, const Rdec2D& rhs);
double norm(const Rdec2D& lhs);

Rdec2D ToDec(const RPol2D& lhs);
RPol2D ToPol(const Rdec2D& lhs);


