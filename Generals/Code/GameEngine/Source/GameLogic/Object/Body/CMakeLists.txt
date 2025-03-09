add_library(Body
  ImmortalBody.cpp
  HighlanderBody.cpp
  ActiveBody.cpp
  InactiveBody.cpp
  StructureBody.cpp
  HiveStructureBody.cpp
  BodyModule.cpp
)

target_include_directories(Body PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

