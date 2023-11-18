#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    float f = 0;
    cout << "ÇëÊäÈë»ªÊÏÎÂ¶È£º" << f << fixed << setprecision(3) << "¡ãF" << endl;
    cin >> f;

    float c = (f - 32) * 5 / 9;
    cout << "ÉãÊÏÎÂ¶È£º" << c << fixed << setprecision(3) << "¡ãC" << endl;
    system("pause");
    return 0;
}
