add_library(Common
  crc.cpp
  DiscreteCircle.cpp
  PartitionSolver.cpp
  version.cpp
)

target_include_directories(Common PUBLIC
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include"
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
                           "${PROJECT_SOURCE_DIR}/Libraries/Include"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
			 )
