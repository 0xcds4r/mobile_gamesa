#pragma once

#include "plugin.h"

enum DRAW_FADE_STATE {

};

enum eHudSprites {
    HUDSPRITE_FIST,
    HUDSPRITE_SITEM16,
    HUDSPRITE_SITEROCKET,
    HUDSPRITE_RADARDISC,
    HUDSPRITE_RADARRINGPLANE,
    HUDSPRITE_SKIPICON
};

class CHudSA {
public:
    static void Draw(); 
    static void DrawAfterFade();
    static void DrawAreaName();
    static void DrawBustedWastedMessage();
    static void DrawCrossHairs();
    static float DrawFadeState(DRAW_FADE_STATE fadeState, int arg1);
    static void DrawHelpText();
    static void DrawMissionTimers();
    static void DrawMissionTitle();
    static void DrawOddJobMessage(unsigned char priority);
    static void DrawRadar();
    static void DrawScriptText(unsigned char priority);
    static void DrawSubtitles();
    static void DrawSuccessFailedMessage();
    static void DrawVehicleName();
    static void DrawVitalStats();
    static void GetRidOfAllHudMessages(unsigned char arg0);
    static float GetYPosBasedOnHealth(unsigned char playerId, float pos, char offset);
    static bool HelpMessageDisplayed();
    static void Initialise();
    static void ReInitialise();
    static void ResetWastedText();
    static void SetBigMessage(char* text, unsigned short style);
    static void SetHelpMessage(char const* text, bool quickMessage, bool permanent, bool addToBrief);
    static void SetHelpMessageStatUpdate(unsigned char state, unsigned short statId, float diff, float max); 
    static void SetHelpMessageWithNumber(char const* text, int number, bool quickMessage, bool permanent);
    static void SetMessage(char* text);
    static void SetVehicleName(char* name);
    static void SetZoneName(char* name, unsigned char displayState);
    static void Shutdown();
    static void DrawAmmo(CPed* ped, int x, int y, float alpha);
    static void DrawPlayerInfo();
    static void DrawTripSkip();
    static void DrawWanted();
    static void DrawWeaponIcon(CPed* ped, int x, int y, float alpha);
    static void RenderArmorBar(int playerId, int x, int y);
    static void RenderBreathBar(int playerId, int x, int y);
    static void RenderHealthBar(int playerId, int x, int y);
};