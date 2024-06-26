
#ifndef NOT_READY_FOR_TESTING_OR_DEPLOYMENT
#error The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#endif

#define MEMMAP_ERROR

#if defined RBA_DIAGLIB_START_SEC_RAM_CLEARED
   #if defined RBA_DIAGLIB_WAS_STARTED_SEC_RAM_CLEARED
      #error RBA_DIAGLIB_WAS_STARTED_SEC_RAM_CLEARED already defined
   #endif
   #define BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_START_SEC_RAM_CLEARED
   #define RBA_DIAGLIB_WAS_STARTED_SEC_RAM_CLEARED

#elif defined RBA_DIAGLIB_STOP_SEC_RAM_CLEARED
   #if ! defined RBA_DIAGLIB_WAS_STARTED_SEC_RAM_CLEARED
      #error RBA_DIAGLIB_STOP_SEC_RAM_CLEARED without START_SEC
   #else
      #undef RBA_DIAGLIB_WAS_STARTED_SEC_RAM_CLEARED
   #endif
   #define BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_STOP_SEC_RAM_CLEARED

#elif defined RBA_DIAGLIB_START_SEC_RAM_INIT
   #if defined RBA_DIAGLIB_WAS_STARTED_SEC_RAM_INIT
      #error RBA_DIAGLIB_WAS_STARTED_SEC_RAM_INIT already defined
   #endif
   #define BSW_START_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_START_SEC_RAM_INIT
   #define RBA_DIAGLIB_WAS_STARTED_SEC_RAM_INIT

#elif defined RBA_DIAGLIB_STOP_SEC_RAM_INIT
   #if ! defined RBA_DIAGLIB_WAS_STARTED_SEC_RAM_INIT
      #error RBA_DIAGLIB_STOP_SEC_RAM_INIT without START_SEC
   #else
      #undef RBA_DIAGLIB_WAS_STARTED_SEC_RAM_INIT
   #endif
   #define BSW_STOP_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_RAM0_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_STOP_SEC_RAM_INIT

#elif defined RBA_DIAGLIB_START_SEC_ROM_CONST
   #if defined RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CONST
      #error RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CONST already defined
   #endif
   #define BSW_START_SEC_DEFAULT_CONST_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_START_SEC_ROM_CONST
   #define RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CONST

#elif defined RBA_DIAGLIB_STOP_SEC_ROM_CONST
   #if ! defined RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CONST
      #error RBA_DIAGLIB_STOP_SEC_ROM_CONST without START_SEC
   #else
      #undef RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CONST
   #endif
   #define BSW_STOP_SEC_DEFAULT_CONST_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_STOP_SEC_ROM_CONST

#elif defined RBA_DIAGLIB_START_SEC_ROM_CODE
   #if defined RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CODE
      #error RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CODE already defined
   #endif
   #define BSW_START_SEC_DEFAULT_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_DEFAULT_CODE
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_START_SEC_ROM_CODE
   #define RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CODE

#elif defined RBA_DIAGLIB_STOP_SEC_ROM_CODE
   #if ! defined RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CODE
      #error RBA_DIAGLIB_STOP_SEC_ROM_CODE without START_SEC
   #else
      #undef RBA_DIAGLIB_WAS_STARTED_SEC_ROM_CODE
   #endif
   #define BSW_STOP_SEC_DEFAULT_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_DEFAULT_CODE
    #undef MEMMAP_ERROR
   #undef RBA_DIAGLIB_STOP_SEC_ROM_CODE

#elif defined RBA_DIAGLIB_START_SEC_SAVED_ZONE
#if defined RBA_DIAGLIB_WAS_STARTED_SEC_SAVED_ZONE
        #error RBA_DIAGLIB_WAS_STARTED_SEC_SAVED_ZONE already defined
#endif
#define BSW_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #undef MEMMAP_ERROR
    #undef RBA_DIAGLIB_START_SEC_SAVED_ZONE
#define RBA_DIAGLIB_WAS_STARTED_SEC_SAVED_ZONE

#elif defined RBA_DIAGLIB_STOP_SEC_SAVED_ZONE
#if ! defined RBA_DIAGLIB_WAS_STARTED_SEC_SAVED_ZONE
        #error RBA_DIAGLIB_STOP_SEC_SAVED_ZONE without START_SEC
#else
        #undef RBA_DIAGLIB_WAS_STARTED_SEC_SAVED_ZONE
#endif
#define BSW_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #undef MEMMAP_ERROR
    #undef RBA_DIAGLIB_STOP_SEC_SAVED_ZONE

#elif defined RBA_DIAGLIB_START_SEC_CODE
#if defined rba_DiagLib_WAS_STARTED_SEC_CODE
        #error rba_DiagLib_WAS_STARTED_SEC_CODE already defined
#endif
#define BSW_START_SEC_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_CODE
    #undef RBA_DIAGLIB_MEMMAP_ERROR
    #undef RBA_DIAGLIB_START_SEC_CODE
#define rba_DiagLib_WAS_STARTED_SEC_CODE

#elif defined RBA_DIAGLIB_STOP_SEC_CODE
#if ! defined rba_DiagLib_WAS_STARTED_SEC_CODE
        #error rba_DiagLib_WAS_STARTED_SEC_CODE without START_SEC
#else
        #undef rba_DiagLib_WAS_STARTED_SEC_CODE
#endif
#define BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_CODE
    #undef RBA_DIAGLIB_MEMMAP_ERROR
    #undef RBA_DIAGLIB_STOP_SEC_CODE

#elif defined rba_DiagLib_START_SEC_CODE
#if defined rba_DiagLib_WAS_STARTED_SEC_CODE
        #error rba_DiagLib_WAS_STARTED_SEC_CODE already defined
#endif
#define BSW_START_SEC_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_START_SEC_CODE
    #undef RBA_DIAGLIB_MEMMAP_ERROR
    #undef rba_DiagLib_START_SEC_CODE
#define rba_DiagLib_WAS_STARTED_SEC_CODE

#elif defined rba_DiagLib_STOP_SEC_CODE
#if ! defined rba_DiagLib_WAS_STARTED_SEC_CODE
        #error rba_DiagLib_WAS_STARTED_SEC_CODE without START_SEC
#else
        #undef rba_DiagLib_WAS_STARTED_SEC_CODE
#endif
#define BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.hpp"
    #undef BSW_STOP_SEC_CODE
    #undef RBA_DIAGLIB_MEMMAP_ERROR
    #undef rba_DiagLib_STOP_SEC_CODE

#elif defined MEMMAP_ERROR
    #error "rba_DiagLib_MemMap.h, wrong #pragma command"
#endif
