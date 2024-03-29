/* ------------------------------------------------------------------
 * Copyright (C) 2008 PacketVideo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */
#ifndef PV_PLAYER_ENGINE_TUNABLES_H_INCLUDED
#define PV_PLAYER_ENGINE_TUNABLES_H_INCLUDED


// Playback position status event unit
// Default
#define PVPLAYERENGINE_CONFIG_PBPOSSTATUSUNIT_DEF PVPPBPOSUNIT_MILLISEC
#define PVPLAYERENGINE_CONFIG_PBPOSSTATUSUNIT_DEF_STRING "PVPPBPOSUNIT_MILLISEC"
// Capability
#define PVPLAYERENGINE_CONFIG_PBPOSSTATUSINTERVAL_CAP_STRING "PVPPBPOSUNIT_MILLISEC;PVPPBPOSUNIT_SEC;PVPPBPOSUNIT_MIN"

// Playback position status event interval in milliseconds
// Default
#define PVPLAYERENGINE_CONFIG_PBPOSSTATUSINTERVAL_DEF 1000
// Min-Max
#define PVPLAYERENGINE_CONFIG_PBPOSSTATUSINTERVAL_MIN 200
#define PVPLAYERENGINE_CONFIG_PBPOSSTATUSINTERVAL_MAX 5000

// End time check interval in milliseconds
// Default
#define PVPLAYERENGINE_CONFIG_ENDTIMECHECKINTERVAL_DEF 1000
// Min-Max
#define PVPLAYERENGINE_CONFIG_ENDTIMECHECKINTERVAL_MIN 200
#define PVPLAYERENGINE_CONFIG_ENDTIMECHECKINTERVAL_MAX 5000

// Seek to sync point when repositioning
#define PVPLAYERENGINE_CONFIG_SEEKTOSYNCPOINT_DEF true

// Always start from the requested begin position when repositioning
#define PVPLAYERENGINE_CONFIG_SKIPTOREQUESTEDPOS_DEF true

// Whether to render skipped data or not when repositioning
#define PVPLAYERENGINE_CONFIG_RENDERSKIPPED_DEF false

// Time window when seeking sync point in milliseconds
// Default
#define PVPLAYERENGINE_CONFIG_SEEKTOSYNCPOINTWINDOW_DEF 0
// Min-Max
#define PVPLAYERENGINE_CONFIG_SEEKTOSYNCPOINTWINDOW_MIN 0
#define PVPLAYERENGINE_CONFIG_SEEKTOSYNCPOINTWINDOW_MAX 300000

// Synchronization margin for media tracks in milliseconds
// Default
#define PVPLAYERENGINE_CONFIG_SYNCMARGIN_EARLY_DEF -200
#define PVPLAYERENGINE_CONFIG_SYNCMARGIN_LATE_DEF 200
// Min-Max
#define PVPLAYERENGINE_CONFIG_SYNCMARGIN_MIN -10000
#define PVPLAYERENGINE_CONFIG_SYNCMARGIN_MAX 10000

// Node command timeout value in milliseconds
// Default
#define PVPLAYERENGINE_CONFIG_NODECMDTIMEOUT_DEF 10000
// Min-Max
#define PVPLAYERENGINE_CONFIG_NODECMDTIMEOUT_MIN 1000
#define PVPLAYERENGINE_CONFIG_NODECMDTIMEOUT_MAX 300000

// Data sink node data queuing timeout value in milliseconds
// Default
#define PVPLAYERENGINE_CONFIG_NODEDATAQUEUINGTIMEOUT_DEF 10000
// Min-Max
#define PVPLAYERENGINE_CONFIG_NODEDATAQUEUINGTIMEOUT_MIN 1000
#define PVPLAYERENGINE_CONFIG_NODEDATAQUEUINGTIMEOUT_MAX 300000

// Product name info string
#define PVPLAYERENGINE_PRODINFO_PRODNAME_STRING "pvPlayer v4.0"
// Part number info string
#define PVPLAYERENGINE_PRODINFO_PARTNUM_STRING "000000"
// HW platform info string
#define PVPLAYERENGINE_PRODINFO_HWPLATFORM_STRING "Unknown"
// SW platform info string
#define PVPLAYERENGINE_PRODINFO_SWPLATFORM_STRING "Unknown"
// Device info string
#define PVPLAYERENGINE_PRODINFO_DEVICE_STRING "Unknown"

// threshold value for difference in sync point and actual
// reposition point in millisec
#define SYNC_POINT_DIFF_THRESHOLD 5*60*1000

// Location of the node registry config file
#define PVPLAYERENGINE_NODE_REGISTRY_CONFIG_PATH "/system/etc/pvplayer.conf"


#endif // PV_PLAYER_ENGINE_TUNABLES_H_INCLUDED

