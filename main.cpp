#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
  double x, y, R;

  srand((unsigned) time(NULL));

  cout << "R = "; cin >> R;

  for (int i=0; i<10; i++)
  {
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && x <= 0 && y <= 0 ||
    y <= pow((x - 1), 2) && x >= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

  cout << endl << fixed;

  for (int i=0; i<10; i++)
  {
    x = 2.0 * rand() / RAND_MAX * R - R;
    y = 2.0 * rand() / RAND_MAX * R - R;

    if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && x <= 0 && y <= 0 ||
    y <= pow((x - 1), 2) && x >= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2))
      cout << setw(8) << setprecision(4) << x << " "
      << setw(8) << setprecision(4) << y << " " << "yes" << endl;
    else
      cout << setw(8) << setprecision(4) << x << " "
      << setw(8) << setprecision(4) << y << " " << "no" << endl;
  }

  return 0;
}