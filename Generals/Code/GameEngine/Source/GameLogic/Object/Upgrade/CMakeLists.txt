add_library(Upgrade
  ObjectCreationUpgrade.cpp
  UnpauseSpecialPowerUpgrade.cpp
  RadarUpgrade.cpp
  CommandSetUpgrade.cpp
  WeaponBonusUpgrade.cpp
  StealthUpgrade.cpp
  StatusBitsUpgrade.cpp
  DelayedUpgrade.cpp
  UpgradeModule.cpp
  MaxHealthUpgrade.cpp
  SubObjectsUpgrade.cpp
  CostModifierUpgrade.cpp
  ArmorUpgrade.cpp
  ExperienceScalarUpgrade.cpp
  PowerPlantUpgrade.cpp
  ActiveShroudUpgrade.cpp
  LocomotorSetUpgrade.cpp
  WeaponSetUpgrade.cpp
)

target_include_directories(Upgrade PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

