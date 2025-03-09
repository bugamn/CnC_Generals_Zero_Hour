add_library(CrateCollide
  SalvageCrateCollide.cpp
  ConvertToCarBombCrateCollide.cpp
  ConvertToHijackedVehicleCrateCollide.cpp
  VeterancyCrateCollide.cpp
  HealCrateCollide.cpp
  CrateCollide.cpp
  UnitCrateCollide.cpp
  MoneyCrateCollide.cpp
  ShroudCrateCollide.cpp
)

target_include_directories(CrateCollide PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
