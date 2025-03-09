add_library(Audio
  # AudioEventRTS.cpp
  AudioRequest.cpp
  # GameAudio.cpp
  GameMusic.cpp
  # GameSounds.cpp
  # GameSpeech.cpp
  # SimplePlayer.cpp
  # URLLaunch.cpp
)

target_include_directories(Audio PUBLIC
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include"
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
                           "${PROJECT_SOURCE_DIR}/Libraries/Include"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/Compression/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
			 )
