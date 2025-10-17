#pragma once
#include "fly.hpp"
#include "quack.hpp"
#include <type_traits>

namespace ducksim {

template<FlyPolicy F, QuackPolicy Q>
struct Duck {
    F _fly;
    Q _quack;

    constexpr Duck(F f = {}, Q q = {}) noexcept(
        std::is_nothrow_default_constructible_v<F> &&
        std::is_nothrow_default_constructible_v<Q>) : _fly(f), _quack(q) {}

    void performFly() const noexcept(noexcept(_fly.fly()))   { _fly.fly(); }
    void performQuack() const noexcept(noexcept(_quack.quack())) { _quack.quack(); }
};

using Mallard    = Duck<FlyWithWings, Quack>;
using ModelDuck  = Duck<FlyWithWings, Squeak>;
using RubberDuck = Duck<FlyWithRocket, Squeak>;

} // namespace ducksim
