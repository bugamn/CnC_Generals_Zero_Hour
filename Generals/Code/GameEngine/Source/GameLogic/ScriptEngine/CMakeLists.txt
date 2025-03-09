add_library(ScriptEngine
  VictoryConditions.cpp
  ScriptEngine.cpp
  ScriptActions.cpp
  ScriptConditions.cpp
  Scripts.cpp
)

target_include_directories(ScriptEngine PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

