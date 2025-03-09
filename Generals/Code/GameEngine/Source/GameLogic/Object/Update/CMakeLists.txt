add_library(GameLogicUpdate
  PowerPlantUpdate.cpp
  # AssistedTargetingUpdate.cpp
  LaserUpdate.cpp
  # StructureToppleUpdate.cpp
  # SpyVisionUpdate.cpp
  CleanupHazardUpdate.cpp
  # EMPUpdate.cpp
  FlammableUpdate.cpp
  FloatUpdate.cpp
  # PilotFindVehicleUpdate.cpp
  # AutoFindHealingUpdate.cpp
  # MobMemberSlavedUpdate.cpp
  # NeutronMissileUpdate.cpp
  RadiusDecalUpdate.cpp
  HelicopterSlowDeathUpdate.cpp
  # ToppleUpdate.cpp
  HeightDieUpdate.cpp
  DeletionUpdate.cpp
  # StructureCollapseUpdate.cpp
  # ParticleUplinkCannonUpdate.cpp
  CheckpointUpdate.cpp
  # WaveGuideUpdate.cpp
  OCLUpdate.cpp
  # FireOCLAfterWeaponCooldownUpdate.cpp
  StickyBombUpdate.cpp
  DelayedWeaponSetUpgradeUpdate.cpp
  ProneUpdate.cpp
  # BattlePlanUpdate.cpp
  # SlavedUpdate.cpp
  DynamicGeometryInfoUpdate.cpp
  # FireSpreadUpdate.cpp
  # AIUpdate.cpp
  DemoTrapUpdate.cpp
  # AutoDepositUpdate.cpp
  # HijackerUpdate.cpp
  # FirestormDynamicGeometryInfoUpdate.cpp
  # ProductionUpdate.cpp
  LifetimeUpdate.cpp
  # BoneFXUpdate.cpp
  BaseRenerateUpdate.cpp
  DynamicShroudClearingRangeUpdate.cpp
  FireWeaponUpdate.cpp
  # NeutronMissileSlowDeathUpdate.cpp
  # StealthDetectorUpdate.cpp
  ProjectileStreamUpdate.cpp
  # CommandButtonHuntUpdate.cpp
  RadarUpdate.cpp
  # HordeUpdate.cpp
  # StealthUpdate.cpp
  # PhysicsUpdate.cpp
  UpdateModule.cpp
  EnemyNearUpdate.cpp
  # SpecialAbilityUpdate.cpp
  MissileLauncherBuildingUpdate.cpp
  # TensileFormationUpdate.cpp
  PointDefenseLaserUpdate.cpp
)

target_include_directories(GameLogicUpdate PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory(AIUpdate)
add_subdirectory(DockUpdate)
# add_subdirectory(ProductionExitUpdate)
