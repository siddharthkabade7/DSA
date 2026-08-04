#include <iostream>
#include <cmath>
using namespace std;

class Distance
{
    int x, y;

public:
    // Default constructor
    Distance()
    {
        x = 0;
        y = 0;
    }

    void getPoints()
    {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;
    }

    void calDist(Distance d)
    {
        int dx = x - d.x;
        int dy = y - d.y;

        double dist = sqrt(dx * dx + dy * dy);

        cout << "Distance = " << dist;
    }
};

int main()
{
    Distance d1, d2;

    cout << "Point 1\n";
    d1.getPoints();

    cout << "\nPoint 2\n";
    d2.getPoints();

    cout << "\n";
    d1.calDist(d2);

    return 0;
}