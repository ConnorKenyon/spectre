# Distributed under the MIT License.
# See LICENSE.txt for details.

set(LIBRARY "Test_NewtonianEulerLimiters")

set(LIBRARY_SOURCES
  Test_CharacteristicHelpers.cpp
  )

add_test_library(
  ${LIBRARY}
  "Evolution/Systems/NewtonianEuler/Limiters"
  "${LIBRARY_SOURCES}"
  "NewtonianEulerLimiters"
  )
