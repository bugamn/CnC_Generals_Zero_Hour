add_library(System
  ArchiveFile.cpp
  ArchiveFileSystem.cpp
  # AsciiString.cpp
  # BuildAssistant.cpp
  CDManager.cpp
  Compression.cpp
  CopyProtection.cpp
  # CriticalSection.cpp
  DataChunk.cpp
  # Debug.cpp
  Directory.cpp
  DisabledTypes.cpp
  encrypt.cpp
  File.cpp
  FileSystem.cpp
  # FunctionLexicon.cpp
  GameCommon.cpp
  # GameMemory.cpp
  GameType.cpp
  Geometry.cpp
  KindOf.cpp
  List.cpp
  # LocalFile.cpp
  LocalFileSystem.cpp
  # MemoryInit.cpp
  QuickTrig.cpp
  # QuotedPrintable.cpp
  # Radar.cpp
  # RAMFile.cpp
  # registry.cpp
  # Snapshot.cpp
  StackDump.cpp
  # StreamingArchiveFile.cpp
  String.cpp
  SubsystemInterface.cpp
  Trig.cpp
  # UnicodeString.cpp
  # Upgrade.cpp
  # Xfer.cpp
  XferCRC.cpp
  # XferLoad.cpp
  XferSave.cpp
)

target_include_directories(System PUBLIC
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include"
                           "${PROJECT_SOURCE_DIR}/GameEngine/Include/Precompiled"
                           "${PROJECT_SOURCE_DIR}/Libraries/Include"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/Compression/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/"
                           "${PROJECT_SOURCE_DIR}/Libraries/Source/WWVegas/WWLib/"
			 )
