#include "Ingradients.h"
std::string Cheese::getDescription() const {
    return pizza_->getDescription() + ", сир";
}
double Cheese::getCost() const { return pizza_->getCost() + 30.0; }

std::string Sausage::getDescription() const {
    return pizza_->getDescription() + ", ковбаса";
}
double Sausage::getCost() const { return pizza_->getCost() + 45.0; }

std::string Vegetables::getDescription() const {
    return pizza_->getDescription() + ", овочі";
}
double Vegetables::getCost() const { return pizza_->getCost() + 25.0; }

std::string Sauce::getDescription() const {
    return pizza_->getDescription() + ", соус";
}
double Sauce::getCost() const { return pizza_->getCost() + 15.0; }