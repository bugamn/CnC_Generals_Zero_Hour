add_library(Contain
  TunnelContain.cpp
  RailedTransportContain.cpp
  GarrisonContain.cpp
  MobNexusContain.cpp
  OpenContain.cpp
  OverlordContain.cpp
  TransportContain.cpp
  HealContain.cpp
  ParachuteContain.cpp
  CaveContain.cpp
)

target_include_directories(Contain PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
