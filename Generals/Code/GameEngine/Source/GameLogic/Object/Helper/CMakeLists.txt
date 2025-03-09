add_library(Helper
  ObjectRepulsorHelper.cpp
  ObjectHelper.cpp
  ObjectDefectionHelper.cpp
  ObjectSMCHelper.cpp
  ObjectWeaponStatusHelper.cpp
)

target_include_directories(Helper PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

