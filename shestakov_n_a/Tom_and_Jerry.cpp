#include <iostream>
#include <cmath>

struct Rdec2D {
	double x = 0;
	double y = 0;
};

struct Rpol2D {
	double r = 0;
	double phi = 0;
};

std::ostream& operator<<(std::ostream& out, const Rpol2D& a) {
	out << "(" << a.r << "," << a.phi << ")" << "\n";
	return out;
}

Rdec2D ToDec(const Rpol2D& vector) {
	double x = std::cos(vector.phi) * vector.r;
	double y = std::sin(vector.phi) * vector.r;
	Rdec2D new_vector { x, y };
	return new_vector;
}

Rpol2D ToPol(const Rdec2D& vector) {
	double r = std::sqrt(vector.x * vector.x + vector.y * vector.y);
	double phi = std::asin(vector.y / r);
	Rpol2D new_vector{ r, phi };
	return new_vector;
}

std::ostream& operator<<(std::ostream &out, const Rdec2D &a) {
	out << "(" << a.x << "," << a.y << ")" << "\n";
	return out;
}

Rdec2D operator+=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;
	return lhs;
}

Rdec2D operator-=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;
	return lhs;
}

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = lhs;
	res += rhs;
	return res;
}

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = lhs;
	res -= rhs;
	return res;
}

Rdec2D operator*=(Rdec2D& lhs, const double& rhs) {
	lhs.x *= rhs;
	lhs.y *= rhs;
	return lhs;
}

Rdec2D operator/=(Rdec2D& lhs, const double& rhs) {
	lhs.x /= rhs;
	lhs.y /= rhs;
	return lhs;
}

Rdec2D operator*(Rdec2D lhs, const double& rhs) {
	Rdec2D& res = lhs;
	res *= rhs;
	return res;
}

Rdec2D operator/(Rdec2D lhs, const double& rhs) {
	Rdec2D& res = lhs;
	res /= rhs;
	return res;
}

double norm(const Rdec2D& vec) {
	return std::sqrt(vec.x * vec.x + vec.y * vec.y);
}

double dot(const Rdec2D& lhs, const Rdec2D& rhs) {
	return (lhs.x*rhs.x + lhs.y*rhs.y);
}

Rpol2D operator+=(Rpol2D& lhs, const Rpol2D& rhs) {
	Rdec2D new_lhs = ToDec(lhs);
	Rdec2D new_rhs = ToDec(rhs);
	new_lhs += new_rhs;
	lhs = ToPol(new_lhs);
	return lhs;
}

Rpol2D operator-=(Rpol2D& lhs, const Rpol2D& rhs) {
	Rdec2D new_lhs = ToDec(lhs);
	Rdec2D new_rhs = ToDec(rhs);
	new_lhs -= new_rhs;
	lhs = ToPol(new_lhs);
	return lhs;
}

Rpol2D operator+(const Rpol2D& lhs, const Rpol2D& rhs) {
	Rpol2D res = lhs;
	res += rhs;
	return res;
}

Rpol2D operator-(const Rpol2D& lhs, const Rpol2D& rhs) {
	Rpol2D res = lhs;
	res -= rhs;
	return res;
}


int main() {
	Rdec2D r_m = { 0, -13};
	Rdec2D r_c = { 13, -5 };
	double k_c = 4;
	double const_y_m = r_m.y;
	Rdec2D v_m = { 0, 3 };
	Rdec2D v_c = { 0, 0 };
	double norm_v_c = norm(v_c);
	double dt = 1;
	double const_between = norm(r_m - r_c);
	for (int i = 1; i != 0;  i += 1) {
		if (norm(r_c) >= norm(r_m + v_m)) {
			std::cout << "go far-far/on places";
			break;
		}
		r_m += v_m;
		if (r_m.y >= 0) {
			std::cout << "go under";
			break;
		}
		Rdec2D delta_v_c = (r_m - r_c) / norm(r_m - r_c) * norm_v_c;
		r_c += delta_v_c;
		if (norm(r_m - r_c) <= k_c) {
			std::cout << "was eaten";
			break;
		}
	}
}
