add_library(SpecialPower
  SpecialPowerModule.cpp
  OCLSpecialPower.cpp
  DemoralizeSpecialPower.cpp
  CashHackSpecialPower.cpp
  CashBountyPower.cpp
  SpecialAbility.cpp
  DefectorSpecialPower.cpp
  CleanupAreaPower.cpp
  BaikonurLaunchPower.cpp
  SpyVisionSpecialPower.cpp
)

target_include_directories(SpecialPower PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

