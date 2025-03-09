add_library(GUICallbacks
  ControlBarPopupDescription.cpp
  ReplayControls.cpp
  InGamePopupMessage.cpp
  Diplomacy.cpp
  MessageBox.cpp
  ExtendedMessageBox.cpp
  GeneralsExpPoints.cpp
  IMECandidate.cpp
  InGameChat.cpp
  ControlBarCallback.cpp
)

target_include_directories(GUICallbacks PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory(Menus)