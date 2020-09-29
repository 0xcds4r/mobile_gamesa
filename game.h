#pragma once

#include "plugin.h"

class CGameSA 
{
public:
    static bool CanSeeOutSideFromCurrArea();
    static bool CanSeeWaterFromCurrArea();
    static void DrasticTidyUpMemory(bool a1);
    static void FinalShutdown();
    static void GenerateTempPedAtStartOfNetworkGame();
    static bool Init1(char const *datFile);
    static bool Init2(char const *datFile);
    static bool Init3(char const *datFile);
    static void InitAfterLostFocus();
    static bool Initialise(char const *datFile);
    static bool InitialiseCoreDataAfterRW();
    static bool InitialiseEssentialsAfterRW();
    static bool InitialiseOnceBeforeRW();
    static bool InitialiseRenderWare();
    static void InitialiseWhenRestarting();
    static void Process();
    static void ReInitGameObjectVariables();
    static void ReloadIPLs();
    static void ShutDownForRestart();
    static bool Shutdown();
    static void ShutdownRenderWare();
    static void TidyUpMemory(bool a1, bool clearD3Dmem);
};