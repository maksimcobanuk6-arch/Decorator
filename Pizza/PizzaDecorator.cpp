#include "PizzaDecorator.h"
PizzaDecorator::PizzaDecorator(std::unique_ptr<Pizza> pizza)
    : pizza_(std::move(pizza)) {
}

std::string PizzaDecorator::getDescription() const {
    return pizza_->getDescription();
}
double PizzaDecorator::getCost() const {
    return pizza_->getCost();
}