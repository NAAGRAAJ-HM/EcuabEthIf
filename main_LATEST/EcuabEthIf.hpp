#pragma once
/******************************************************************************/
/* File   : EcuabEthIf.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabEthIf.hpp"
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
      INTERFACES_EXPORTED_ETHIF
      public abstract_module
   ,  public class_EcuabEthIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabEthIf_Type* lptrConst = (ConstEcuabEthIf_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabEthIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ETHIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ETHIF_CONST,       ETHIF_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ETHIF_CONFIG_DATA, ETHIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ETHIF_CODE) DeInitFunction    (void);
      FUNC(void, ETHIF_CODE) MainFunction      (void);
      ETHIF_CORE_FUNCTIONALITIES

      FUNC(void, ETHIF_CODE) MainFunctionRx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionTx    (void);
      FUNC(void, ETHIF_CODE) MainFunctionState (void);
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
extern VAR(module_EcuabEthIf, ETHIF_VAR) EcuabEthIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

