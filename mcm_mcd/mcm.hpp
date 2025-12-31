#pragma once
#include "mcd.hpp"


int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}