add_library(Thing
  ThingFactory.cpp
  Module.cpp
  ModuleFactory.cpp
  ThingTemplate.cpp
  Thing.cpp
  DrawModule.cpp
)

target_include_directories(Thing PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
