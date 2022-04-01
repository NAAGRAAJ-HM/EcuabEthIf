/******************************************************************************/
/* File   : EthIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
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
         0x0000
      ,  0xFFFF
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
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == EthIf_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_EthIf as back-up configuration
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

class class_EthIf_Unused{
   public:
      FUNC(void, ETHIF_CODE) GetControllerMode                   (void);
      FUNC(void, ETHIF_CODE) SetControllerMode                   (void);
      FUNC(void, ETHIF_CODE) GetTransceiverWakeupMode            (void);
      FUNC(void, ETHIF_CODE) SetTransceiverWakeupMode            (void);
      FUNC(void, ETHIF_CODE) CheckWakeup                         (void);
      FUNC(void, ETHIF_CODE) GetPhysAddr                         (void);
      FUNC(void, ETHIF_CODE) SetPhysAddr                         (void);
      FUNC(void, ETHIF_CODE) UpdatePhysAddrFilter                (void);
      FUNC(void, ETHIF_CODE) GetPortMacAddr                      (void);
      FUNC(void, ETHIF_CODE) GetArlTable                         (void);
      FUNC(void, ETHIF_CODE) GetCtrlIdxList                      (void);
      FUNC(void, ETHIF_CODE) GetVlanId                           (void);
      FUNC(void, ETHIF_CODE) GetAndResetMeasurementData          (void);
      FUNC(void, ETHIF_CODE) StoreConfiguration                  (void);
      FUNC(void, ETHIF_CODE) ResetConfiguration                  (void);
      FUNC(void, ETHIF_CODE) GetCurrentTime                      (void);
      FUNC(void, ETHIF_CODE) EnableEgressTimeStamp               (void);
      FUNC(void, ETHIF_CODE) GetEgressTimeStamp                  (void);
      FUNC(void, ETHIF_CODE) GetIngressTimeStamp                 (void);
      FUNC(void, ETHIF_CODE) SwitchPortGroupRequestMode          (void);
      FUNC(void, ETHIF_CODE) StartAllPorts                       (void);
      FUNC(void, ETHIF_CODE) SetSwitchMgmtInfo                   (void);
      FUNC(void, ETHIF_CODE) GetRxMgmtObject                     (void);
      FUNC(void, ETHIF_CODE) GetTxMgmtObject                     (void);
      FUNC(void, ETHIF_CODE) SwitchEnableTimeStamping            (void);
      FUNC(void, ETHIF_CODE) VerifyConfig                        (void);
      FUNC(void, ETHIF_CODE) SetForwardingMode                   (void);
      FUNC(void, ETHIF_CODE) GetTrcvSignalQuality                (void);
      FUNC(void, ETHIF_CODE) GetSwitchPortSignalQuality          (void);
      FUNC(void, ETHIF_CODE) ClearTrcvSignalQuality              (void);
      FUNC(void, ETHIF_CODE) ClearSwitchPortSignalQuality        (void);
      FUNC(void, ETHIF_CODE) SetPhyTestMode                      (void);
      FUNC(void, ETHIF_CODE) SetPhyLoopbackMode                  (void);
      FUNC(void, ETHIF_CODE) SetPhyTxMode                        (void);
      FUNC(void, ETHIF_CODE) GetCableDiagnosticsResult           (void);
      FUNC(void, ETHIF_CODE) GetPhyIdentifier                    (void);
      FUNC(void, ETHIF_CODE) GetBufWRxParams                     (void);
      FUNC(void, ETHIF_CODE) GetBufWTxParams                     (void);
      FUNC(void, ETHIF_CODE) SetBufWTxParams                     (void);
      FUNC(void, ETHIF_CODE) SetRadioParams                      (void);
      FUNC(void, ETHIF_CODE) SetChanRxParams                     (void);
      FUNC(void, ETHIF_CODE) SetChanTxParams                     (void);
      FUNC(void, ETHIF_CODE) GetChanRxParams                     (void);
      FUNC(void, ETHIF_CODE) ProvideTxBuffer                     (void);
      FUNC(void, ETHIF_CODE) Transmit                            (void);
      FUNC(void, ETHIF_CODE) GetSwitchPortMode                   (void);
      FUNC(void, ETHIF_CODE) GetTransceiverMode                  (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetLinkState              (void);
      FUNC(void, ETHIF_CODE) TransceiverGetLinkState             (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetBaudRate               (void);
      FUNC(void, ETHIF_CODE) TransceiverGetBaudRate              (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetDuplxMode              (void);
      FUNC(void, ETHIF_CODE) TransceiverGetDuplexMode            (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetCounterValues          (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetRxStatus               (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetTxStatus               (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetTxErrorCounterValues   (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetMacLearningMode        (void);
      FUNC(void, ETHIF_CODE) GetSwitchPortIdentifier             (void);
      FUNC(void, ETHIF_CODE) GetSwitchIdentifier                 (void);
      FUNC(void, ETHIF_CODE) ReadPortMirrorConfiguration         (void);
      FUNC(void, ETHIF_CODE) WritePortMirrorConfiguration        (void);
      FUNC(void, ETHIF_CODE) DeletePortMirrorConfiguration       (void);
      FUNC(void, ETHIF_CODE) GetPortMirrorState                  (void);
      FUNC(void, ETHIF_CODE) SetPortMirrorState                  (void);
      FUNC(void, ETHIF_CODE) SetPortTestMode                     (void);
      FUNC(void, ETHIF_CODE) SetPortLoopbackMode                 (void);
      FUNC(void, ETHIF_CODE) SetPortTxMode                       (void);
      FUNC(void, ETHIF_CODE) GetPortCableDiagnosticsResult       (void);
      FUNC(void, ETHIF_CODE) RunPortCableDiagnostic              (void);
      FUNC(void, ETHIF_CODE) RunCableDiagnostic                  (void);
      FUNC(void, ETHIF_CODE) SwitchGetCfgDataRaw                 (void);
      FUNC(void, ETHIF_CODE) SwitchGetCfgDataInfo                (void);
      FUNC(void, ETHIF_CODE) SwitchPortGetMaxFIFOBufferFillLevel (void);
      FUNC(void, ETHIF_CODE) CbRxIndication                      (void);
      FUNC(void, ETHIF_CODE) CbTxConfirmation                    (void);
      FUNC(void, ETHIF_CODE) CbCtrlModeIndication                (void);
      FUNC(void, ETHIF_CODE) CbTrcvModeIndication                (void);
      FUNC(void, ETHIF_CODE) CbSwitchPortModeIndication          (void);
};

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

