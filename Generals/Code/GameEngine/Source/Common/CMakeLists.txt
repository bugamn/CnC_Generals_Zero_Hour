add_library(Common
  BitFlags.cpp
  CommandLine.cpp
  crc.cpp
  CRCDebug.cpp
  DamageFX.cpp
  Dict.cpp
  DiscreteCircle.cpp
  # GameEngine.cpp
  GameLOD.cpp
  # GameMain.cpp
  # GlobalData.cpp
  # Language.cpp
  # MessageStream.cpp
  # MiniLog.cpp
  # MultiplayerSettings.cpp
  # NameKeyGenerator.cpp
  PartitionSolver.cpp
  # PerfTimer.cpp
  RandomValue.cpp
  # Recorder.cpp
  # SkirmishBattleHonors.cpp
  # StateMachine.cpp
  # StatsCollector.cpp
  TerrainTypes.cpp
  # UserPreferences.cpp
  Version.cpp
)

target_include_directories(Common PUBLIC
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include"
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
                           "${PROJECT_SOURCE_DIR}/Libraries/Include"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
			 )
