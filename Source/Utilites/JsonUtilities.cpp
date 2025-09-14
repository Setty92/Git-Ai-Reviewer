/************************************************************
 * Project: Git-Ai-Reviewer
 * File:    JsonUtilities.cpp
 *
 * Description:
 *   Implementation of utility functions for working with JSON.
 *
 * Author:  Setty92
 * Created: 14.09.2025
 * Updated: 14.09.2025
 ************************************************************/

#include "JsonUtilities.h"
#include <fstream>
#include <iostream>

namespace JsonUtilities {
    nlohmann::json loadJsonFile(const std::string& filepath) {
        std::ifstream file(filepath);
        if (!file.is_open()) {
            // Couldn't open file -> return empty JSON object
            std::cerr << "Failed to open file " << filepath << std::endl;
            return {};
        }

        nlohmann::json json;
        try {
            file >> json; // Parse file content into JSON object
        } catch (const nlohmann::json::parse_error& e) {
            // Couldn't parse file -> return empty JSON object
            std::cerr << "JSON parse error: " << e.what() << std::endl;
            return {};
        }

        return json;
    }

    std::string getStringByKey(const nlohmann::json& json, const std::string& key) {
        // Key exists and is a string -> return string
        if (json.contains(key) && json[key].is_string()) {
            return json[key].get<std::string>();
        }

        // Key doesn't exist -> return empty string
        std::cerr << "Key " << key << " not found" << std::endl;
        return "";
    }
}
