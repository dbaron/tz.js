#pragma once

#include <string>
#include <ctime>

namespace tzcpp {

    struct ZoneInfo {
        int offset = 0;
        const char* abbr = nullptr;
        bool is_dst = false;

        bool empty() const {
            return abbr == nullptr;
        }
    };

    // Get timezone information from database. If not found returns empty timezone (abbr == nullptr).
    ZoneInfo get_timezone(const std::string&, std::time_t);
    ZoneInfo get_timezone(const char*, std::time_t);

    const char* version();
    const char* data_version();

} // namespace tzcpp
