#ifndef __URL_MON_COMPAT_H_INCLUDED__
#define __URL_MON_COMPAT_H_INCLUDED__

#ifndef SET_FEATURE_ON_THREAD

const DWORD SET_FEATURE_ON_THREAD = 0x00000001;
const DWORD SET_FEATURE_ON_PROCESS = 0x00000002;
const DWORD SET_FEATURE_IN_REGISTRY = 0x00000004;
const DWORD SET_FEATURE_ON_THREAD_LOCALMACHINE = 0x00000008;
const DWORD SET_FEATURE_ON_THREAD_INTRANET = 0x00000010;
const DWORD SET_FEATURE_ON_THREAD_TRUSTED = 0x00000020;
const DWORD SET_FEATURE_ON_THREAD_INTERNET = 0x00000040;
const DWORD SET_FEATURE_ON_THREAD_RESTRICTED = 0x00000080;

enum INTERNETFEATURELIST {
	FEATURE_OBJECT_CACHING = 0,
	FEATURE_ZONE_ELEVATION = 1,
	FEATURE_MIME_HANDLING = 2,
	FEATURE_MIME_SNIFFING = 3,
	FEATURE_WINDOW_RESTRICTIONS = 4,
	FEATURE_WEBOC_POPUPMANAGEMENT = 5,
	FEATURE_BEHAVIORS = 6,
	FEATURE_DISABLE_MK_PROTOCOL = 7,
	FEATURE_LOCALMACHINE_LOCKDOWN = 8,
	FEATURE_SECURITYBAND = 9,
	FEATURE_RESTRICT_ACTIVEXINSTALL = 10,
	FEATURE_VALIDATE_NAVIGATE_URL = 11,
	FEATURE_RESTRICT_FILEDOWNLOAD = 12,
	FEATURE_ADDON_MANAGEMENT = 13,
	FEATURE_PROTOCOL_LOCKDOWN = 14,
	FEATURE_HTTP_USERNAME_PASSWORD_DISABLE = 15,
	FEATURE_SAFE_BINDTOOBJECT = 16,
	FEATURE_UNC_SAVEDFILECHECK = 17,
	FEATURE_GET_URL_DOM_FILEPATH_UNENCODED = 18,
	FEATURE_ENTRY_COUNT = 19,
};

#endif

typedef HRESULT (WINAPI *PCoInternetSetFeatureEnabled)(INTERNETFEATURELIST, DWORD, BOOL);

#endif
