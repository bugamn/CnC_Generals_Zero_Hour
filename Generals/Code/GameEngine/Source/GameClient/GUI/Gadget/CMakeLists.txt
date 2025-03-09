add_library(Gadget
  GadgetCheckBox.cpp
  GadgetComboBox.cpp
  GadgetListBox.cpp
  GadgetStaticText.cpp
  GadgetTextEntry.cpp
  GadgetHorizontalSlider.cpp
  GadgetRadioButton.cpp
  GadgetPushButton.cpp
  GadgetProgressBar.cpp
  GadgetTabControl.cpp
  GadgetVerticalSlider.cpp
)

target_include_directories(Gadget PUBLIC
  "${PROJECT_SOURCE_DIR}/GameEngine/Include"
  "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
  "${PROJECT_SOURCE_DIR}/Libraries/Include"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
  "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
)

