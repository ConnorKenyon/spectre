# Distributed under the MIT License.
# See LICENSE.txt for details.

spectre_target_headers(
  Interpolation
  INCLUDE_DIRECTORY ${CMAKE_SOURCE_DIR}/src
  HEADERS
  ElementInitInterpPoints.hpp
  ElementReceiveInterpPoints.hpp
  InterpolateToTarget.hpp
  InterpolationTargetSendPoints.hpp
  InterpolationTargetVarsFromElement.hpp
  SendPointsToInterpolator.hpp
  )
