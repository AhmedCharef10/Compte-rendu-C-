#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:

    Point(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}

    Point(const Point& autre) : x(autre.x), y(autre.y) {}


    void affiche() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }


    friend bool comparer(const Point& p1, const Point& p2);
    friend double distance(const Point& p1, const Point& p2);
    friend Point milieu(const Point& p1, const Point& p2);
};


bool comparer(const Point& p1, const Point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}


double distance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return std::sqrt(dx * dx + dy * dy);
}


Point milieu(const Point& p1, const Point& p2) {
    double mx = (p1.x + p2.x) / 2.0;
    double my = (p1.y + p2.y) / 2.0;
    return Point(mx, my);
}

int main() {

    Point A(1.0, 2.0);
    Point B(3.0, 4.0);

    std::cout << "Point A : ";
    A.affiche();

    std::cout << "Point B : ";
    B.affiche();


    if (comparer(A, B)) {
        std::cout << "Les points A et B sont identiques.\n";
    } else {
        std::cout << "Les points A et B ne sont pas identiques.\n";
    }


    double dist = distance(A, B);
    std::cout << "La distance entre A et B est : " << dist << std::endl;


    Point milieuPoint = milieu(A, B);
    std::cout << "Le point milieu entre A et B est : ";
    milieuPoint.affiche();

    return 0;
}
