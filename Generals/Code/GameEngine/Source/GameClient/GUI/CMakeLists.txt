add_library(GUI
  IMEManager.cpp
  GameWindowTransitions.cpp
  GameWindow.cpp
  AnimateWindowManager.cpp
  LoadScreen.cpp
  GameWindowGlobal.cpp
  WindowLayout.cpp
  WindowVideoManager.cpp
  GameWindowTransitionsStyles.cpp
  GameFont.cpp
  HeaderTemplate.cpp
  ProcessAnimateWindow.cpp
  GameWindowManagerScript.cpp
  GameWindowManager.cpp
  WinInstanceData.cpp
)

target_include_directories(GUI PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory(ControlBar)
add_subdirectory(EstablishConnectionsMenu)
add_subdirectory(Gadget)
add_subdirectory(GUICallbacks)
add_subdirectory(DisconnectMenu)
add_subdirectory(Shell)