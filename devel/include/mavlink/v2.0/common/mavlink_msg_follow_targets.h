#pragma once
// MESSAGE FOLLOW_TARGETS PACKING

#define MAVLINK_MSG_ID_FOLLOW_TARGETS 229


typedef struct __mavlink_follow_targets_t {
 int32_t lat; /*< [degE7] Latitude (WGS84)*/
 int32_t lon; /*< [degE7] Longitude (WGS84)*/
 float alt; /*< [m] Altitude (MSL)*/
} mavlink_follow_targets_t;

#define MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN 12
#define MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN 12
#define MAVLINK_MSG_ID_229_LEN 12
#define MAVLINK_MSG_ID_229_MIN_LEN 12

#define MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC 49
#define MAVLINK_MSG_ID_229_CRC 49



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FOLLOW_TARGETS { \
    229, \
    "FOLLOW_TARGETS", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_follow_targets_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_follow_targets_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_follow_targets_t, alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FOLLOW_TARGETS { \
    "FOLLOW_TARGETS", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_follow_targets_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_follow_targets_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_follow_targets_t, alt) }, \
         } \
}
#endif

/**
 * @brief Pack a follow_targets message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [m] Altitude (MSL)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_follow_targets_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t lat, int32_t lon, float alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_float(buf, 8, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN);
#else
    mavlink_follow_targets_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FOLLOW_TARGETS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
}

/**
 * @brief Pack a follow_targets message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [m] Altitude (MSL)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_follow_targets_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t lat,int32_t lon,float alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_float(buf, 8, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN);
#else
    mavlink_follow_targets_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FOLLOW_TARGETS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
}

/**
 * @brief Encode a follow_targets struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param follow_targets C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_follow_targets_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_follow_targets_t* follow_targets)
{
    return mavlink_msg_follow_targets_pack(system_id, component_id, msg, follow_targets->lat, follow_targets->lon, follow_targets->alt);
}

/**
 * @brief Encode a follow_targets struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param follow_targets C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_follow_targets_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_follow_targets_t* follow_targets)
{
    return mavlink_msg_follow_targets_pack_chan(system_id, component_id, chan, msg, follow_targets->lat, follow_targets->lon, follow_targets->alt);
}

/**
 * @brief Send a follow_targets message
 * @param chan MAVLink channel to send the message
 *
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @param alt [m] Altitude (MSL)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_follow_targets_send(mavlink_channel_t chan, int32_t lat, int32_t lon, float alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_float(buf, 8, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOLLOW_TARGETS, buf, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
#else
    mavlink_follow_targets_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOLLOW_TARGETS, (const char *)&packet, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
#endif
}

/**
 * @brief Send a follow_targets message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_follow_targets_send_struct(mavlink_channel_t chan, const mavlink_follow_targets_t* follow_targets)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_follow_targets_send(chan, follow_targets->lat, follow_targets->lon, follow_targets->alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOLLOW_TARGETS, (const char *)follow_targets, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_follow_targets_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t lat, int32_t lon, float alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_float(buf, 8, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOLLOW_TARGETS, buf, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
#else
    mavlink_follow_targets_t *packet = (mavlink_follow_targets_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOLLOW_TARGETS, (const char *)packet, MAVLINK_MSG_ID_FOLLOW_TARGETS_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN, MAVLINK_MSG_ID_FOLLOW_TARGETS_CRC);
#endif
}
#endif

#endif

// MESSAGE FOLLOW_TARGETS UNPACKING


/**
 * @brief Get field lat from follow_targets message
 *
 * @return [degE7] Latitude (WGS84)
 */
static inline int32_t mavlink_msg_follow_targets_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from follow_targets message
 *
 * @return [degE7] Longitude (WGS84)
 */
static inline int32_t mavlink_msg_follow_targets_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field alt from follow_targets message
 *
 * @return [m] Altitude (MSL)
 */
static inline float mavlink_msg_follow_targets_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a follow_targets message into a struct
 *
 * @param msg The message to decode
 * @param follow_targets C-struct to decode the message contents into
 */
static inline void mavlink_msg_follow_targets_decode(const mavlink_message_t* msg, mavlink_follow_targets_t* follow_targets)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    follow_targets->lat = mavlink_msg_follow_targets_get_lat(msg);
    follow_targets->lon = mavlink_msg_follow_targets_get_lon(msg);
    follow_targets->alt = mavlink_msg_follow_targets_get_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN? msg->len : MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN;
        memset(follow_targets, 0, MAVLINK_MSG_ID_FOLLOW_TARGETS_LEN);
    memcpy(follow_targets, _MAV_PAYLOAD(msg), len);
#endif
}
