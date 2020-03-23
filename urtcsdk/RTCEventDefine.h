#ifndef _UMEETING_RTCEVENTDEFINE_H_
#define _UMEETING_RTCEVENTDEFINE_H_

const int RTC_EVENT_UCLOUD = 10000;
const int RTC_EVENT_AGORA = 10001;
const int RTC_EVENT_ZEGO = 10002;

const int URTC_EVENT_MSG_BASE = 1024 + 1;
const int URTC_EVENT_MSG_JOINROOM_RSP = URTC_EVENT_MSG_BASE + 1;
const int URTC_EVENT_MSG_LEAVEROOM_RSP = URTC_EVENT_MSG_BASE + 2;
const int URTC_EVENT_MSG_USERJOIN_NOTIFY = URTC_EVENT_MSG_BASE + 3;
const int URTC_EVENT_MSG_REJOINING = URTC_EVENT_MSG_BASE + 4;
const int URTC_EVENT_MSG_ERRORMSG = URTC_EVENT_MSG_BASE + 5;
const int URTC_EVENT_MSG_REMOTEUSERJOIN = URTC_EVENT_MSG_BASE + 6;
const int URTC_EVENT_MSG_REMOTEUSERLEAVE = URTC_EVENT_MSG_BASE + 7;

const int URTC_EVENT_MSG_LOCALPUBLISH_RSP = URTC_EVENT_MSG_BASE + 8;
const int URTC_EVENT_MSG_LOCALUNPUBLISH_RSP = URTC_EVENT_MSG_BASE + 9;
const int URTC_EVENT_MSG_REMOTEPUBLISH = URTC_EVENT_MSG_BASE + 10;
const int URTC_EVENT_MSG_REMOTEUNPUBLISH = URTC_EVENT_MSG_BASE + 11;
const int URTC_EVENT_MSG_REMOTESUB_RSP = URTC_EVENT_MSG_BASE + 12;
const int URTC_EVENT_MSG_REMOTEUNSUBE_RSP = URTC_EVENT_MSG_BASE + 13;
const int URTC_EVENT_MSG_KICKOFF = URTC_EVENT_MSG_BASE + 14;

const int URTC_EVENT_MSG_LOCALSTREAMMUTE_RSP = URTC_EVENT_MSG_BASE + 15;
const int URTC_EVENT_MSG_REMOTESTREAMMUTE_RSP = URTC_EVENT_MSG_BASE + 16;
const int URTC_EVENT_MSG_REMOTETRACKST = URTC_EVENT_MSG_BASE + 17;

const int URTC_EVENT_MSG_REJOINED = URTC_EVENT_MSG_BASE + 18;
const int URTC_EVENT_MSG_REMOTE_AUDIOVOL = URTC_EVENT_MSG_BASE + 19;
const int URTC_EVENT_MSG_LOCAL_AUDIOVOL = URTC_EVENT_MSG_BASE + 20;
const int URTC_EVENT_MSG_REMOTE_ST_UPDATE = URTC_EVENT_MSG_BASE + 21;
const int URTC_EVENT_MSG_LOCAL_ST_UPDATE = URTC_EVENT_MSG_BASE + 22;

const int URTC_EVENT_MSG_ELEC_STARTRECORD = URTC_EVENT_MSG_BASE + 23;
const int URTC_EVENT_MSG_ELEC_STOPRECORD = URTC_EVENT_MSG_BASE + 24;

const int URTC_EVENT_MSG_ONSERVERDIS = URTC_EVENT_MSG_BASE + 25;
const int URTC_EVENT_MSG_DEVICE = URTC_EVENT_MSG_BASE + 26;

const int URTC_EVENT_MSG_NETWORK_QUA = URTC_EVENT_MSG_BASE + 27;

const int URTC_EVENT_MSG_RTMP = URTC_EVENT_MSG_BASE + 28;
const int URTC_EVENT_MSG_END = URTC_EVENT_MSG_BASE + 1000;

#endif
