#include <iostream>
#include "Strncat.h"
using namespace std;

int main()
{
    char dest[20] = {0};
    const char* souce = "hello word!!!";
    Strncat(dest, souce, 5);
    cout << dest << endl;
    return 0;
}
