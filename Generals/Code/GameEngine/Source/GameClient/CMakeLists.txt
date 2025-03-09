add_library(GameClient
  # Line2D.cpp
  Color.cpp
  # SelectionInfo.cpp
  # GlobalLanguage.cpp
  # Eva.cpp
  # FXList.cpp
  # Credits.cpp
  # GameClient.cpp
  # GameText.cpp
  # Water.cpp
  View.cpp
  DisplayStringManager.cpp
  VideoStream.cpp
  # DrawGroupInfo.cpp
  GameClientDispatch.cpp
  # Display.cpp
  GraphDraw.cpp
  # Drawable.cpp
  DrawableManager.cpp
  DisplayString.cpp
  Statistics.cpp
  # LanguageFilter.cpp
  # InGameUI.cpp
  VideoPlayer.cpp
  # MapUtil.cpp
  # RadiusDecal.cpp
)

target_include_directories(GameClient PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

add_subdirectory(Terrain)
# add_subdirectory(GUI)
# add_subdirectory(MessageStream)
add_subdirectory(Drawable)
# add_subdirectory(Input)
add_subdirectory(System)
