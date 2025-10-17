#pragma once

#include <concepts>
#include <iostream>

namespace ducksim {

template<typename T>
concept FlyPolicy = requires (const T& t) {
    { t.fly() } noexcept -> std::same_as<void>;
};

// Concrete strategies (no dynamic alloc, no vtables)
struct FlyWithWings {
    void fly() const noexcept { 
        std::cout<<"flapping with wings!\n"; 
    }
};

struct FlyWithRocket {
    void fly() const noexcept { 
        std::cout<<"blasting off with a rocket!\n";
    }
};

struct FlyNoWay {
    void fly() const noexcept {
        std::cout<<"can't fly!\n";
    }
};

static_assert(FlyPolicy<FlyWithWings>);
static_assert(FlyPolicy<FlyWithRocket>);
static_assert(FlyPolicy<FlyNoWay>);

} // namespace ducksim