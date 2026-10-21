#include <iostream>
#include <memory>
#include "Pizza.h"
#include "Ingradients.h"
#include <windows.h>
using namespace std;
void printPizza(const Pizza& p) {
    cout << p.getDescription() << " — " << p.getCost() << " грн\n";
}
int main() {
    SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    // Проста піцаа
    unique_ptr<Pizza> p1 = make_unique<BasePizza>();
    printPizza(*p1);
    // Сирна з ковбасою
    unique_ptr<Pizza> p2 = make_unique<BasePizza>();
    p2 = make_unique<Cheese>(move(p2));
    p2 = make_unique<Sausage>(move(p2));
    printPizza(*p2);
    // Овочева з подвійним сиром і соусом
    std::unique_ptr<Pizza> p3 =make_unique<BasePizza>();
    p3 = make_unique<Vegetables>(move(p3));
    p3 = make_unique<Cheese>(move(p3));
    p3 = make_unique<Cheese>(move(p3));
    p3 = make_unique<Sauce>(move(p3));
    printPizza(*p3);
    return 0;
}