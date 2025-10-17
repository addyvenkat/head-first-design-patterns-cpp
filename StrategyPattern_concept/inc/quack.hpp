#pragma once

#include <concepts>
#include <iostream>

namespace ducksim {

template<class T>
concept QuackPolicy = requires(const T& t) {
  { t.quack() } noexcept -> std::same_as<void>;
};

struct Quack {
    void quack() const noexcept { 
        std::cout<<"quack!\n";
    }
};

struct Squeak {
    void quack() const noexcept {
        std::cout<<"squeak!\n"; 
    }
};

struct MuteQuack {
    void quack() const noexcept {
        std::cout<<"<<silence>>\n";
    }
};

static_assert(QuackPolicy<Quack>);
static_assert(QuackPolicy<Squeak>);
static_assert(QuackPolicy<MuteQuack>);

} // namespace ducksim
