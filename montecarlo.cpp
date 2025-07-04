#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;

class Coord {
private:
public:
  int X;
  int Y;
  Coord(int x, int y) {
    X = x;
    Y = y;
  }
};


bool checkCircle(Coord point, int radius, Coord circleCoord) {
  int len = fabs(sqrt(pow(point.X - circleCoord.X, 2) + pow(point.Y - circleCoord.Y, 2)));
  if (len < radius) {
    return true;
  }
  return false;
}
bool checkSquare(Coord point, int radius) {
  if (point.X < radius && point.Y < radius) {
    return true;
  }
  
  return false;
}

int main(int argc, char const *argv[])
{
  srand(time({}));

  

  const long points = 100000000;
  const int radius = 1000;

  const Coord circleCoord = Coord(radius*2, radius);

  int boxWidth = radius * 3;
  int boxHeight = radius * 2;
  
  long double inCircle = 0;
  long double inSquare = 0;

  Coord point = Coord(0,0);

  for (long i = 0; i < points; i++) {
    point.X = rand() % boxWidth;
    point.Y = rand() % boxHeight;
    // cout << point.X << " " << point.Y << endl;

    if (checkCircle(point, radius, circleCoord)) {
      inCircle++;
    } else 
    if (checkSquare(point, radius)) {
      inSquare++;
    }
  }
  
  cout << "Total points: " << points << endl;
  cout << "In circle: " << inCircle << endl;
  cout << "In square: " << inSquare << endl;
  cout << "Ratio: " << inCircle / inSquare << endl;

  return 0;
}
