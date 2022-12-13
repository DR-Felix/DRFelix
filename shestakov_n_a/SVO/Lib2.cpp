#include <iostream>
#include "Lib2.hpp"
#define PI 3.14159265 


std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& z) {
	return ostrm << '(' << z.x << ';' << z.y << ')';

}

std::ostream& operator<<(std::ostream& ostrm, const RPol2D& z) {
	return ostrm << '(' << z.len << ';' << z.deg << ')';
}

Rdec2D operator*(double m, const Rdec2D& rhs) {
	Rdec2D res = { m * rhs.x, m * rhs.y };
	return res;
}

Rdec2D operator*(const Rdec2D& lhs, double m) {
	Rdec2D res = { lhs.x * m, lhs.y * m };
	return res;
}

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = { lhs.x + rhs.x, lhs.y + rhs.y };
	return res;
}

Rdec2D operator--(const Rdec2D& lhs) {
	Rdec2D res = { lhs.x - 1, lhs.y - 1 };
	return res;
}

Rdec2D operator-(const Rdec2D& rhs) {
	Rdec2D res = { rhs.x * (-1), rhs.y * (-1) };
	return res;
}

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = { lhs.x - rhs.x, lhs.y - rhs.y };
	return res;
}


Rdec2D operator/(const Rdec2D& lhs, double m) {
	Rdec2D res = { lhs.x / m, lhs.y / m };
	return res;
}


Rdec2D ToDec(const RPol2D& lhs) {
	Rdec2D res = { 0,0 };
	res.x = lhs.len * cos(lhs.deg * PI / 180);
	res.y = lhs.len * sin(lhs.deg * PI / 180);
	return res;
}

RPol2D ToPol(const Rdec2D& lhs) {
	RPol2D res = { 0.0 };
	res.len = sqrt(pow(lhs.x, 2) + pow(lhs.y, 2));
	res.deg = (180 / PI) * atan((lhs.y / lhs.x));
	return res;
}


bool operator==(const Rdec2D& rhs, const Rdec2D& lhs) {
	double eps = 0.5;
	if (std::abs(lhs.x - rhs.x) < eps && std::abs(lhs.y == rhs.y) < eps) {
		return true;

	}
	else {
		return false;
	}
}

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs) {
	double eps = 0.5;
	if (std::abs(lhs.x - rhs.x) > eps || std::abs(lhs.y - rhs.y) > eps) {
		return true;

	}
	else {
		return false;
	}
}

double dot(const Rdec2D& lhs, const Rdec2D& rhs) {
	double res = { lhs.x * rhs.x + lhs.y * rhs.y };
	return res;
}

double norm(const Rdec2D& lhs) {
	double res = sqrt(pow(lhs.x, 2) + pow(lhs.y, 2));
	return res;
}