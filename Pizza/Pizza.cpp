#include "Pizza.h"
using namespace std;
string BasePizza::getDescription() const {
    return "Коржик з томатною основою";
}
double BasePizza::getCost() const {
    return 100.0;
}