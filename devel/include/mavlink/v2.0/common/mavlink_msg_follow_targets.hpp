// MESSAGE FOLLOW_TARGETS support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief FOLLOW_TARGETS message
 *
 * Follow Target command.
 */
struct FOLLOW_TARGETS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 229;
    static constexpr size_t LENGTH = 12;
    static constexpr size_t MIN_LENGTH = 12;
    static constexpr uint8_t CRC_EXTRA = 49;
    static constexpr auto NAME = "FOLLOW_TARGETS";


    int32_t lat; /*< [degE7] Latitude (WGS84) */
    int32_t lon; /*< [degE7] Longitude (WGS84) */
    float alt; /*< [m] Altitude (MSL) */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  lat: " << lat << std::endl;
        ss << "  lon: " << lon << std::endl;
        ss << "  alt: " << alt << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << lat;                           // offset: 0
        map << lon;                           // offset: 4
        map << alt;                           // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> lat;                           // offset: 0
        map >> lon;                           // offset: 4
        map >> alt;                           // offset: 8
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
