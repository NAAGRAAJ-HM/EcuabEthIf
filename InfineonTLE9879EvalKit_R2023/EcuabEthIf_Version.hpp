#pragma once
/******************************************************************************/
/* File   : EcuabEthIf_Version.hpp                                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABETHIF_AR_RELEASE_VERSION_MAJOR                                    4
#define ECUABETHIF_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABETHIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABETHIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABETHIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABETHIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

