add_library(DockUpdate
  PrisonDockUpdate.cpp
  RailedTransportDockUpdate.cpp
  SupplyWarehouseDockUpdate.cpp
  DockUpdate.cpp
  SupplyCenterDockUpdate.cpp
  RepairDockUpdate.cpp
)

target_include_directories(DockUpdate PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

