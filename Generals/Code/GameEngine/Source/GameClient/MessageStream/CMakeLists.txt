add_library(MessageStream
  CommandXlat.cpp
  MetaEvent.cpp
  PlaceEventTranslator.cpp
  HintSpy.cpp
  LookAtXlat.cpp
  GUICommandTranslator.cpp
  HotKey.cpp
  WindowXlat.cpp
  SelectionXlat.cpp
)

target_include_directories(MessageStream PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
