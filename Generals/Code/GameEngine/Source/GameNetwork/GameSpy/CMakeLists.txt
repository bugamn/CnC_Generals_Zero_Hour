add_library(GameSpy
  PeerDefs.cpp
  GSConfig.cpp
  LadderDefs.cpp
  StagingRoomGameInfo.cpp
  Chat.cpp
  MainMenuUtils.cpp
  LobbyUtils.cpp
)

target_include_directories(GameSpy PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory(Thread)
