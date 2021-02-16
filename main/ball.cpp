
//C++ ANIMATION USING STRINGS COVERTION

#include <iostream>
#include <string>


using namespace std;
#define DELAY 10000000L
//
#define CLEAR (cout << "\033[2J") 
#define P(z,s) (cout <<"\033["<< z <<';'<< s <<'H') // POSITION OF THE BALL ZIS A ROW AND S A COLUM 

int main()
{

int x = 2, y = 3, dx = 1, a= 0; // acceleration
CLEAR;
P(1,25);
P(25,1);

while(true)// infinity loop
{
    P(y,x); cout << 'o' << endl; // BALL
    for( long wait = 0; wait < DELAY; ++wait)
;
if(x == 1 || x == 79) // wall found 
    dx = -dx;


if( y == 24 ) 
{   CLEAR;
    a = - a;
    if( a == 0 ) 
    a = -7;// restart
    }
    a += a;// acceleration = 1

 P(y,x); cout << ' ';// CLEAR SCREEN
y += a; x += dx; // NEW POSITION
CLEAR;
}

return 0;
}