add_library(AIUpdate
  # HackInternetAIUpdate.cpp
  # RailedTransportAIUpdate.cpp
  # DozerAIUpdate.cpp
  # POWTruckAIUpdate.cpp
  # ChinookAIUpdate.cpp
  # JetAIUpdate.cpp
  # RailroadGuideAIUpdate.cpp
  # MissileAIUpdate.cpp
  WanderAIUpdate.cpp
  # WorkerAIUpdate.cpp
  # SupplyTruckAIUpdate.cpp
  # AssaultTransportAIUpdate.cpp
  TransportAIUpdate.cpp
  # DeliverPayloadAIUpdate.cpp
  # DeployStyleAIUpdate.cpp
)

target_include_directories(AIUpdate PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
