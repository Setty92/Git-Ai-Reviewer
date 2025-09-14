cmake_minimum_required(VERSION 4.0)
project(Git_Ai_Reviewer)

set(CMAKE_CXX_STANDARD 20)

# --- Include nlohmann/json ---
include(FetchContent)
FetchContent_Declare(
        json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.12.0
)
FetchContent_MakeAvailable(json)

add_executable(Git_Ai_Reviewer
        Source/main.cpp
        Source/Utilites/ConfigurationUtilites.h
        Source/Utilites/GitUtilites.h
        Source/Utilites/JsonUtilities.h
        Source/Utilites/JsonUtilities.cpp
        Source/Utilites/FormattingUtilites.h
)

target_link_libraries(Git_Ai_Reviewer PRIVATE nlohmann_json::nlohmann_json)
