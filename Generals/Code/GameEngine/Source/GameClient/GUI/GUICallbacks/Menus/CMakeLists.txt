add_library(Menus
  WOLLocaleSelectPopup.cpp
  SkirmishGameOptionsMenu.cpp
  WOLBuddyOverlay.cpp
  PopupLadderSelect.cpp
  PopupPlayerInfo.cpp
  PopupReplay.cpp
  WOLStatusMenu.cpp
  ScoreScreen.cpp
  LanGameOptionsMenu.cpp
  WOLLadderScreen.cpp
  DifficultySelect.cpp
  DownloadMenu.cpp
  WOLWelcomeMenu.cpp
  PopupSaveLoad.cpp
  SkirmishMapSelectMenu.cpp
  KeyboardOptionsMenu.cpp
  PopupHostGame.cpp
  WOLMessageWindow.cpp
  NetworkDirectConnect.cpp
  LanLobbyMenu.cpp
  WOLCustomScoreScreen.cpp
  PopupCommunicator.cpp
  DisconnectWindow.cpp
  MainMenu.cpp
  LanMapSelectMenu.cpp
  CreditsMenu.cpp
  ReplayMenu.cpp
  WOLMapSelectMenu.cpp
  SinglePlayerMenu.cpp
  OptionsMenu.cpp
  WOLQMScoreScreen.cpp
  QuitMenu.cpp
  GameInfoWindow.cpp
  MapSelectMenu.cpp
  PopupJoinGame.cpp
  WOLQuickMatchMenu.cpp
  WOLGameSetupMenu.cpp
  WOLLoginMenu.cpp
  WOLLobbyMenu.cpp
  EstablishConnectionsWindow.cpp
)

target_include_directories(Menus PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

