#pragma once
#pragma once
#include <string>
// Базовий інтерфейс піци
class Pizza {
public:
    virtual ~Pizza() = default;
    virtual std::string getDescription() const = 0;
    virtual double getCost() const = 0;
};
// Базовий клас піци
class BasePizza : public Pizza {
public:
    std::string getDescription() const override;
    double getCost() const override;
};