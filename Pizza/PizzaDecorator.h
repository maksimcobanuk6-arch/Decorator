#pragma once
#include "Pizza.h"
#include <memory>
#include <string>
// Обгортає базовий клас
class PizzaDecorator : public Pizza {
public:
    explicit PizzaDecorator(std::unique_ptr<Pizza> pizza);
    std::string getDescription() const override;
    double getCost() const override;

protected:
    std::unique_ptr<Pizza> pizza_;
};