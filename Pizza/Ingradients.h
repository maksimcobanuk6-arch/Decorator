#pragma once
#include "PizzaDecorator.h"
// конкретні декоратори
class Cheese : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    std::string getDescription() const override;
    double getCost() const override;
};

class Sausage : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    std::string getDescription() const override;
    double getCost() const override;
};

class Vegetables : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    std::string getDescription() const override;
    double getCost() const override;
};

class Sauce : public PizzaDecorator {
public:
    using PizzaDecorator::PizzaDecorator;
    std::string getDescription() const override;
    double getCost() const override;
};