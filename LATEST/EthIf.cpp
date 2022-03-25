/******************************************************************************/
/* File   : EthIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgEthIf.hpp"
#include "infEthIf_EcuM.hpp"
#include "infEthIf_Dcm.hpp"
#include "infEthIf_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ETHIF_AR_RELEASE_MAJOR_VERSION                                         4
#define ETHIF_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ETHIF_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible ETHIF_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(ETHIF_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible ETHIF_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EthIf:
      public abstract_module
{
   public:
      FUNC(void, ETHIF_CODE) InitFunction      (void);
      FUNC(void, ETHIF_CODE) DeInitFunction    (void);
      FUNC(void, ETHIF_CODE) GetVersionInfo    (void);
      FUNC(void, ETHIF_CODE) MainFunction      (void);
      FUNC(void, ETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionState (void);

   private:
      CONST(Std_TypeVersionInfo, ETHIF_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EthIf, ETHIF_VAR) EthIf;
CONSTP2VAR(infEcuMClient, ETHIF_VAR, ETHIF_CONST) gptrinfEcuMClient_EthIf = &EthIf;
CONSTP2VAR(infDcmClient,  ETHIF_VAR, ETHIF_CONST) gptrinfDcmClient_EthIf  = &EthIf;
CONSTP2VAR(infSchMClient, ETHIF_VAR, ETHIF_CONST) gptrinfSchMClient_EthIf = &EthIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ETHIF_CODE) module_EthIf::InitFunction(void){
   EthIf.IsInitDone = E_OK;
}

FUNC(void, ETHIF_CODE) module_EthIf::DeInitFunction(void){
   EthIf.IsInitDone = E_NOT_OK;
}

FUNC(void, ETHIF_CODE) module_EthIf::GetVersionInfo(void){
#if(STD_ON == EthIf_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunction(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionRx(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionTx(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionState(void){
}

#include "EthIf_Unused.hpp"

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetControllerMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetControllerMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetTransceiverWakeupMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetTransceiverWakeupMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::CheckWakeup(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetPhysAddr(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPhysAddr(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::UpdatePhysAddrFilter(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetPortMacAddr(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetArlTable(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetCtrlIdxList(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetVlanId(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetAndResetMeasurementData(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::StoreConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::ResetConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetCurrentTime(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::EnableEgressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetEgressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetIngressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGroupRequestMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::StartAllPorts(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetSwitchMgmtInfo(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetRxMgmtObject(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetTxMgmtObject(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchEnableTimeStamping(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::VerifyConfig(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetForwardingMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetTrcvSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetSwitchPortSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::ClearTrcvSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::ClearSwitchPortSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPhyTestMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPhyLoopbackMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPhyTxMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetCableDiagnosticsResult(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetPhyIdentifier(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetBufWRxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetBufWTxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetBufWTxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetRadioParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetChanRxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetChanTxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetChanRxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::ProvideTxBuffer(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::Transmit(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetSwitchPortMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetTransceiverMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetLinkState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::TransceiverGetLinkState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetBaudRate(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::TransceiverGetBaudRate(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetDuplxMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::TransceiverGetDuplexMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetCounterValues(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetRxStatus(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetTxStatus(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetTxErrorCounterValues(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetMacLearningMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetSwitchPortIdentifier(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetSwitchIdentifier(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::ReadPortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::WritePortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::DeletePortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetPortMirrorState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPortMirrorState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPortTestMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPortLoopbackMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SetPortTxMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::GetPortCableDiagnosticsResult(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::RunPortCableDiagnostic(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::RunCableDiagnostic(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchGetCfgDataRaw(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchGetCfgDataInfo(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::SwitchPortGetMaxFIFOBufferFillLevel(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::CbRxIndication(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::CbTxConfirmation(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::CbCtrlModeIndication(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::CbTrcvModeIndication(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Unused::CbSwitchPortModeIndication(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

