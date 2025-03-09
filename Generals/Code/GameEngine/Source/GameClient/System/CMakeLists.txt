add_library(GameClientSystem
  RayEffect.cpp
  # Image.cpp
  DebugDisplay.cpp
  CampaignManager.cpp
  # Anim2D.cpp
  # ParticleSys.cpp
)

target_include_directories(GameClientSystem PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory("Debug Displayers")
