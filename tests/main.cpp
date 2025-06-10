#include <iostream>
#include "Tasil/Tasil.h"

int main() {
    if (is_windows()) {
        print("WINDOWS!");
    } else {
        print("OUTRO!");
    }
    return 0;
}