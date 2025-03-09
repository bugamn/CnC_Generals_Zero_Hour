add_library(Die
  DestroyDie.cpp
  # CreateCrateDie.cpp
  # EjectPilotDie.cpp
  # SpecialPowerCompletionDie.cpp
  FXListDie.cpp
  # RebuildHoleExposeDie.cpp
  KeepObjectDie.cpp
  DamDie.cpp
  CreateObjectDie.cpp
  # UpgradeDie.cpp
  DieModule.cpp
  # CrushDie.cpp
)

target_include_directories(Die PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
