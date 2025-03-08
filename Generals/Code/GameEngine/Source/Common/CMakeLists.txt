add_library(Common
  BitFlags.cpp
  CommandLine.cpp
  crc.cpp
  CRCDebug.cpp
  DamageFX.cpp
  Dict.cpp
  DiscreteCircle.cpp
  PartitionSolver.cpp
  RandomValue.cpp
  Version.cpp
)

target_include_directories(Common PUBLIC
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include"
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
                           "${PROJECT_SOURCE_DIR}/Libraries/Include"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
			 )
