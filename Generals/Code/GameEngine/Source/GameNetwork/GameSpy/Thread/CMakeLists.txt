add_library(Thread
  PersistentStorageThread.cpp
  PeerThread.cpp
  GameResultsThread.cpp
  BuddyThread.cpp
  ThreadUtils.cpp
  PingThread.cpp
)

target_include_directories(Thread PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
