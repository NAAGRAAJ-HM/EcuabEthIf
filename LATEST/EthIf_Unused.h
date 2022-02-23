#pragma once
/*****************************************************/
/* File   : EthIf_Unused.h                           */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_EthIf.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_EthIf_Unused{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
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
      FUNC(void, ETHIF_CODE) GetVersionInfo                      (void);
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

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
//extern class_EthIf EthIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

