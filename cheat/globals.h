#pragma once
#include <cstdint>
#include <cstddef>

struct Color
{
	std::uint8_t r{ }, g{ }, b{ };
};

namespace globals
{
	inline std::uintptr_t clientAddress = 0;
	inline std::uintptr_t engineAddress = 0;

	inline bool aimbot = false;
	inline int selected = 0;
	inline float fov = 5.f;
	inline float smooth = 1.f;

	inline bool esp = false;
	inline bool espbox = false;
	inline bool snaplines = false;
	inline float TeamChamsColor[] = { 0, 0, 255 };
	inline bool enemyglow = false;
	inline float enemyglowColor[] = { 1.f, 0.f, 0.f, 1.f };
	inline bool teamglow = false;
	inline float teamglowColor[] = { 1.f, 0.f, 0.f, 1.f };

	inline bool radar = false;
	inline bool bhop = false;
	inline bool noflash = false;
	inline float flash = 0;
	inline int viewfov = 90;
	inline bool usefov = false;
	inline bool thirdperson = false;

	inline bool skinchanger = false;
	inline float skinwear = 0.1f;
	inline bool stattrack = false;
	inline int killcount = 0;
	inline int seed = 0;
	inline bool update = false;
}

namespace hazedumper {
	constexpr ::std::int64_t timestamp = 1651754326;
	namespace netvars {
		constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
		constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
		constexpr ::std::ptrdiff_t m_Collision = 0x320;
		constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
		constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
		constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
		constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31D4;
		constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
		constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
		constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
		constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
		constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
		constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
		constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
		constexpr ::std::ptrdiff_t m_bBombDefused = 0x29C0;
		constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
		constexpr ::std::ptrdiff_t m_bBombTicking = 0x2990;
		constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
		constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
		constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
		constexpr ::std::ptrdiff_t m_bHasHelmet = 0x117C0;
		constexpr ::std::ptrdiff_t m_bInReload = 0x32B5;
		constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
		constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
		constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
		constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
		constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
		constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
		constexpr ::std::ptrdiff_t m_bStartedArming = 0x3400;
		constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
		constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
		constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
		constexpr ::std::ptrdiff_t m_clrRender = 0x70;
		constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
		constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
		constexpr ::std::ptrdiff_t m_fFlags = 0x104;
		constexpr ::std::ptrdiff_t m_flC4Blow = 0x29A0;
		constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
		constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
		constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
		constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29BC;
		constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29B8;
		constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
		constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
		constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
		constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2928;
		constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x9ADC;
		constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D80;
		constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
		constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
		constexpr ::std::ptrdiff_t m_flTimerLength = 0x29A4;
		constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
		constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29C4;
		constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
		constexpr ::std::ptrdiff_t m_hObserverTarget = 0x339C;
		constexpr ::std::ptrdiff_t m_hOwner = 0x29DC;
		constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
		constexpr ::std::ptrdiff_t m_hViewModel = 0x3308;
		constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
		constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
		constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
		constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
		constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
		constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x333C;
		constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
		constexpr ::std::ptrdiff_t m_iFOV = 0x31F4;
		constexpr ::std::ptrdiff_t m_iFOVStart = 0x31F8;
		constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
		constexpr ::std::ptrdiff_t m_iHealth = 0x100;
		constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
		constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
		constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
		constexpr ::std::ptrdiff_t m_iObserverMode = 0x3388;
		constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
		constexpr ::std::ptrdiff_t m_iState = 0x3268;
		constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
		constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
		constexpr ::std::ptrdiff_t m_nBombSite = 0x2994;
		constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
		constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
		constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
		constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
		constexpr ::std::ptrdiff_t m_nTickBase = 0x3440;
		constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29D0;
		constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
		constexpr ::std::ptrdiff_t m_szCustomName = 0x304C;
		constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
		constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31E8;
		constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
		constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
		constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
		constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3030;
		constexpr ::std::ptrdiff_t m_zoomLevel = 0x33E0;
	} // namespace netvars
	namespace signatures {
		constexpr ::std::ptrdiff_t anim_overlays = 0x2990;
		constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
		constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
		constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
		constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
		constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
		constexpr ::std::ptrdiff_t dwClientState = 0x58CFC4;
		constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
		constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
		constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
		constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
		constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
		constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
		constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
		constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
		constexpr ::std::ptrdiff_t dwEntityList = 0x4DD347C;
		constexpr ::std::ptrdiff_t dwForceAttack = 0x3203948;
		constexpr ::std::ptrdiff_t dwForceAttack2 = 0x3203954;
		constexpr ::std::ptrdiff_t dwForceBackward = 0x320399C;
		constexpr ::std::ptrdiff_t dwForceForward = 0x3203990;
		constexpr ::std::ptrdiff_t dwForceJump = 0x527D390;
		constexpr ::std::ptrdiff_t dwForceLeft = 0x32039A8;
		constexpr ::std::ptrdiff_t dwForceRight = 0x32039B4;
		constexpr ::std::ptrdiff_t dwGameDir = 0x62B880;
		constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x52F0BBC;
		constexpr ::std::ptrdiff_t dwGetAllClasses = 0xDE177C;
		constexpr ::std::ptrdiff_t dwGlobalVars = 0x58CCC8;
		constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x531C058;
		constexpr ::std::ptrdiff_t dwInput = 0x5224A50;
		constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x969514;
		constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDB75DC;
		constexpr ::std::ptrdiff_t dwMouseEnable = 0xDBD2E8;
		constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xDBD2B8;
		constexpr ::std::ptrdiff_t dwPlayerResource = 0x3201CE0;
		constexpr ::std::ptrdiff_t dwRadarBase = 0x52081F4;
		constexpr ::std::ptrdiff_t dwSensitivity = 0xDBD184;
		constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xDBD158;
		constexpr ::std::ptrdiff_t dwSetClanTag = 0x8A320;
		constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DC4D94;
		constexpr ::std::ptrdiff_t dwWeaponTable = 0x5225514;
		constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x326C;
		constexpr ::std::ptrdiff_t dwYawPtr = 0xDBCF48;
		constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xDC31B0;
		constexpr ::std::ptrdiff_t dwbSendPackets = 0xD9662;
		constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA5050;
		constexpr ::std::ptrdiff_t find_hud_element = 0x2E675200;
		constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3BB8FA;
		constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
		constexpr ::std::ptrdiff_t is_c4_owner = 0x3C8970;
		constexpr ::std::ptrdiff_t m_bDormant = 0xED;
		constexpr ::std::ptrdiff_t m_flSpawnTime = 0x103C0;
		constexpr ::std::ptrdiff_t m_pStudioHdr = 0x2950;
		constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5208490;
		constexpr ::std::ptrdiff_t m_yawClassPtr = 0xDBCF48;
		constexpr ::std::ptrdiff_t model_ambient_min = 0x59003C;
		constexpr ::std::ptrdiff_t set_abs_angles = 0x1E5570;
		constexpr ::std::ptrdiff_t set_abs_origin = 0x1E53B0;
	} // namespace signatures
} // namespace hazedumper
