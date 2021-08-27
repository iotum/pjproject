#define PJ_CONFIG_MAXIMUM_SPEED
#include <pj/config_site_sample.h>
#undef PJ_IOQUEUE_MAX_HANDLES
#define PJSUA_SEPARATE_WORKER_FOR_TIMER	1

#define PJMEDIA_HAS_VIDEO   1
#define PJMEDIA_VIDEO_DEV_HAS_FFMPEG   1

#define PJMEDIA_HAS_LEGACY_SOUND_API   0

// Linphone doesn't work well with ssrc in sdp
// #define PJSUA_NO_SSRC_IN_SDP

// Allowed log level
#undef PJ_LOG_MAX_LEVEL
#define PJ_LOG_MAX_LEVEL   4

// Allocate more space for RTCP SDES packets (Linphone uses a quite long name)
#define PJMEDIA_RTCP_RX_SDES_BUF_LEN 128
#define PJMEDIA_VID_STREAM_SKIP_PACKETS_TO_REDUCE_LATENCY 1

#define PJ_ICE_MAX_CAND 32
#define PJ_ICE_MAX_CHECKS (PJ_ICE_MAX_CAND * 16)

// Cisco uses really large INVITE packets
//#define PJSIP_MAX_PKT_LEN   8000
#define PJSIP_MAX_PKT_LEN 12288

// Use our codec list as master
#define PJMEDIA_SDP_NEG_PREFER_REMOTE_CODEC_ORDER       0
// No need for audio AGC
#define PJMEDIA_CONF_USE_AGC                            0
