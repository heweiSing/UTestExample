
#ifndef LS_PORTABLE_H
#define LS_PORTABLE_H 1

/*******************************************************************************/
/* Variables Type ReDefines													   */                                      
/*******************************************************************************/
typedef		unsigned char  	LS_U08;
typedef		char           	LS_S08;
typedef		unsigned short 	LS_U16;
typedef		short          	LS_S16;
typedef		unsigned long  	LS_U32;
typedef		long           	LS_S32;
typedef		LS_U08         	LS_BYTE;
typedef		unsigned char  	LS_BOOL;

/*******************************************************************************/
/* Portable Public Define													   */                              
/*******************************************************************************/
#define 	LS_CLEAR 		0
#define 	LS_TRUE  		1
#define 	LS_FALSE 		0
#define 	LS_ON    		1
#define 	LS_OFF   		0
#define 	LS_HIGH  		1
#define 	LS_LOW   		0
#define		LS_START		1
#define		LS_STOP			0
#define		LS_ADD			1
#define		LS_SUBTRACT		0
#define		LS_BYPASS		0
#define		LS_RX			1
#define		LS_TX			0
#define		LS_OK			1
#define		LS_NG			0


/* Added for IoHwAb */
typedef LS_U08 Std_ReturnType;
typedef LS_U08 IoHwAb_LevelType;

typedef struct {
  LS_U08 quality;  
} IoHwAb_StatusType;


typedef LS_U16 IoHwAb_AnalogValueType;

#define E_OK 					0u
#define E_NOT_OK 				(Std_ReturnType)1u

#define E_NO_DTC_AVAILABLE		(Std_ReturnType)2u
#define E_SESSION_NOT_ALLOWED	(Std_ReturnType)4u
#define E_PROTOCOL_NOT_ALLOWED	(Std_ReturnType)5u
#define E_REQUEST_NOT_ACCEPTED	(Std_ReturnType)8u
#define E_REQUEST_ENV_NOK		(Std_ReturnType)9u
#define E_PENDING				(Std_ReturnType)10u
#define E_COMPARE_KEY_FAILED	(Std_ReturnType)11u
#define E_FORCE_RCRRP			(Std_ReturnType)12u

#define STD_HIGH		0x01u
#define STD_LOW			0x00u

#define STD_ACTIVE		0x01u
#define STD_IDLE		0x00u

#define STD_ON			0x01u
#define STD_OFF			0x00u

#endif
