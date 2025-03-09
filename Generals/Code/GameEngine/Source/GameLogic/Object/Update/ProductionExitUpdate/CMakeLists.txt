add_library(ProductionExitUpdate
  DefaultProductionExitUpdate.cpp
  QueueProductionExitUpdate.cpp
  SpawnPointProductionExitUpdate.cpp
  SupplyCenterProductionExitUpdate.cpp
)

target_include_directories(ProductionExitUpdate PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
