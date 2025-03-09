add_library(Create
  VeterancyGainCreate.cpp
  PreorderCreate.cpp
  CreateModule.cpp
  SupplyCenterCreate.cpp
  SupplyWarehouseCreate.cpp
  GrantUpgradeCreate.cpp
  SpecialPowerCreate.cpp
)

target_include_directories(Create PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
