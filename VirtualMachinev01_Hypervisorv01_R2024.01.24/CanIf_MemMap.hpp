#define ECUABIFCAN_CODE                                                  /*TBD*/
#define ECUABIFCAN_CODE_CB                                               /*TBD*/
#define ECUABIFCAN_CODE_FAST                                             /*TBD*/
#define ECUABIFCAN_CODE_SLOW                                             /*TBD*/
#define ECUABIFCAN_CONST                                                 /*TBD*/
#define ECUABIFCAN_CALIB                                                 /*TBD*/
#define ECUABIFCAN_CONFIG_DATA                                           /*TBD*/
#define ECUABIFCAN_CONST_SAVED_RECOVERY_ZONE                             /*TBD*/
#define ECUABIFCAN_APPL_DATA                                             /*TBD*/
#define ECUABIFCAN_APPL_CONST                                            /*TBD*/
#define ECUABIFCAN_VAR                                                   /*TBD*/
#define ECUABIFCAN_VAR_FAST                                              /*TBD*/
#define ECUABIFCAN_VAR_SLOW                                              /*TBD*/
#define ECUABIFCAN_INTERNAL_VAR                                          /*TBD*/
#define ECUABIFCAN_VAR_SAVED_ZONE                                        /*TBD*/

#ifndef NOT_READY_FOR_TESTING_OR_DEPLOYMENT
#error The content of this file is a template which provides empty stubs. The content of this file must be completed by the integrator accordingly to project specific requirements
#endif

#define MEMMAP_ERROR

#if( CANIF_VARIANT_INFO == 1)
# if defined CANIF_START_SEC_CONFIG_DATA_POSTBUILD_32
#  undef CANIF_START_SEC_CONFIG_DATA_POSTBUILD_32
#  define CANIF_START_SEC_CONST_32
# elif defined CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_32
#  undef  CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_32
#  define CANIF_STOP_SEC_CONST_32

# elif defined CANIF_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#  undef CANIF_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#  define CANIF_START_SEC_CONST_UNSPECIFIED
# elif defined CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#  undef  CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#  define CANIF_STOP_SEC_CONST_UNSPECIFIED

# elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_8
#  undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_8
#  define CANIF_START_SEC_VAR_CLEARED_8
# elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_8
#  undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_8
#  define CANIF_STOP_SEC_VAR_CLEARED_8

# elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_16
#  undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_16
#  define CANIF_START_SEC_VAR_CLEARED_16
# elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_16
#  undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_16
#  define CANIF_STOP_SEC_VAR_CLEARED_16

# elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_32
#  undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_32
#  define CANIF_START_SEC_VAR_CLEARED_32
# elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_32
#  undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_32
#  define CANIF_STOP_SEC_VAR_CLEARED_32

# elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
#  undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
#  define CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
# elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
#  undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
#  define CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
# endif

# endif

#if defined CANIF_START_SEC_CONST_BOOLEAN
#define BSW_START_SEC_CONST_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_CONST_BOOLEAN
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_CONST_BOOLEAN
#define BSW_STOP_SEC_CONST_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_CONST_BOOLEAN
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_CONST_8
#define BSW_START_SEC_CONST_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_CONST_8
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_CONST_8
#define BSW_STOP_SEC_CONST_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_CONST_8
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_CONST_UNSPECIFIED
#define BSW_START_SEC_CONST_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_CONST_UNSPECIFIED
#define BSW_STOP_SEC_CONST_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR
#elif defined CANIF_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#define BSW_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#define BSW_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_BOOLEAN

#define BSW_START_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_BOOLEAN
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_BOOLEAN
#define BSW_STOP_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_BOOLEAN
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_BOOLEAN

#define BSW_START_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_BOOLEAN
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_BOOLEAN
#define BSW_STOP_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_BOOLEAN
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_8

#define BSW_START_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_8
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_8
#define BSW_STOP_SEC_VAR_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_8
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_8

#define BSW_START_SEC_VAR_CLEARED_POSTBUILD_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_8
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_8
#define BSW_STOP_SEC_VAR_CLEARED_POSTBUILD_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_8
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_32

#define BSW_START_SEC_VAR_CLEARED_POSTBUILD_32
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_32
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_32
#define BSW_STOP_SEC_VAR_CLEARED_POSTBUILD_32
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_32
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_32

#define BSW_START_SEC_VAR_CLEARED_32
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_32
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_32
#define BSW_STOP_SEC_VAR_CLEARED_32
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_32
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED

#define BSW_START_SEC_VAR_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#define BSW_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED

#define BSW_START_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
#define BSW_STOP_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_CLEARED_POSTBUILD_UNSPECIFIED
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_VAR_FAST_CLEARED_8
#define BSW_START_SEC_VAR_FAST_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_FAST_CLEARED_8
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_FAST_CLEARED_8
#define BSW_STOP_SEC_VAR_FAST_CLEARED_8
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_FAST_CLEARED_8
    #undef MEMMAP_ERROR
#elif defined CANIF_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
#define BSW_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
#define BSW_STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_VAR_FAST_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR

#elif defined CANIF_START_SEC_CODE
#define BSW_START_SEC_CODE
    #include "Bsw_MemMap.hpp"
    #undef CANIF_START_SEC_CODE
    #undef MEMMAP_ERROR
#elif defined CANIF_STOP_SEC_CODE
#define BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.hpp"
    #undef CANIF_STOP_SEC_CODE
    #undef MEMMAP_ERROR

#elif defined (CANIF_START_SEC_CODE_FAST)
#define BSW_START_SEC_CODE_FAST
  #include "Bsw_MemMap.hpp"
  #undef CANIF_START_SEC_CODE_FAST
  #undef MEMMAP_ERROR
#elif defined (CANIF_STOP_SEC_CODE_FAST)
#define BSW_STOP_SEC_CODE_FAST
  #include "Bsw_MemMap.hpp"
  #undef CANIF_STOP_SEC_CODE_FAST
  #undef MEMMAP_ERROR

#elif defined MEMMAP_ERROR
    #error "CANIF_MemMap.h, wrong #pragma command"
#endif

