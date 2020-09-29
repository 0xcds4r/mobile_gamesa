#include "hud.h"

/** TODO: complete that all */

void CHud::Draw() 
{
    ((void(*)(void))(Plugin::getSAAddr() + SA_Memory::ADDR_CHud__Draw + 1))(void);
}

void CHud::DrawAfterFade() {
    ((void(*)(void))(Plugin::getSAAddr() + SA_Memory::ADDR_CHud__DrawAfterFade + 1))(void);
}

void CHud::DrawAreaName() {
    
}

void CHud::DrawBustedWastedMessage() {
    
}

void CHud::DrawCrossHairs() {
    
}

float CHud::DrawFadeState(DRAW_FADE_STATE fadeState, int arg1) {
    
}

void CHud::DrawHelpText() {
    
}

void CHud::DrawMissionTimers() {
    
}

void CHud::DrawMissionTitle() {
    
}

void CHud::DrawOddJobMessage(unsigned char priority) {
    
}

void CHud::DrawRadar() {
    
}

void CHud::DrawScriptText(unsigned char priority) {
    
}

void CHud::DrawSubtitles() {
    
}

void CHud::DrawSuccessFailedMessage() {
    
}

void CHud::DrawVehicleName() {
    
}

void CHud::DrawVitalStats() {
    
}

void CHud::GetRidOfAllHudMessages(unsigned char arg0) {
    
}

float CHud::GetYPosBasedOnHealth(unsigned char playerId, float pos, char offset) {
    
}

bool CHud::HelpMessageDisplayed() {
    
}

void CHud::Initialise() {
    
}

void CHud::ReInitialise() {
    
}

void CHud::ResetWastedText() {
    
}

void CHud::SetBigMessage(char* text, unsigned short style) {
    
}

void CHud::SetHelpMessage(char const* text, bool quickMessage, bool permanent, bool addToBrief) {
    
}

void CHud::SetHelpMessageStatUpdate(unsigned char state, unsigned short statId, float diff, float max) {
    
}

void CHud::SetHelpMessageWithNumber(char const* text, int number, bool quickMessage, bool permanent) {
    
}

void CHud::SetMessage(char* text) {
    
}

void CHud::SetVehicleName(char* name) {
    
}

void CHud::SetZoneName(char* name, unsigned char displayState) {
    
}

void CHud::Shutdown() {
    
}

void CHud::DrawAmmo(CPed* ped, int x, int y, float alpha) {
    
}

void CHud::DrawPlayerInfo() {
    
}

void CHud::DrawTripSkip() {
    
}

void CHud::DrawWanted() {
    
}

void CHud::DrawWeaponIcon(CPed* ped, int x, int y, float alpha) {
    
}

void CHud::RenderArmorBar(int playerId, int x, int y) {
    
}

void CHud::RenderBreathBar(int playerId, int x, int y) {
    
}

void CHud::RenderHealthBar(int playerId, int x, int y) {
    
}