/************************************************************
 * Project: Git-Ai-Reviewer
 * File:    JsonUtilities.h
 *
 * Description:
 *   Declarations of utility functions for working with JSON.
 *
 * Author:  Setty92
 * Created: 14.09.2025
 * Updated: 14.09.2025
 ************************************************************/

#ifndef GIT_AI_REVIEWER_JSONUTILITIES_H
#define GIT_AI_REVIEWER_JSONUTILITIES_H

#include <string>
#include <nlohmann/json.hpp>

namespace JsonUtilities {
    /**
     * @brief Loads a JSON file from disk.
     *
     * Reads the content of the specified file and parses it into
     * a nlohmann::json object.
     * If the file cannot be opened or parsing fails,
     * an empty json object is returned.
     *
     * @param filepath Path to the JSON file.
     * @return Parsed nlohmann::json object.
     */
    nlohmann::json loadJsonFile(const std::string& filepath);

    /**
     * @brief Retrieves a string value by key from a JSON object.
     *
     * If the key exists and the value is a string, the string is returned.
     * If the key does not exist or the value has a different type,
     * an empty string is returned.
     *
     * @param j JSON object to search in.
     * @param key The key to look up.
     * @return String value for the given key, or an empty string.
     */
    std::string getStringByKey(const nlohmann::json& j, const std::string& key);
}

#endif //GIT_AI_REVIEWER_JSONUTILITIES_H