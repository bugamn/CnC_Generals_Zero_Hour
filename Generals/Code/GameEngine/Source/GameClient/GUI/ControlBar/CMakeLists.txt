add_library(ControlBar
  ControlBarCommand.cpp
  ControlBarScheme.cpp
  ControlBarUnderConstruction.cpp
  ControlBarStructureInventory.cpp
  ControlBarOCLTimer.cpp
  ControlBarResizer.cpp
  ControlBarMultiSelect.cpp
  ControlBarPrintPositions.cpp
  ControlBar.cpp
  ControlBarObserver.cpp
  ControlBarBeacon.cpp
  ControlBarCommandProcessing.cpp
)

target_include_directories(ControlBar PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

