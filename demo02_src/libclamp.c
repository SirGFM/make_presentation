#include <my_lib/clamp.h>

int clamp(int val, int min, int max) {
    if (val < min)
        return min;
    else if (val > max)
        return max;
    else
        return val;
}
