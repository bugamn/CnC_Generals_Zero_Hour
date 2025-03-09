add_library(Object
  Locomotor.cpp
  ObjectCreationList.cpp
  Armor.cpp
  ObjectTypes.cpp
  Object.cpp
  PartitionManager.cpp
  Weapon.cpp
  GhostObject.cpp
  SimpleObjectIterator.cpp
  FiringTracker.cpp
  WeaponSet.cpp
  ExperienceTracker.cpp
)

target_include_directories(Object PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory(Die)
add_subdirectory(Helper)
add_subdirectory(Damage)
add_subdirectory(Update)
add_subdirectory(Contain)
add_subdirectory(Collide)
add_subdirectory(Destroy)
add_subdirectory(Body)
add_subdirectory(Upgrade)
add_subdirectory(SpecialPower)
add_subdirectory(Create)
add_subdirectory(Behavior)