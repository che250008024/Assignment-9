#include <iostream>
using namespace std;
struct Color {
    int red;
    int green;
    int blue;
};
int main() {
    Color colors[5] = {
        {120, 61, 200},
        {10, 220, 45},
        {251, 78, 109},
        {80, 150, 90},
        {200, 100, 50}
    };
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }
    cout << "new RGB values:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": "
             << "R=" << colors[i].red << ", "
             << "G=" << colors[i].green << ", "
             << "B=" << colors[i].blue << endl; } 
             return 0;}
