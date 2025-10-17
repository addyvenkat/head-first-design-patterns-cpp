#include <gtest/gtest.h>
#include <string>
#include "duck.hpp"

using namespace ducksim;

TEST(DuckSim, Mallard_Fly_PrintsWings) {
  const Mallard d{};
  static_assert(noexcept(std::declval<const Mallard&>().performFly()));

  testing::internal::CaptureStdout();
  d.performFly();
  std::string out = testing::internal::GetCapturedStdout();

  EXPECT_NE(out.find("flapping with wings"), std::string::npos);
}

TEST(DuckSim, ModelDuck_Quack_PrintsSqueak) {
  const ModelDuck d{};
  static_assert(noexcept(std::declval<const ModelDuck&>().performQuack()));

  testing::internal::CaptureStdout();
  d.performQuack();
  std::string out = testing::internal::GetCapturedStdout();

  EXPECT_NE(out.find("squeak"), std::string::npos);
}

TEST(DuckSim, RubberDuck_Fly_PrintsRocket) {
  const RubberDuck d{};

  testing::internal::CaptureStdout();
  d.performFly();
  std::string out = testing::internal::GetCapturedStdout();

  EXPECT_NE(out.find("rocket"), std::string::npos);
}
