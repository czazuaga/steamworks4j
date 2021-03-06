#pragma once

#include "SteamCallbackAdapter.h"
#include <steam_gameserver.h>

class SteamGameServerCallback : public SteamCallbackAdapter {

public:
	SteamGameServerCallback(JNIEnv* env, jobject callback);
	~SteamGameServerCallback();

	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onValidateAuthTicketResponse, ValidateAuthTicketResponse_t, m_CallbackValidateAuthTicket);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onSteamServersConnected, SteamServersConnected_t, m_CallbackSteamServersConnected);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onSteamServerConnectFailure, SteamServerConnectFailure_t, m_CallbackSteamServerConnectFailure);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onSteamServersDisconnected, SteamServersDisconnected_t, m_CallbackSteamServersDisconnected);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onClientApprove, GSClientApprove_t, m_CallbackClientApprove);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onClientDeny, GSClientDeny_t, m_CallbackClientDeny);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onClientKick, GSClientKick_t, m_CallbackClientKick);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onClientGroupStatus, GSClientGroupStatus_t, m_CallbackClientGroupStatus);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onAssociateWithClanResult, AssociateWithClanResult_t, m_CallbackAssociateWithClanResult);
	STEAM_GAMESERVER_CALLBACK(SteamGameServerCallback, onComputeNewPlayerCompatibilityResult, ComputeNewPlayerCompatibilityResult_t, m_CallbackComputeNewPlayerCompatibilityResult);
};
