#pragma once
/******************************************************************************/
/* File   : EcuabEthIf.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEcuabEthIf_ServiceNvM_Types.hpp"
#include "CfgEcuabEthIf.hpp"
#include "EcuabEthIf_core.hpp"
#include "infEcuabEthIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabEthIf:
      INTERFACES_EXPORTED_ECUABETHIF
      public abstract_module
   ,  public class_EcuabEthIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabEthIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABETHIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABETHIF_CONST,       ECUABETHIF_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABETHIF_CONFIG_DATA, ECUABETHIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABETHIF_CODE) DeInitFunction    (void);
      FUNC(void, ECUABETHIF_CODE) MainFunction      (void);
      ECUABETHIF_CORE_FUNCTIONALITIES

      FUNC(void, ECUABETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ECUABETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ECUABETHIF_CODE) MainFunctionState (void);
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
extern VAR(module_EcuabEthIf, ECUABETHIF_VAR) EcuabEthIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

