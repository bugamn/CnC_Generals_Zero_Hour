add_library(Bezier
  BezFwdIterator.cpp
  BezierSegment.cpp
)

target_include_directories(Bezier PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
