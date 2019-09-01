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
    ZoneInfo get_timezone(const std::string&, int64_t);
    ZoneInfo get_timezone(const char*, int64_t);

    const char* version();
    const char* data_version();

    int64_t from_utc(const std::string&, int64_t);
    int64_t from_utc(const char*, int64_t);

    int64_t from_local(const std::string&, int64_t);
    int64_t from_local(const char*, int64_t);

    bool has_timezone(const std::string&);
    bool has_timezone(const char*);

} // namespace tzcpp
