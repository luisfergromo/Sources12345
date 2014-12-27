/****************************************************************************************************/
/**
\file       cnf_emul_eeprom.c
\brief      Configuration of emulated EEPROM services
\author     Abraham Tezmol
\version    1.0
\date       5/11/2013
*/
/****************************************************************************************************/

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Configuration of Emulated EEPROM */
#include    "cnf_emul_eeprom.h"

/*****************************************************************************************************
* Definition of  VARIABLEs - 
*****************************************************************************************************/

/* Dynamic memory allocation configuration for NEAR memory */
const tEmulEEPROM_config EEEPROM_config[] =
{
    {
        (UINT32)&sNVM_Data.gu16DataFlashReservedValue,
        ACTIVE_SECTOR_VALUE,
        (UINT32)&sNVM_Data, 
        (tu8ptr_far)&sNVM_Data_ROM, 
        sizeof(sNVM_Data),
        ASW_WITH_BOOT
    }
};

/*****************************************************************************************************
* Definition of module wide (CONST-) CONSTANTs 
*****************************************************************************************************/

/*****************************************************************************************************
* Code of module wide private FUNCTIONS
*****************************************************************************************************/


/*****************************************************************************************************
* Code of public FUNCTIONS
*****************************************************************************************************/


/***************************************************************************************************/