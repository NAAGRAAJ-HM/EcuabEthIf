#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_EthIf.h"

class class_EthIf{
   public:
      FUNC(void, ETHIF_CODE) InitFunction(void);
};

extern class_EthIf EthIf;

