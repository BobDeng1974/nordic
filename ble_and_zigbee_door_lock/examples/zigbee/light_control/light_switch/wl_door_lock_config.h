
/********************************* WULIAN DOOR LOOK CONFIGURATION*************************/

#ifndef WL_DOOR_LOCK_CONFIG_H
#define WL_DOOR_LOCK_CONFIG_H

#include "zboss_api.h"
#include "stdint.h"


enum zb_zcl_door_lock_ext_attr_e
{
	ZB_ZCL_ATTR_DOOR_LOCK_NUMBER_OF_FIGNER_USRE_SUPPORTED_ID		= 0x8000,
	ZB_ZCL_ATTR_DOOR_LOCK_ADD_USER_EVENT_ID                        	= 0x8100,
	ZB_ZCL_ATTR_DOOR_LOCK_DELETE_USER_EVENT_ID                 		= 0x8200,
	ZB_ZCL_ATTR_DOOR_LOCK_CHANGE_CODE_EVENT_ID  					= 0x8300,
	ZB_ZCL_ATTR_DOOR_LOCK_ADMIN_VERIFY_EVENT_ID  					= 0x8400,
	ZB_ZCL_ATTR_DOOR_LOCK_TIMER_STATE_ID		  					= 0x9000,
	ZB_ZCL_ATTR_DOOR_LOCK_USER_LIST_EVENT_ID		  				= 0x9100,
	ZB_ZCL_ATTR_DOOR_LOCK_LOCK_PARAM_EVENT_ID		  				= 0x9200,
	ZB_ZCL_ATTR_DOOR_LOCK_SUPPORT_FUNCTION_EVENT_ID		  			= 0x9201,
	ZB_ZCL_ATTR_DOOR_LOCK_CUSTOM_UNLOCK_MODE_ID		  				= 0x9A00,	
	ZB_ZCL_ATTR_DOOR_LOCK_PRYING_RESISTANT_ID		  				= 0xF000,
	ZB_ZCL_ATTR_DOOR_LOCK_HIJACKING_PREVENTION_ID		  			= 0xF001,
	ZB_ZCL_ATTR_DOOR_LOCK_SYSTEM_LOCK_ID		  					= 0xF002,
	ZB_ZCL_ATTR_DOOR_LOCK_VOLTAGE_LEVEL_ID		  					= 0xF003,
	ZB_ZCL_ATTR_DOOR_LOCK_BACK_LOCK_ID		  						= 0xF004,
	ZB_ZCL_ATTR_DOOR_LOCK_DOOR_BELL_ID		  						= 0xF005,
	ZB_ZCL_ATTR_DOOR_LOCK_FACTORY_SETTING_ID		  				= 0xF006,
	ZB_ZCL_ATTR_DOOR_LOCK_VERIFY_CODE_ID		  					= 0xF007,
	ZB_ZCL_ATTR_DOOR_LOCAL_STAY_ID				  					= 0xF008,
};

// <<< Use Configuration Wizard in Context Menu >>>\n



// <h> Basic Attrubute
//==========================================================Basic Attrubute

// <q> BASIC_ATTR_ZCL_VERSION
#ifndef BASIC_ATTR_ZCL_VERSION
#define BASIC_ATTR_ZCL_VERSION 1
#endif

// <q> BASIC_ATTR_VERSION_APPLICCATION
#ifndef BASIC_ATTR_VERSION_APPLICCATION
#define BASIC_ATTR_VERSION_APPLICCATION 1
#endif

// <q> BASIC_ATTR_STACK_VERSION
#ifndef BASIC_ATTR_STACK_VERSION
#define BASIC_ATTR_STACK_VERSION 1
#endif

// <q> BASIC_ATTR_HW_VERSION
#ifndef BASIC_ATTR_HW_VERSION
#define BASIC_ATTR_HW_VERSION 1
#endif

// <q> BASIC_ATTR_MANUFACTURER_NAME
#ifndef BASIC_ATTR_MANUFACTURER_NAME
#define BASIC_ATTR_MANUFACTURER_NAME 1
#endif

// <q> BASIC_ATTR_MODEL_IDENTIFIER
#ifndef BASIC_ATTR_MODEL_IDENTIFIER
#define BASIC_ATTR_MODEL_IDENTIFIER 1
#endif

// <q> BASIC_ATTR_DATE_CODE
#ifndef BASIC_ATTR_DATE_CODE
#define BASIC_ATTR_DATE_CODE 1
#endif

// <q> BASIC_ATTR_POWER_SOURCE
#ifndef BASIC_ATTR_POWER_SOURCE
#define BASIC_ATTR_POWER_SOURCE 1
#endif

// <q> BASIC_ATTR_LOCATION_DESCRIPTION
#ifndef BASIC_ATTR_LOCATION_DESCRIPTION
#define BASIC_ATTR_LOCATION_DESCRIPTION 1
#endif

// <q> BASIC_ATTR_PHYSICAL_ENVIRONMENT
#ifndef BASIC_ATTR_PHYSICAL_ENVIRONMENT
#define BASIC_ATTR_PHYSICAL_ENVIRONMENT 1
#endif

// <q> BASIC_ATTR_DEVICE_ENABLED
#ifndef BASIC_ATTR_DEVICE_ENABLED
#define BASIC_ATTR_DEVICE_ENABLED 0
#endif

// <q> BASIC_ATTR_ALARM_MASK
#ifndef BASIC_ATTR_ALARM_MASK
#define BASIC_ATTR_ALARM_MASK 0
#endif

//==========================================================Basic Attrubute
// </h> 



// <h> Identify Attrubute
//==========================================================Identify Attrubute

// <q> IDENTIFY_ATTR_IDENTIFY_TIME
#ifndef IDENTIFY_ATTR_IDENTIFY_TIME
#define IDENTIFY_ATTR_IDENTIFY_TIME 1
#endif

// <q> IDENTIFY_ATTR_COMMISSION_STATE
#ifndef IDENTIFY_ATTR_COMMISSION_STATE
#define IDENTIFY_ATTR_COMMISSION_STATE 1
#endif

//==========================================================Identify Attrubute
// </h> 



// <h> Group Attrubute
//==========================================================Group Attrubute

// <q> GROUPS_ATTR_NAME_SUPPORT
#ifndef GROUPS_ATTR_NAME_SUPPORT
#define GROUPS_ATTR_NAME_SUPPORT 1
#endif

//==========================================================Group Attrubute
// </h> 


// <h> Scenes Attrubute
//==========================================================Scenes Attrubute

// <q> SCENE_ATTR_SCENE_COUNT
#ifndef SCENE_ATTR_SCENE_COUNT
#define SCENE_ATTR_SCENE_COUNT 1
#endif

// <q> SCENE_ATTR_CURRENT_SCENE
#ifndef SCENE_ATTR_CURRENT_SCENE
#define SCENE_ATTR_CURRENT_SCENE 1
#endif

// <q> SCENE_ATTR_CURRENT_GROUP
#ifndef SCENE_ATTR_CURRENT_GROUP
#define SCENE_ATTR_CURRENT_GROUP 1
#endif

// <q> SCENE_ATTR_SCENE_VALID
#ifndef SCENE_ATTR_SCENE_VALID
#define SCENE_ATTR_SCENE_VALID 1
#endif

// <q> SCENE_ATTR_NAME_SUPPORT
#ifndef SCENE_ATTR_NAME_SUPPORT
#define SCENE_ATTR_NAME_SUPPORT 1
#endif

//==========================================================Scenes Attrubute
// </h> 



// <h> Door Lock Attribute
//==========================================================Door Lock Attribute

// <e> Basic Information Attribute Set	0x0000-0x000F

// <q> DOOR_LOCK_ATTR_LOCK_STATE
#ifndef DOOR_LOCK_ATTR_LOCK_STATE
#define DOOR_LOCK_ATTR_LOCK_STATE 1
#endif

// <q> DOOR_LOCK_ATTR_LOCK_TYPE
#ifndef DOOR_LOCK_ATTR_LOCK_TYPE
#define DOOR_LOCK_ATTR_LOCK_TYPE 1
#endif

// <q> DOOR_LOCK_ATTR_ACTUATOR_ENABLED
#ifndef DOOR_LOCK_ATTR_ACTUATOR_ENABLED
#define DOOR_LOCK_ATTR_ACTUATOR_ENABLED 1
#endif

// <q> DOOR_LOCK_ATTR_DOOR_STATE
#ifndef DOOR_LOCK_ATTR_DOOR_STATE
#define DOOR_LOCK_ATTR_DOOR_STATE 0
#endif

// <q> DOOR_LOCK_ATTR_DOOR_OPEN_EVENTS
#ifndef DOOR_LOCK_ATTR_DOOR_OPEN_EVENTS
#define DOOR_LOCK_ATTR_DOOR_OPEN_EVENTS 0
#endif

// <q> DOOR_LOCK_ATTR_DOOR_CLOSED_EVENTS
#ifndef DOOR_LOCK_ATTR_DOOR_CLOSED_EVENTS
#define DOOR_LOCK_ATTR_DOOR_CLOSED_EVENTS 0
#endif

// <q> DOOR_LOCK_ATTR_OPEN_PERIOD
#ifndef DOOR_LOCK_ATTR_OPEN_PERIOD
#define DOOR_LOCK_ATTR_OPEN_PERIOD 0
#endif

// </e>	0x0000-0x000F


// <e> User/PIN/Schedule Information Attribute	0x0010-0x001F

// <q> DOOR_LOCK_ATTR_NUMBER_OF_LOG_RECORDS_SUPPORTED
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_LOG_RECORDS_SUPPORTED
#define DOOR_LOCK_ATTR_NUMBER_OF_LOG_RECORDS_SUPPORTED 1
#endif

// <q> DOOR_LOCK_ATTR_NUMBER_OF_TOTAL_USERS_SUPPORTED
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_TOTAL_USERS_SUPPORTED
#define DOOR_LOCK_ATTR_NUMBER_OF_TOTAL_USERS_SUPPORTED 1
#endif

// <q> DOOR_LOCK_ATTR_NUMBER_OF_PIN_USERS_SUPPORTED
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_PIN_USERS_SUPPORTED
#define DOOR_LOCK_ATTR_NUMBER_OF_PIN_USERS_SUPPORTED 1
#endif

// <q> DOOR_LOCK_ATTR_NUMBER_OF_RFID_USERS_SUPPORTED
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_RFID_USERS_SUPPORTED
#define DOOR_LOCK_ATTR_NUMBER_OF_RFID_USERS_SUPPORTED 1
#endif

// <q> DOOR_LOCK_ATTR_NUMBER_OF_WEEKDAY_SCHEDULES_SUPPORTED_PER_USER
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_WEEKDAY_SCHEDULES_SUPPORTED_PER_USER
#define DOOR_LOCK_ATTR_NUMBER_OF_WEEKDAY_SCHEDULES_SUPPORTED_PER_USER 0
#endif

// <q> DOOR_LOCK_ATTR_NUMBER_OF_YEARDAY_SCHEDULES_SUPPORTED_PER_USER
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_YEARDAY_SCHEDULES_SUPPORTED_PER_USER
#define DOOR_LOCK_ATTR_NUMBER_OF_YEARDAY_SCHEDULES_SUPPORTED_PER_USER 0
#endif


// <q> DOOR_LOCK_ATTR_NUMBER_OF_HOLIDAY_SCHEDULES_SUPPORTED
#ifndef DOOR_LOCK_ATTR_NUMBER_OF_HOLIDAY_SCHEDULES_SUPPORTED
#define DOOR_LOCK_ATTR_NUMBER_OF_HOLIDAY_SCHEDULES_SUPPORTED 0
#endif

// <q> DOOR_LOCK_ATTR_MAX_PIN_CODE_LENGTH
#ifndef DOOR_LOCK_ATTR_MAX_PIN_CODE_LENGTH
#define DOOR_LOCK_ATTR_MAX_PIN_CODE_LENGTH 1
#endif

// <q> DOOR_LOCK_ATTR_MIN_PIN_CODE_LENGTH
#ifndef DOOR_LOCK_ATTR_MIN_PIN_CODE_LENGTH
#define DOOR_LOCK_ATTR_MIN_PIN_CODE_LENGTH 1
#endif

// <q> DOOR_LOCK_ATTR_MAX_RFID_CODE_LENGTH
#ifndef DOOR_LOCK_ATTR_MAX_RFID_CODE_LENGTH
#define DOOR_LOCK_ATTR_MAX_RFID_CODE_LENGTH 1
#endif

// <q> DOOR_LOCK_ATTR_MIN_RFID_CODE_LENGTH
#ifndef DOOR_LOCK_ATTR_MIN_RFID_CODE_LENGTH
#define DOOR_LOCK_ATTR_MIN_RFID_CODE_LENGTH 1
#endif

// </e>	0x0010-0x001F


// <e> Operational Settings Attribute Set	0x0020-0x002F

// <q> DOOR_LOCK_ATTR_ENABLE_LOGGING
#ifndef DOOR_LOCK_ATTR_ENABLE_LOGGING
#define DOOR_LOCK_ATTR_ENABLE_LOGGING 0
#endif

// <q> DOOR_LOCK_ATTR_LANGUAGE
#ifndef DOOR_LOCK_ATTR_LANGUAGE
#define DOOR_LOCK_ATTR_LANGUAGE 1
#endif

// <q> DOOR_LOCK_ATTR_LED_SETTINGS
#ifndef DOOR_LOCK_ATTR_LED_SETTINGS
#define DOOR_LOCK_ATTR_LED_SETTINGS 1
#endif

// <q> DOOR_LOCK_ATTR_AUTO_RELOCK_TIME
#ifndef DOOR_LOCK_ATTR_AUTO_RELOCK_TIME
#define DOOR_LOCK_ATTR_AUTO_RELOCK_TIME 1
#endif

// <q> DOOR_LOCK_ATTR_SOUND_VOLUME
#ifndef DOOR_LOCK_ATTR_SOUND_VOLUME
#define DOOR_LOCK_ATTR_SOUND_VOLUME 1
#endif

// <q> DOOR_LOCK_ATTR_OPERATING_MODE
#ifndef DOOR_LOCK_ATTR_OPERATING_MODE
#define DOOR_LOCK_ATTR_OPERATING_MODE 1
#endif

// <q> DOOR_LOCK_ATTR_SUPPORTED_OPERATING_MODES
#ifndef DOOR_LOCK_ATTR_SUPPORTED_OPERATING_MODES
#define DOOR_LOCK_ATTR_SUPPORTED_OPERATING_MODES 1
#endif

// <q> DOOR_LOCK_ATTR_DEFAULT_CONFIGURATION_REGISTER
#ifndef DOOR_LOCK_ATTR_DEFAULT_CONFIGURATION_REGISTER
#define DOOR_LOCK_ATTR_DEFAULT_CONFIGURATION_REGISTER 1
#endif

// <q> DOOR_LOCK_ATTR_ENABLE_LOCAL_PROGRAMMING
#ifndef DOOR_LOCK_ATTR_ENABLE_LOCAL_PROGRAMMING
#define DOOR_LOCK_ATTR_ENABLE_LOCAL_PROGRAMMING 1
#endif

// <q> DOOR_LOCK_ATTR_ENABLE_ONE_TOUCH_LOCKING
#ifndef DOOR_LOCK_ATTR_ENABLE_ONE_TOUCH_LOCKING
#define DOOR_LOCK_ATTR_ENABLE_ONE_TOUCH_LOCKING 1
#endif

// <q> DOOR_LOCK_ATTR_ENABLE_INSIDE_STATUS_LED
#ifndef DOOR_LOCK_ATTR_ENABLE_INSIDE_STATUS_LED
#define DOOR_LOCK_ATTR_ENABLE_INSIDE_STATUS_LED 1
#endif

// <q> DOOR_LOCK_ATTR_ENABLE_PRIVACY_MODE_BUTTON
#ifndef DOOR_LOCK_ATTR_ENABLE_PRIVACY_MODE_BUTTON
#define DOOR_LOCK_ATTR_ENABLE_PRIVACY_MODE_BUTTON 1
#endif

// </e>	0x0020-0x002F


// <e> Security Settings Attribute Set 0x0030-0x003F

// <q> DOOR_LOCK_ATTR_WRONG_CODE_ENTRY_LIMIT
#ifndef DOOR_LOCK_ATTR_WRONG_CODE_ENTRY_LIMIT
#define DOOR_LOCK_ATTR_WRONG_CODE_ENTRY_LIMIT 0
#endif

// <q> DOOR_LOCK_ATTR_USER_CODE_TEMPORARY_DISABLE_TIME
#ifndef DOOR_LOCK_ATTR_USER_CODE_TEMPORARY_DISABLE_TIME
#define DOOR_LOCK_ATTR_USER_CODE_TEMPORARY_DISABLE_TIME 1
#endif

// <q> DOOR_LOCK_ATTR_SEND_PIN_OVER_THE_AIR
#ifndef DOOR_LOCK_ATTR_SEND_PIN_OVER_THE_AIR
#define DOOR_LOCK_ATTR_SEND_PIN_OVER_THE_AIR 1
#endif

// <q> DOOR_LOCK_ATTR_REQUIRE_PIN_FOR_RF_OPERATION
#ifndef DOOR_LOCK_ATTR_REQUIRE_PIN_FOR_RF_OPERATION
#define DOOR_LOCK_ATTR_REQUIRE_PIN_FOR_RF_OPERATION 1
#endif

// <q> DOOR_LOCK_ATTR_ZIGBEE_SECURITY_LEVEL
#ifndef DOOR_LOCK_ATTR_ZIGBEE_SECURITY_LEVEL
#define DOOR_LOCK_ATTR_ZIGBEE_SECURITY_LEVEL 1
#endif

// </e>	0x0030-0x003F


// <e> Alarm and Event Masks Attribute	0x0040-0x004F

// <q> DOOR_LOCK_ATTR_ALARM_MASK
#ifndef DOOR_LOCK_ATTR_ALARM_MASK
#define DOOR_LOCK_ATTR_ALARM_MASK 1
#endif

// <q> DOOR_LOCK_ATTR_KEYPAD_OPERATION_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_KEYPAD_OPERATION_EVENT_MASK
#define DOOR_LOCK_ATTR_KEYPAD_OPERATION_EVENT_MASK 1
#endif

// <q> DOOR_LOCK_ATTR_RF_OPERATION_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_RF_OPERATION_EVENT_MASK
#define DOOR_LOCK_ATTR_RF_OPERATION_EVENT_MASK 1
#endif

// <q> DOOR_LOCK_ATTR_MANUAL_OPERATION_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_MANUAL_OPERATION_EVENT_MASK
#define DOOR_LOCK_ATTR_MANUAL_OPERATION_EVENT_MASK 1
#endif

// <q> DOOR_LOCK_ATTR_RFID_OPERATION_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_RFID_OPERATION_EVENT_MASK
#define DOOR_LOCK_ATTR_RFID_OPERATION_EVENT_MASK 1
#endif
// <q> DOOR_LOCK_ATTR_KEYPAD_PROGRAMMING_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_KEYPAD_PROGRAMMING_EVENT_MASK
#define DOOR_LOCK_ATTR_KEYPAD_PROGRAMMING_EVENT_MASK 1
#endif

// <q> DOOR_LOCK_ATTR_RF_PROGRAMMING_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_RF_PROGRAMMING_EVENT_MASK
#define DOOR_LOCK_ATTR_RF_PROGRAMMING_EVENT_MASK 1
#endif

// <q> DOOR_LOCK_ATTR_RFID_PROGRAMMING_EVENT_MASK
#ifndef DOOR_LOCK_ATTR_RFID_PROGRAMMING_EVENT_MASK
#define DOOR_LOCK_ATTR_RFID_PROGRAMMING_EVENT_MASK 1
#endif

// </e>	0x0040-0x004F

//==========================================================Door Lock Attribute
// </h> 
 


// <h> Door Lock Command : ZIGBEE ALLIANCE
//==========================================================Door Lock Command : ZIGBEE ALLIANCE

// <o> DOOR_LOCK_COMMADN_LOCK_DOOR
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_LOCK_DOOR
#define DOOR_LOCK_COMMADN_LOCK_DOOR 0x00
#endif

// <o> DOOR_LOCK_COMMADN_UNLOCK_DOOR
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_UNLOCK_DOOR
#define DOOR_LOCK_COMMADN_UNLOCK_DOOR 0x01
#endif

// <o> DOOR_LOCK_COMMADN_TOGGLE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_TOGGLE
#define DOOR_LOCK_COMMADN_TOGGLE 0x02
#endif

// <o> DOOR_LOCK_COMMADN_UNLOCK_WITH_TIMEOUT
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_UNLOCK_WITH_TIMEOUT
#define DOOR_LOCK_COMMADN_UNLOCK_WITH_TIMEOUT 0x03
#endif

// <o> DOOR_LOCK_COMMADN_GET_LOG_RECORD
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_LOG_RECORD
#define DOOR_LOCK_COMMADN_GET_LOG_RECORD 0x04
#endif

// <o> DOOR_LOCK_COMMADN_SET_PIN_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_PIN_CODE
#define DOOR_LOCK_COMMADN_SET_PIN_CODE 0x05
#endif

// <o> DOOR_LOCK_COMMADN_GET_PIN_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_PIN_CODE
#define DOOR_LOCK_COMMADN_GET_PIN_CODE 0x06
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_PIN_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_PIN_CODE
#define DOOR_LOCK_COMMADN_CLEAR_PIN_CODE 0x07
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_ALL_PIN_STATUS
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_ALL_PIN_STATUS
#define DOOR_LOCK_COMMADN_CLEAR_ALL_PIN_STATUS 0x08
#endif

// <o> DOOR_LOCK_COMMADN_SET_USER_STATUS
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_USER_STATUS
#define DOOR_LOCK_COMMADN_SET_USER_STATUS 0x09
#endif


// <o> DOOR_LOCK_COMMADN_GET_USER_STATUS
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_USER_STATUS
#define DOOR_LOCK_COMMADN_GET_USER_STATUS 0x0A
#endif

// <o> DOOR_LOCK_COMMADN_SET_WEEKDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_WEEKDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_SET_WEEKDAY_SCHEDULE 0x0B
#endif

// <o> DOOR_LOCK_COMMADN_GET_WEEKDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_WEEKDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_GET_WEEKDAY_SCHEDULE 0x0C
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_WEEKDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_WEEKDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_CLEAR_WEEKDAY_SCHEDULE 0x0D
#endif

// <o> DOOR_LOCK_COMMADN_SET_YEARDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_YEARDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_SET_YEARDAY_SCHEDULE 0x0E
#endif

// <o> DOOR_LOCK_COMMADN_GET_YEARDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_YEARDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_GET_YEARDAY_SCHEDULE 0x0F
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_YEARDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_YEARDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_CLEAR_YEARDAY_SCHEDULE 0x10
#endif

// <o> DOOR_LOCK_COMMADN_SET_HOLIDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_HOLIDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_SET_HOLIDAY_SCHEDULE 0x11
#endif

// <o> DOOR_LOCK_COMMADN_GET_HOLIDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_HOLIDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_GET_HOLIDAY_SCHEDULE 0x12
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_HOLIDAY_SCHEDULE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_HOLIDAY_SCHEDULE
#define DOOR_LOCK_COMMADN_CLEAR_HOLIDAY_SCHEDULE 0x13
#endif

// <o> DOOR_LOCK_COMMADN_SET_USER_TYPE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_USER_TYPE
#define DOOR_LOCK_COMMADN_SET_USER_TYPE 0x14
#endif

// <o> DOOR_LOCK_COMMADN_GET_USER_TYPE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_USER_TYPE
#define DOOR_LOCK_COMMADN_GET_USER_TYPE 0x15
#endif

// <o> DOOR_LOCK_COMMADN_SET_RFID_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_SET_RFID_CODE
#define DOOR_LOCK_COMMADN_SET_RFID_CODE 0x16
#endif

// <o> DOOR_LOCK_COMMADN_GET_RFID_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_GET_RFID_CODE
#define DOOR_LOCK_COMMADN_GET_RFID_CODE 0x17
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_RFID_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_RFID_CODE
#define DOOR_LOCK_COMMADN_CLEAR_RFID_CODE 0x18
#endif

// <o> DOOR_LOCK_COMMADN_CLEAR_ALL_RFID_CODE
// <0x00-0x20> 
#ifndef DOOR_LOCK_COMMADN_CLEAR_ALL_RFID_CODE
#define DOOR_LOCK_COMMADN_CLEAR_ALL_RFID_CODE 0x19
#endif
//==========================================================Door Lock Command : ZIGBEE ALLIANCE
// </h> 



// <h> Door Lock Command : WULIAN CUSTOM
//==========================================================Door Lock Command : WULIAN CUSTOM
// <e> Door Lock Command : WULIAN CUSTOM

#ifndef DOOR_LOCK_COMMADN_MANUF_ADD_USER
#define DOOR_LOCK_COMMADN_MANUF_ADD_USER 0x00
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_DELETE_USER
#define DOOR_LOCK_COMMADN_MANUF_DELETE_USER 0x01
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_CHANGE_CODE
#define DOOR_LOCK_COMMADN_MANUF_CHANGE_CODE 0x02
#endif

#ifndef DOOR_LOCK_COMMADN_ADMIN_VERIFY_CODE
#define DOOR_LOCK_COMMADN_ADMIN_VERIFY_CODE 0x04
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_TIME_SYNC
#define DOOR_LOCK_COMMADN_MANUF_TIME_SYNC 0x10
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_GET_USER_INFO
#define DOOR_LOCK_COMMADN_MANUF_GET_USER_INFO 0x20
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_GET_DEV_INFO
#define DOOR_LOCK_COMMADN_MANUF_GET_DEV_INFO 0x21
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_CUSTOM_FORMAT
#define DOOR_LOCK_COMMADN_MANUF_CUSTOM_FORMAT 0x2F
#endif

#ifndef DOOR_LOCK_COMMADN_MANUF_STATE_REPORT
#define DOOR_LOCK_COMMADN_MANUF_STATE_REPORT 0x70
#endif

// </e> 
//==========================================================Door Lock Command : WULIAN CUSTOM
// </h> Door Lock Command : WULIAN CUSTOM


// <<< end of configuration section >>>


/* Basic cluster attributes. 0x0000 */
typedef struct
{
	#if	BASIC_ATTR_ZCL_VERSION
		zb_uint8_t zcl_version;			//0x0000
	#endif	
	#if	BASIC_ATTR_VERSION_APPLICCATION
		zb_uint8_t app_version;			//0x0001
	#endif	
	#if	BASIC_ATTR_STACK_VERSION
		zb_uint8_t stack_version;		//0x0002
	#endif	
	#if BASIC_ATTR_HW_VERSION
		zb_uint8_t hw_version;			//0x0003
	#endif
	#if BASIC_ATTR_MANUFACTURER_NAME
		zb_char_t  mf_name[32];			//0x0004   	string
	#endif
	#if BASIC_ATTR_MODEL_IDENTIFIER
		zb_char_t  model_id[32];		//0x0005
	#endif
	#if BASIC_ATTR_DATE_CODE
		zb_char_t  date_code[16];		//0x0006
	#endif
	#if BASIC_ATTR_POWER_SOURCE
		zb_uint8_t power_source;		//0x0007   	enum8
	#endif
	#if BASIC_ATTR_LOCATION_DESCRIPTION
		zb_char_t  location_desc[17];	//0x0010
	#endif
	#if BASIC_ATTR_PHYSICAL_ENVIRONMENT
		zb_char_t  ph_env;				//0x0011	bool
	#endif
	#if BASIC_ATTR_DEVICE_ENABLED
		 zb_bool_t device_enable;		//0x0012
	#endif
	#if BASIC_ATTR_ALARM_MASK
		zb_uint8_t alarm_mask;			//0x0013	map8
	#endif
} zb_device_basic_attr_t;			

/* Identify cluster attributes. 0x0003 */
typedef struct
{
	#if IDENTIFY_ATTR_IDENTIFY_TIME
		zb_uint16_t identify_time;		//0x0000
	#endif
	#if IDENTIFY_ATTR_COMMISSION_STATE
		zb_uint8_t  commission_state;	//0x0001
	#endif
} zb_device_identify_attr_t;

/* Groups cluster attributes. 0x0004 */
typedef struct
{
	#if GROUPS_ATTR_NAME_SUPPORT
		zb_uint8_t name_support;		//0x0004
	#endif
} zb_device_groups_attr_t;

/* Scenes cluster attributes. 0x0005 */
typedef struct
{
	#if SCENE_ATTR_SCENE_COUNT
		zb_uint8_t  scene_count;		//0x000
	#endif
	#if SCENE_ATTR_CURRENT_SCENE
		zb_uint8_t  current_scene;		//0x001
	#endif
	#if SCENE_ATTR_CURRENT_GROUP
		zb_uint16_t current_group;		//0x002
	#endif
	#if SCENE_ATTR_SCENE_VALID
		zb_bool_t   scene_valid;		//0x003
	#endif
	#if SCENE_ATTR_NAME_SUPPORT
		zb_uint8_t  name_support;   	//0x004
	#endif
} zb_device_scenes_attr_t;

/* door lock cluster attributes. 0x0101 */
typedef struct
{	
	/* 0x0000 - 0x000F Basic Information Attribute Set */
	#if DOOR_LOCK_ATTR_LOCK_STATE
		zb_uint8_t  	lock_state;							//0x0000
	#endif
	#if DOOR_LOCK_ATTR_LOCK_TYPE
		zb_uint8_t 		lock_type;							//0x0001
	#endif 	
	#if DOOR_LOCK_ATTR_ACTUATOR_ENABLED
		zb_bool_t 		actuator_enabled;					//0x0002
	#endif
	#if DOOR_LOCK_ATTR_DOOR_STATE
		zb_uint8_t 		door_state;							//0x0003
	#endif
	#if DOOR_LOCK_ATTR_DOOR_OPEN_EVENTS
		zb_uint32_t 	door_open_events;					//0x0004
	#endif
	#if DOOR_LOCK_ATTR_DOOR_CLOSED_EVENTS
		zb_uint32_t 	door_closed_events;					//0x0005
	#endif
	#if DOOR_LOCK_ATTR_OPEN_PERIOD
		zb_uint16_t 	open_period;						//0x0006
	#endif 	
		
	/* 0x0010 – 0x001F User, PIN, Schedule Information Attribute Set */
	#if DOOR_LOCK_ATTR_NUMBER_OF_LOG_RECORDS_SUPPORTED
		zb_uint16_t  	number_of_log_records_supported; 	//0x0010
	#endif
	#if DOOR_LOCK_ATTR_NUMBER_OF_TOTAL_USERS_SUPPORTED
		zb_uint16_t 	number_of_total_users_supported;	//0x0011
	#endif	
	#if DOOR_LOCK_ATTR_NUMBER_OF_PIN_USERS_SUPPORTED
		zb_uint16_t 	number_of_pin_users_supported;		//0x0012
	#endif
	#if DOOR_LOCK_ATTR_NUMBER_OF_RFID_USERS_SUPPORTED
		zb_uint16_t 	number_of_rfid_users_supported;		//0x0013
	#endif
	#if DOOR_LOCK_ATTR_NUMBER_OF_WEEKDAY_SCHEDULES_SUPPORTED_PER_USER	
		zb_uint8_t 		number_of_weekday_schedules_supported_per_user; 	//0x0014
	#endif
	#if	DOOR_LOCK_ATTR_NUMBER_OF_YEARDAY_SCHEDULES_SUPPORTED_PER_USER
		zb_uint8_t 		number_of_yearday_schedules_supported_per_user;		//0x0015
	#endif
	#if DOOR_LOCK_ATTR_NUMBER_OF_HOLIDAY_SCHEDULES_SUPPORTED
		zb_uint8_t 		number_of_holiday_schedules_supported;				//0x0016
	#endif
	#if DOOR_LOCK_ATTR_MAX_PIN_CODE_LENGTH	
		zb_uint8_t 		max_pin_code_length;				//0x0017
	#endif
	#if DOOR_LOCK_ATTR_MIN_PIN_CODE_LENGTH
		zb_uint8_t 		min_pin_code_length;				//0x0018
	#endif
	#if DOOR_LOCK_ATTR_MAX_RFID_CODE_LENGTH
		zb_uint8_t 		max_rfid_code_length;				//0x0019
	#endif 
	#if DOOR_LOCK_ATTR_MIN_RFID_CODE_LENGTH
		zb_uint8_t 		min_rfid_code_length;				//0x001A
	#endif	

	/* 0x0020 – 0x002F Operational Settings Attribute Set */
	#if DOOR_LOCK_ATTR_ENABLE_LOGGING
		zb_bool_t		enable_logging;						//0x0020
	#endif
	#if DOOR_LOCK_ATTR_LANGUAGE
		zb_char_t		language[3];						//0x0021
	#endif
	#if DOOR_LOCK_ATTR_LED_SETTINGS
		zb_uint8_t		led_settings;						//0x0022
	#endif
	#if DOOR_LOCK_ATTR_AUTO_RELOCK_TIME	
		zb_uint32_t  	atuo_relock_time;					//0x0023
	#endif	
	#if DOOR_LOCK_ATTR_SOUND_VOLUME
		zb_uint8_t		sound_volume;						//0x0024
	#endif
	#if DOOR_LOCK_ATTR_OPERATING_MODE
		zb_uint8_t      operating_mode; 					//0x0025
	#endif
	#if DOOR_LOCK_ATTR_SUPPORTED_OPERATING_MODES
		zb_uint16_t     supported_operating_modes; 			//0x0026
	#endif
	#if DOOR_LOCK_ATTR_DEFAULT_CONFIGURATION_REGISTER
		zb_uint16_t     default_configuration_register; 	//0x0027
	#endif
	#if DOOR_LOCK_ATTR_ENABLE_LOCAL_PROGRAMMING
		zb_bool_t		enable_local_programming;			//0x0028
	#endif
	#if DOOR_LOCK_ATTR_ENABLE_ONE_TOUCH_LOCKING
		zb_bool_t		enable_one_touch_locking;			//0x0029
	#endif	
	#if DOOR_LOCK_ATTR_ENABLE_INSIDE_STATUS_LED
		zb_bool_t		enable_inside_status_led;			//0x002A
	#endif
	#if DOOR_LOCK_ATTR_ENABLE_PRIVACY_MODE_BUTTON
		zb_bool_t		enable_privacy_mode_button;			//0x002B
	#endif	
		
	/* 0x0030 – 0x003F Security Settings Attribute Set */
	#if DOOR_LOCK_ATTR_WRONG_CODE_ENTRY_LIMIT
		zb_uint8_t      wrong_code_entry_limit;				//0x0030
	#endif
	#if DOOR_LOCK_ATTR_USER_CODE_TEMPORARY_DISABLE_TIME	
		zb_uint8_t		user_code_temporary_disable_time;	//0x0031
	#endif
	#if DOOR_LOCK_ATTR_SEND_PIN_OVER_THE_AIR
		zb_bool_t 		send_pin_over_the_air;				//0x0032
	#endif
	#if DOOR_LOCK_ATTR_REQUIRE_PIN_FOR_RF_OPERATION
		zb_bool_t 		require_pin_for_rf_operation;		//0x0033
	#endif	
	#if DOOR_LOCK_ATTR_ZIGBEE_SECURITY_LEVEL
		zb_uint8_t		zigbee_security_level;				//0x0034
	#endif
		
	/* 0x0040 – 0x004F Alarm and Event Masks Attribute Set */
	#if DOOR_LOCK_ATTR_ALARM_MASK
		zb_uint16_t		alarm_mask;							//0x0040
	#endif
	#if DOOR_LOCK_ATTR_KEYPAD_OPERATION_EVENT_MASK	
		zb_uint16_t 	keypad_operation_event_mask;		//0x0041
	#endif	
	#if DOOR_LOCK_ATTR_RF_OPERATION_EVENT_MASK
		zb_uint16_t		rf_operation_event_mask;			//0x0042
	#endif
	#if DOOR_LOCK_ATTR_MANUAL_OPERATION_EVENT_MASK	
		zb_uint16_t		manual_operation_event_mask;		//0x0043
	#endif 
	#if DOOR_LOCK_ATTR_RFID_OPERATION_EVENT_MASK	
		zb_uint16_t		rfid_operation_event_mask;			//0x0044
	#endif
	#if DOOR_LOCK_ATTR_KEYPAD_PROGRAMMING_EVENT_MASK	
		zb_uint16_t		keypad_programming_event_mask;		//0x0045
	#endif
	#if DOOR_LOCK_ATTR_RF_PROGRAMMING_EVENT_MASK	
		zb_uint16_t 	rf_programming_event_mask;			//0x0046
	#endif
	#if DOOR_LOCK_ATTR_RFID_PROGRAMMING_EVENT_MASK	
		zb_uint16_t		rfid_programming_event_mask;		//0x0047
	#endif		
	
	/* 0x8000 – 0xEFFF wulian manufacter specific attribute define */
	zb_uint8_t		verify_code_event;				//0x8000
	zb_uint8_t		number_of_figner_user_support;	//0x8001
	zb_uint8_t		add_user_event;					//0x8002
	zb_uint8_t		delete_user_event;				//0x8003
	zb_uint8_t		change_code_event;				//0x8004
	zb_uint8_t		time_state;						//0x9004
	zb_uint8_t		prying_resistant;				//0xf000
	zb_uint8_t		hijacking_prevention;			//0xf001
	zb_uint8_t		system_lock;					//0xf002
	zb_uint8_t		voltage_level;					//0xf003
	zb_uint8_t		back_lock;						//0xf004
	
} zb_device_door_lock_attr_t;

#endif //WL_DOOR_LOCK_H



typedef struct
{
	zb_uint8_t lock_door_len;
	zb_uint8_t unlock_door_len;
	zb_uint8_t toggle_len;
	zb_uint8_t unlock_with_timeout_len;
	zb_uint8_t get_log_record_len;
	zb_uint8_t set_pin_code_len;
	zb_uint8_t get_pin_code_len;
	zb_uint8_t clear_pin_code_len;
	zb_uint8_t clear_all_pin_code_len;
	zb_uint8_t set_user_status_len;
	zb_uint8_t get_user_status_len;
	zb_uint8_t set_weekday_schedule_len;
	zb_uint8_t get_weekday_schedule_len;
	zb_uint8_t clear_weekday_schedule_len;
	zb_uint8_t set_yearday_schedule_len;
	zb_uint8_t get_yearday_schedule_len;
	zb_uint8_t clear_yearday_schedule_len;
	zb_uint8_t set_holiday_schedule_len;
	zb_uint8_t get_holiday_schedule_len;
	zb_uint8_t clear_holiday_schedule_len;
	zb_uint8_t set_user_type_len;
	zb_uint8_t get_user_type_len;
	zb_uint8_t set_rfid_code_len;
	zb_uint8_t get_rfid_code_len;
	zb_uint8_t clear_rfid_code_len;
	zb_uint8_t clear_all_rfid_code_len;
}zb_device_door_lock_cmd_len_t;

typedef struct
{
	zb_uint8_t * lock_door;
	zb_uint8_t * unlock_door;
	zb_uint8_t * toggle;
	zb_uint8_t * unlock_with_timeout;
	zb_uint8_t * get_log_record;
	zb_uint8_t * set_pin_code;
	zb_uint8_t * get_pin_code;
	zb_uint8_t * clear_pin_code;
	zb_uint8_t * clear_all_pin_code;
	zb_uint8_t * set_user_status;
	zb_uint8_t * get_user_status;
	zb_uint8_t * set_weekday_schedule;
	zb_uint8_t * get_weekday_schedule;
	zb_uint8_t * clear_weekday_schedule;
	zb_uint8_t * set_yearday_schedule;
	zb_uint8_t * get_yearday_schedule;
	zb_uint8_t * clear_yearday_schedule;
	zb_uint8_t * set_holiday_schedule;
	zb_uint8_t * get_holiday_schedule;
	zb_uint8_t * clear_holiday_schedule;
	zb_uint8_t * set_user_type;
	zb_uint8_t * get_user_type;
	zb_uint8_t * set_rfid_code;
	zb_uint8_t * get_rfid_code;
	zb_uint8_t * clear_rfid_code;
	zb_uint8_t * clear_all_rfid_code;
	zb_device_door_lock_cmd_len_t len;
}zb_device_door_lock_cmd_t;


#define ZB_CMD_PTR_DEF(name)  zb_device_door_lock_cmd_t name##_cmd = 			\
							{													\
								.lock_door = NULL,								\
								.unlock_door = NULL,							\
								.toggle = NULL,									\
								.unlock_with_timeout = NULL,					\
								.get_log_record = NULL,							\
								.set_pin_code = NULL,							\
								.get_pin_code = NULL,							\
								.clear_pin_code = NULL,							\
								.clear_all_pin_code = NULL,						\
								.set_user_status = NULL,						\
								.get_user_status = NULL,						\
								.set_weekday_schedule = NULL,					\
								.get_weekday_schedule = NULL,					\
								.clear_weekday_schedule = NULL,					\
								.set_yearday_schedule = NULL,					\
								.get_yearday_schedule = NULL,					\
								.clear_yearday_schedule = NULL,					\
								.set_holiday_schedule = NULL,					\
								.get_holiday_schedule = NULL,					\
								.clear_holiday_schedule = NULL,					\
								.set_user_type = NULL,							\
								.get_user_type = NULL,							\
								.set_rfid_code = NULL,							\
								.get_rfid_code = NULL,							\
								.clear_rfid_code = NULL,						\
								.clear_all_rfid_code = NULL,					\
								{												\
									0											\
								}												\
							}




/**************************************add user*************************************************/
							
typedef enum
{
    MASTER_USER = 0x00,
	GENERAL_USER = 0x01,
	TEMPRORARY_USER = 0x02,
	NOT_USER_SUPPORT = 0xff
}add_user_type_t;

typedef enum
{
    PIN_CODE,
	RFID_CODE,
	FIGNER_CODE,
	NOT_CODE_SUPPORT = 0xff
}code_type_t;

typedef struct 
{
	uint16_t user_id;
	uint8_t user_type;
	uint8_t code_type;
	uint8_t code_len;
	uint8_t code[15];
	uint8_t start_time[7];
	uint8_t end_time[7];
}add_user_param_t;

/**************************************add user*************************************************/	
/**************************************delete user**********************************************/	

typedef enum
{
    SIGNAL_USER,
	ALL_GENERAL_USER,
	ALL_TEMPRORARY_USER,
	ALL_USER
}delet_user_type_t;

typedef struct 
{
	uint16_t user_id;
	uint8_t delete_type;
}delete_user_param_t;

/**************************************delete user**********************************************/
/**************************************change user**********************************************/

typedef struct 
{
	uint16_t user_id;
	uint8_t code_type;
	uint8_t code_len;
	uint8_t code[10];
}change_user_param_t;

/**************************************change user**********************************************/
/**************************************admin verify*********************************************/

typedef struct 
{
	uint16_t user_id;
	uint8_t code_type;
	uint8_t admin_code_len;
	uint8_t admin_code[10];
}admin_verify_param_t;

/**************************************admin verify*********************************************/
/**************************************time sync************************************************/

typedef struct 
{
	uint8_t time[10];
}time_sync_param_t;

/**************************************time sync************************************************/

typedef struct 
{
	uint8_t cmd_id;
	uint8_t specific_bit;
	union
	{
		add_user_param_t add_user;
		delete_user_param_t delete_user;
		change_user_param_t change_user;
		admin_verify_param_t admin_verify;
		time_sync_param_t time_sync;
	}common;
}zb_door_lock_union_param_t;
#define ZB_DOOR_LOCK_PROTOCOL_UNION_DEF(name)		zb_door_lock_union_param_t	name##_union;


typedef struct 
{
	add_user_param_t add_user;
	delete_user_param_t delete_user;
	change_user_param_t change_user;
	admin_verify_param_t admin_verify;
	time_sync_param_t time_sync;
}zb_door_lock_param_t;
#define ZB_DOOR_LOCK_PROTOCOL_DEF(name)		zb_door_lock_param_t	name;



/**************************************enum zigbee event**********************************************************/

/**************************************enum zigbee operation event************************************************/
typedef enum
{
	OPERATION_KEYPAD = 0x00,
	OPERATION_RF = 0x01,
	OPERATION_MANUAL = 0x02,
	OPERATION_RFID = 0x03,
	OPERATION_FINGER = 0xF0,
}operation_event_sources_e;

typedef enum
{
	KEYPAD_OPERATION_BIT0 = 0x00,		//Unknown or manufacturer-specific keypad operation event
	KEYPAD_OPERATION_BIT1 = 0x01,		//Lock, source: keypad
	KEYPAD_OPERATION_BIT2 = 0x02,		//Unlock, source: keypad
	KEYPAD_OPERATION_BIT3 = 0x03,		//Lock, source: keypad, error: invalid PIN
	KEYPAD_OPERATION_BIT4 = 0x04,		//Lock, source: keypad, error: invalid schedule
	KEYPAD_OPERATION_BIT5 = 0x05,		//Unlock, source: keypad, error: invalid code
	KEYPAD_OPERATION_BIT6 = 0x06,		//Unlock, source: keypad, error: invalid schedule
	KEYPAD_OPERATION_BITF = 0x0F,		//Non-Access User operation event, source keypad
}keypad_operation_event_code_e;


typedef enum
{
	RF_OPERATION_BIT0 = 0x00,			//Unknown or manufacturer-specific RF operation event
	RF_OPERATION_BIT1 = 0x01,			//Lock, source: RF
	RF_OPERATION_BIT2 = 0x02,			//Unlock, source: RF
	RF_OPERATION_BIT3 = 0x03,			//Lock, source: RF, error: invalid code
	RF_OPERATION_BIT4 = 0x04,			//Lock, source: RF, error: invalid schedule
	RF_OPERATION_BIT5 = 0x05,			//Unlock, source: RF, error: invalid code
	RF_OPERATION_BIT6 = 0x06,			//Unlock, source: RF, error: invalid schedule
}rf_operation_event_code_e;


typedef enum
{
	MANUAL_OPERATION_BIT0 = 0x00,		//Unknown or manufacturer-specific manual operation event
	MANUAL_OPERATION_BIT1 = 0x01,		//Thumbturn Lock
	MANUAL_OPERATION_BIT2 = 0x02,		//Thumbturn Unlock
	MANUAL_OPERATION_BIT7 = 0x07,		//One touch lock
	MANUAL_OPERATION_BIT8 = 0x08,		//Key Lock
	MANUAL_OPERATION_BIT9 = 0x09,		//Key Unlock
	MANUAL_OPERATION_BITA = 0x0A,		//Auto lock
	MANUAL_OPERATION_BITB = 0x0B,		//Schedule Lock
	MANUAL_OPERATION_BITC = 0x0C,		//Schedule Unlock
	MANUAL_OPERATION_BITD = 0x0D,		//Manual Lock (Key or Thumbturn)
	MANUAL_OPERATION_BITE = 0x0E,		//Manual Unlock (Key or Thumbturn)
}manual_operation_event_code_e;

typedef enum
{
	RFID_OPERATION_BIT0 = 0x00,			//Unknown or manufacturer-specific keypad operation event
	RFID_OPERATION_BIT1 = 0x01,			//Lock, source: RFID
	RFID_OPERATION_BIT2 = 0x02,			//Unlock, source: RFID
	RFID_OPERATION_BIT3 = 0x03,			//Lock, source: RFID, error: invalid RFID ID
	RFID_OPERATION_BIT4 = 0x04,			//Lock, source: RFID, error: invalid schedule
	RFID_OPERATION_BIT5 = 0x05,			//Unlock, source: RFID, error: invalid RFID ID
	RFID_OPERATION_BIT6 = 0x06,			//Unlock, source: RFID, error: invalid schedule
}rfid_operation_event_code_e;

typedef enum
{
	FINGER_OPERATION_BIT0 = 0x00,			//Unknown or manufacturer-specific finger operation event
	FINGER_OPERATION_BIT1 = 0x01,			//Lock, source: finger
	FINGER_OPERATION_BIT2 = 0x02,			//Unlock, source: finger
	FINGER_OPERATION_BIT3 = 0x03,			//Lock, source: finger, error: invalid finger ID
	FINGER_OPERATION_BIT4 = 0x04,			//Lock, source: finger, error: invalid schedule
	FINGER_OPERATION_BIT5 = 0x05,			//Unlock, source: finger, error: invalid finger ID
	FINGER_OPERATION_BIT6 = 0x06,			//Unlock, source: finger, error: invalid schedule
}finger_operation_event_code_e;

/**************************************enum zigbee operation event************************************************/

/**************************************enum zigbee programming event**********************************************/
typedef enum
{
	PROGRAMMING_KEYPAD = 0x00,
	PROGRAMMING_RF = 0x01,
	PROGRAMMING_RESERVED = 0x02,
	PROGRAMMING_RFID = 0x03,
}programming_event_sources_e;

typedef enum
{
	KEYPAD_PROGRAMMING_BIT0 = 0x00,		//Unknown or manufacturer-specific keypad programming event
	KEYPAD_PROGRAMMING_BIT1 = 0x01,		//Master code changed, source: keypad
	KEYPAD_PROGRAMMING_BIT2 = 0x02,		//PIN added, source: keypad
	KEYPAD_PROGRAMMING_BIT3 = 0x03,		//PIN deleted, source: keypad
	KEYPAD_PROGRAMMING_BIT4 = 0x04,		//PIN changed, source: keypad
}keypad_programming_event_code_e;


typedef enum
{
	RF_PROGRAMMING_BIT0 = 0x00,			//Unknown or manufacturer-specific RF programming event
	RF_PROGRAMMING_BIT2 = 0x02,			//PIN added, source RF
	RF_PROGRAMMING_BIT3 = 0x03,			//PIN deleted, source RF
	RF_PROGRAMMING_BIT4 = 0x04,			//PIN changed
	RF_PROGRAMMING_BIT5 = 0x05,			//RFID code added, Source RF
	RF_PROGRAMMING_BIT6 = 0x06,			//RFID code deleted, Source RF
}rf_programming_event_code_e;


typedef enum
{
	RESERVE_PROGRAMMING_BIT0 = 0x00,
}reserve_programming_event_code_e;

typedef enum
{
	RFID_PROGRAMMING_BIT0 = 0x01,		//Unknown or manufacturer-specific keypad programming event
	RFID_PROGRAMMING_BIT5 = 0x05,		//ID Added, Source: RFID
	RFID_PROGRAMMING_BIT6 = 0x06,		//ID Deleted, Source: RFID
}rfid_programming_event_code_e;
/**************************************enum zigbee programming event**********************************************/
/**************************************enum zigbee event**********************************************************/




