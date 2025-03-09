add_library(GameLogicSystem
  GameLogic.cpp
  CrateSystem.cpp
  CaveSystem.cpp
  Damage.cpp
  GameLogicDispatch.cpp
  RankInfo.cpp
)

target_include_directories(GameLogicSystem PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
