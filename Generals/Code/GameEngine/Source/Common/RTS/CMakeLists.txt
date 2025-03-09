add_library(RTS
  ActionManager.cpp
  Energy.cpp
  Handicap.cpp
  MissionStats.cpp
  Money.cpp
  Player.cpp
  PlayerList.cpp
  PlayerTemplate.cpp
  ProductionPrerequisite.cpp
  ResourceGatheringManager.cpp
  Science.cpp
  ScoreKeeper.cpp
  SpecialPower.cpp
  Team.cpp
  TunnelTracker.cpp
)

target_include_directories(RTS PUBLIC
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include"
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
                           "${PROJECT_SOURCE_DIR}/Libraries/Include"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
			 )
