# Distributed under the MIT License.
# See LICENSE.txt for details.


set(LIBRARY "Test_WaveEquation")

set(LIBRARY_SOURCES
  Test_PlaneWave.cpp
  Test_RegularSphericalWave.cpp
  Test_SemidiscretizedDg.cpp
  )

add_test_library(
  ${LIBRARY}
  "PointwiseFunctions/AnalyticSolutions/WaveEquation/"
  "${LIBRARY_SOURCES}"
  "WaveEquationSolutions;MathFunctions;Utilities"
  )

add_dependencies(
  ${LIBRARY}
  module_GlobalCache
  )
