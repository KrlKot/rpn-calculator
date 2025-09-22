#include <gtest/gtest.h>
#include "rpn.h"
#include <stdexcept>
#include <cmath>

TEST(RPNTest, BasicAddition) {
    EXPECT_DOUBLE_EQ(evaluate_rpn("2 3 +"), 5.0);
}
TEST(RPNTest, ComplexExpression) {
    EXPECT_NEAR(evaluate_rpn("15 7 1 1 + - / 3 * 2 1 1 + + -"), 5.0, 1e-9);
}
TEST(RPNTest, DivisionByZero) {
    EXPECT_THROW(evaluate_rpn("1 0 /"), std::invalid_argument);
}
TEST(RPNTest, InvalidExpression) {
    EXPECT_THROW(evaluate_rpn("2 +"), std::invalid_argument);
}
TEST(RPNTest, SqrtFunction) {
    EXPECT_DOUBLE_EQ(evaluate_rpn("9 sqrt"), 3.0);
    EXPECT_DOUBLE_EQ(evaluate_rpn("2 sqrt"), std::sqrt(2));
}
TEST(RPNTest, SqrtInvalidInput) {
    EXPECT_THROW(evaluate_rpn("sqrt"), std::invalid_argument);
    EXPECT_THROW(evaluate_rpn("-1 sqrt"), std::invalid_argument);
}
