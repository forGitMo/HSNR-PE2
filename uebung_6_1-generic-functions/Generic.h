#ifndef _GENERIC_H_
#define _GENERIC_H_

template <typename T>
T min(T x, T y){
    T min = x;
    if(min > y) min = y;

    return min;
}

template <typename  S>
void swap(S &x, S &y){
    S var;
    var = x;
    x = y;
    y = var;

}
#endif