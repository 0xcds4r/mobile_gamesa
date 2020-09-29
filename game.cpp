#include "game.h"

bool CGameSA::CanSeeOutSideFromCurrArea() 
{
    return ((bool(*)(void))(Plugin::getSAAddr() + SA_Memory::ADDR_CGameSA__CanSeeOutSideFromCurrArea + 1))(void);
}

/** TODO: complete that */
bool CGameSA::CanSeeWaterFromCurrArea() {

}

void CGameSA::DrasticTidyUpMemory(bool a1) {

}

void CGameSA::FinalShutdown() {
    
}

void CGameSA::GenerateTempPedAtStartOfNetworkGame() {
    
}

bool CGameSA::Init1(char const *datFile) {
    
}

bool CGameSA::Init2(char const *datFile) {
   
}

bool CGameSA::Init3(char const *datFile) {
    
}

void CGameSA::InitAfterLostFocus() {
   
}

bool CGameSA::Initialise(char const *datFile) {
    
}

bool CGameSA::InitialiseCoreDataAfterRW() {
    
}

bool CGameSA::InitialiseEssentialsAfterRW() {
    
}

bool CGameSA::InitialiseOnceBeforeRW() {
    
}

bool CGameSA::InitialiseRenderWare() {
    
}

void CGameSA::InitialiseWhenRestarting() {

}

void CGameSA::Process() {
    
}

void CGameSA::ReInitGameObjectVariables() {
    
}

void CGameSA::ReloadIPLs() {
    
}

void CGameSA::ShutDownForRestart() {
    
}

bool CGameSA::Shutdown() {
    
}

void CGameSA::ShutdownRenderWare() {
    
}

void CGameSA::TidyUpMemory(bool a1, bool clearD3Dmem) {
    
}