/******************************************************************************/
/* File   : EthIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgEthIf.hpp"
#include "EthIf_core.hpp"
#include "infEthIf.hpp"

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
      ETHIF_CORE_FUNCTIONALITIES

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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_LOW){
            // check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
            // use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgEthIf;
         }
      }
      else{
#if(STD_ON == EthIf_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EthIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EthIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::DeInitFunction(void){
#if(STD_ON == EthIf_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == EthIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EthIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunction(void){
#if(STD_ON == EthIf_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == EthIf_InitCheck)
   }
   else{
#if(STD_ON == EthIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionRx(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionTx(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::MainFunctionState(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetControllerMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetControllerMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetTransceiverWakeupMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetTransceiverWakeupMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::CheckWakeup(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetPhysAddr(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPhysAddr(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::UpdatePhysAddrFilter(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetPortMacAddr(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetArlTable(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetCtrlIdxList(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetVlanId(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetAndResetMeasurementData(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::StoreConfiguration(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::ResetConfiguration(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetCurrentTime(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::EnableEgressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetEgressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetIngressTimeStamp(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGroupRequestMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::StartAllPorts(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetSwitchMgmtInfo(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetRxMgmtObject(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetTxMgmtObject(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchEnableTimeStamping(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::VerifyConfig(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetForwardingMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetTrcvSignalQuality(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetSwitchPortSignalQuality(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::ClearTrcvSignalQuality(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::ClearSwitchPortSignalQuality(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPhyTestMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPhyLoopbackMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPhyTxMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetCableDiagnosticsResult(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetPhyIdentifier(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetBufWRxParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetBufWTxParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetBufWTxParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetRadioParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetChanRxParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetChanTxParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetChanRxParams(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::ProvideTxBuffer(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::Transmit(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetSwitchPortMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetTransceiverMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetLinkState(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::TransceiverGetLinkState(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetBaudRate(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::TransceiverGetBaudRate(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetDuplxMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::TransceiverGetDuplexMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetCounterValues(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetRxStatus(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetTxStatus(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetTxErrorCounterValues(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetMacLearningMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetSwitchPortIdentifier(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetSwitchIdentifier(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::ReadPortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::WritePortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::DeletePortMirrorConfiguration(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetPortMirrorState(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPortMirrorState(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPortTestMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPortLoopbackMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SetPortTxMode(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::GetPortCableDiagnosticsResult(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::RunPortCableDiagnostic(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::RunCableDiagnostic(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchGetCfgDataRaw(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchGetCfgDataInfo(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::SwitchPortGetMaxFIFOBufferFillLevel(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::CbRxIndication(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::CbTxConfirmation(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::CbCtrlModeIndication(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::CbTrcvModeIndication(void){
}

FUNC(void, ETHIF_CODE) module_EthIf::CbSwitchPortModeIndication(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

