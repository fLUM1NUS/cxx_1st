#include <iostream>
#include <limits>
#include <vector>

using namespace std;

#include <cmath> // для функции sqrt()
#include <iostream>

#include <algorithm>
#include "inout.h"

int main() {
    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}
