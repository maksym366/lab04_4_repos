#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, X_poch, X_kin, dX;

    cout << "R = ";
    cin >> R;

    cout << "X_poch = ";
    cin >> X_poch;

    cout << "X_kin = ";
    cin >> X_kin;

    cout << "dX = ";
    cin >> dX;

    cout << endl;
    cout << "---------------------------------" << endl;
    cout << setw(10) << "X"
        << setw(15) << "Y" << endl;
    cout << "---------------------------------" << endl;

    for (double x = X_poch; x <= X_kin; x += dX)
    {
        double y;

        if (x <= -5)
        {
            y = -3;
        }
        else if (x > -5 && x <= -R)
        {
            y = 3 * (x + 5) / (5 - R) - 3;
        }
        else if (x > -R && x <= R)
        {
            y = sqrt(R * R - x * x);
        }
        else if (x > R && x < 8)
        {
            y = R * (x - R) / (8 - R);
        }
        else if (x >= 8)
        {
            y = R;
        }

        cout << fixed << setprecision(2);
        cout << setw(10) << x
            << setw(15) << y << endl;
    }

    cout << "---------------------------------" << endl;

    return 0;
}