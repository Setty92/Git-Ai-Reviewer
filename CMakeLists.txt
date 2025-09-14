cmake_minimum_required(VERSION 4.0)
project(Git_Ai_Reviewer)

set(CMAKE_CXX_STANDARD 20)

add_executable(Git_Ai_Reviewer Source/main.cpp
        Source/Utilites/ConfigurationUtilites.h
        Source/Utilites/GitUtilites.h
        Source/Utilites/JsonUtilites.h
        Source/Utilites/FormattingUtilites.h
)
