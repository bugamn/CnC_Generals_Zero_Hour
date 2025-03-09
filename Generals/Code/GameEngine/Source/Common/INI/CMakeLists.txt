add_library(Ini
  INIAiData.cpp
  # INIAnimation.cpp
  INIAudioEventInfo.cpp
  # INICommandButton.cpp
  # INICommandSet.cpp
  # INIControlBarScheme.cpp
  # INI.cpp
  INICrate.cpp
  INIDamageFX.cpp
  # INIDrawGroupInfo.cpp
  INIGameData.cpp
  INIMapCache.cpp
  INIMapData.cpp
  INIMappedImage.cpp
  INIMiscAudio.cpp
  INIModel.cpp
  INIMultiplayer.cpp
  INIObject.cpp
  INIParticleSys.cpp
  INISpecialPower.cpp
  INITerrainBridge.cpp
  INITerrain.cpp
  INITerrainRoad.cpp
  INIUpgrade.cpp
  INIVideo.cpp
  INIWater.cpp
  INIWeapon.cpp
  # INIWebpageURL.cpp
)

target_include_directories(Ini PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)
