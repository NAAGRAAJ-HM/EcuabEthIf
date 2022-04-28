/******************************************************************************/
/* File   : EthIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EthIf_core.hpp"
#include "infEthIf_EcuM.hpp"
#include "infEthIf_Dcm.hpp"
#include "infEthIf_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ETHIF_AR_RELEASE_VERSION_MAJOR                                         4
#define ETHIF_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ETHIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ETHIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ETHIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ETHIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EthIf:
      public abstract_module
   ,  public class_EthIf_Functionality
{
   public:
      module_EthIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, ETHIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, ETHIF_CONFIG_DATA, ETHIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ETHIF_CODE) DeInitFunction    (void);
      FUNC(void, ETHIF_CODE) MainFunction      (void);

      FUNC(void, ETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionState (void);
};

extern VAR(module_EthIf, ETHIF_VAR) EthIf;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, ETHIF_VAR, ETHIF_CONST) gptrinfEcuMClient_EthIf = &EthIf;
CONSTP2VAR(infDcmClient,  ETHIF_VAR, ETHIF_CONST) gptrinfDcmClient_EthIf  = &EthIf;
CONSTP2VAR(infSchMClient, ETHIF_VAR, ETHIF_CONST) gptrinfSchMClient_EthIf = &EthIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgEthIf.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EthIf, ETHIF_VAR) EthIf(
   {
         ETHIF_AR_RELEASE_VERSION_MAJOR
      ,  ETHIF_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ETHIF_CODE) module_EthIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, ETHIF_CONFIG_DATA, ETHIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EthIf_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == EthIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == EthIf_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgEthIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == EthIf_InitCheck)
   }
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::DeInitFunction(void){
#if(STD_ON == EthIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == EthIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == EthIf_InitCheck)
   }
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunction(void){
#if(STD_ON == EthIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == EthIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == EthIf_InitCheck)
   }
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionRx(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionTx(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetControllerMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetControllerMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetTransceiverWakeupMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetTransceiverWakeupMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::CheckWakeup(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetPhysAddr(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPhysAddr(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::UpdatePhysAddrFilter(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetPortMacAddr(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetArlTable(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetCtrlIdxList(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetVlanId(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetAndResetMeasurementData(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::StoreConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::ResetConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetCurrentTime(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::EnableEgressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetEgressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetIngressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGroupRequestMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::StartAllPorts(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetSwitchMgmtInfo(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetRxMgmtObject(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetTxMgmtObject(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchEnableTimeStamping(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::VerifyConfig(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetForwardingMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetTrcvSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetSwitchPortSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::ClearTrcvSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::ClearSwitchPortSignalQuality(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPhyTestMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPhyLoopbackMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPhyTxMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetCableDiagnosticsResult(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetPhyIdentifier(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetBufWRxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetBufWTxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetBufWTxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetRadioParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetChanRxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetChanTxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetChanRxParams(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::ProvideTxBuffer(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::Transmit(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetSwitchPortMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetTransceiverMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetLinkState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::TransceiverGetLinkState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetBaudRate(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::TransceiverGetBaudRate(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetDuplxMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::TransceiverGetDuplexMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetCounterValues(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetRxStatus(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetTxStatus(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetTxErrorCounterValues(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetMacLearningMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetSwitchPortIdentifier(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetSwitchIdentifier(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::ReadPortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::WritePortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::DeletePortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetPortMirrorState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPortMirrorState(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPortTestMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPortLoopbackMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SetPortTxMode(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::GetPortCableDiagnosticsResult(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::RunPortCableDiagnostic(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::RunCableDiagnostic(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchGetCfgDataRaw(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchGetCfgDataInfo(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::SwitchPortGetMaxFIFOBufferFillLevel(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::CbRxIndication(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::CbTxConfirmation(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::CbCtrlModeIndication(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::CbTrcvModeIndication(void){
}

FUNC(void, ETHIF_CODE) class_EthIf_Functionality::CbSwitchPortModeIndication(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

