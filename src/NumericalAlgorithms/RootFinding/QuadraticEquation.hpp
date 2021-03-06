// Distributed under the MIT License.
// See LICENSE.txt for details.

/// \file
/// Declares functions for solving quadratic equations

#pragma once

#include <array>

/*!
 * \ingroup NumericalAlgorithmsGroup
 * \brief Returns the positive root of a quadratic equation \f$ax^2 +
 * bx + c = 0\f$
 * \returns The positive root of a quadratic equation.
 * \requires That there are two real roots, of which only one is positive.
 */
double positive_root(double a, double b, double c) noexcept;

/*!
 * \ingroup NumericalAlgorithmsGroup
 * \brief Returns the two real roots of a quadratic equation \f$ax^2 +
 * bx + c = 0\f$ with the root closer to \f$-\infty\f$ first.
 * \returns An array of the roots of a quadratic equation
 * \requires That there are two real roots.
 */
std::array<double, 2> real_roots(double a, double b, double c) noexcept;
