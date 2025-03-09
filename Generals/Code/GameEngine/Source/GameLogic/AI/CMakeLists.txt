add_library(AI
  AIGroup.cpp
  Squad.cpp
  AIPlayer.cpp
  AI.cpp
  AIGuard.cpp
  AIStates.cpp
  AITNGuard.cpp
  TurretAI.cpp
  AISkirmishPlayer.cpp
  AIDock.cpp
  AIPathfind.cpp
)

target_include_directories(AI PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

