
/* File generated by gen_cfile.py. Should not be modified. */

#include "ObjDict.h"

/**************************************************************************/
/* Declaration of the mapped variables                                    */
/**************************************************************************/
UNS8 DI1 = 0x0;		/* Mapped at index 0x2000, subindex 0x00 */
UNS8 DI2 = 0x0;		/* Mapped at index 0x2001, subindex 0x00 */
UNS8 DO1 = 0x0;		/* Mapped at index 0x2100, subindex 0x00 */
UNS8 DO2 = 0x0;		/* Mapped at index 0x2101, subindex 0x00 */

/**************************************************************************/
/* Declaration of the value range types                                   */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 ObjDict_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 ObjDict_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 ObjDict_iam_a_slave = 0;

TIMER_HANDLE ObjDict_heartBeatTimers[1] = {TIMER_NONE};

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 ObjDict_obj1000 = 0x30191;	/* 197009 */
                    subindex ObjDict_Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1000 }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 ObjDict_obj1001 = 0x0;	/* 0 */
                    subindex ObjDict_Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_obj1001 }
                     };

/* index 0x1003 :   Pre-defined Error Field */
                    UNS8 ObjDict_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1003[] = 
                    {
                      0x0	/* 0 */
                    };
                    ODCallback_t ObjDict_Index1003_callbacks[] = 
                     {
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1003 },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1003[0] }
                     };

/* index 0x1005 :   SYNC COB ID. */
                    UNS32 ObjDict_obj1005 = 0x40000080;	/* 1073741952 */
                    ODCallback_t ObjDict_Index1005_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index1005[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1005 }
                     };

/* index 0x1006 :   Communication / Cycle Period. */
                    UNS32 ObjDict_obj1006 = 0xF4240;	/* 1000000 */
                    ODCallback_t ObjDict_Index1006_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index1006[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1006 }
                     };

/* index 0x1014 :   Emergency COB ID */
                    UNS32 ObjDict_obj1014 = 0x0;   /* 0 */

/* index 0x1016 :   Consumer Heartbeat Time. */
                    UNS8 ObjDict_highestSubIndex_obj1016 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1016[] = 
                    {
                      0x4005DC	/* 4195804 */
                    };
                    subindex ObjDict_Index1016[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1016 },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1016[0] }
                     };

/* index 0x1017 :   Producer Heartbeat Time */ 
                    UNS16 ObjDict_obj1017 = 0x0;   /* 0 */

/* index 0x1018 :   Identity. */
                    UNS8 ObjDict_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1018_Vendor_ID = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1018_Product_Code = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1018_Revision_Number = 0x0;	/* 0 */
                    UNS32 ObjDict_obj1018_Serial_Number = 0x0;	/* 0 */
                    subindex ObjDict_Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1018 },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Vendor_ID },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Product_Code },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Revision_Number },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Serial_Number }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;	/* 1536 */
                    UNS32 ObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580;	/* 1408 */
                    subindex ObjDict_Index1200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1200 },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO },
                       { RO, uint32, sizeof (UNS32), (void*)&ObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO }
                     };

/* index 0x1280 :   Client SDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1280 = 3; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1280_COB_ID_Client_to_Server_Transmit_SDO = 0x640;	/* 1600 */
                    UNS32 ObjDict_obj1280_COB_ID_Server_to_Client_Receive_SDO = 0x5C0;	/* 1472 */
                    UNS8 ObjDict_obj1280_Node_ID_of_the_SDO_Server = 0x40;	/* 64 */
                    subindex ObjDict_Index1280[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1280 },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1280_COB_ID_Client_to_Server_Transmit_SDO },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1280_COB_ID_Server_to_Client_Receive_SDO },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1280_Node_ID_of_the_SDO_Server }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1400 = 5; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1400_COB_ID_used_by_PDO = 0x181;	/* 385 */
                    UNS8 ObjDict_obj1400_Transmission_Type = 0x1;	/* 1 */
                    UNS16 ObjDict_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1400_Event_Timer = 0x0;	/* 0 */
                    subindex ObjDict_Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1400 },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1400_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1400_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1400_Event_Timer }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1600 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1600[] = 
                    {
                      0x20000008	/* 536870920 */
                    };
                    subindex ObjDict_Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1600 },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1600[0] }
                     };

/* index 0x1800 :   Transmit PDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1800 = 5; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1800_COB_ID_used_by_PDO = 0x201;	/* 513 */
                    UNS8 ObjDict_obj1800_Transmission_Type = 0xFF;	/* 255 */
                    UNS16 ObjDict_obj1800_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1800_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1800_Event_Timer = 0x0;	/* 0 */
                    ODCallback_t ObjDict_Index1800_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1800[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1800 },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1800_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1800_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&ObjDict_obj1800_Event_Timer }
                     };

/* index 0x1A00 :   Transmit PDO 1 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1A00 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1A00[] = 
                    {
                      0x21000008	/* 553648136 */
                    };
                    subindex ObjDict_Index1A00[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1A00 },
                       { RW, uint32, sizeof (UNS32), (void*)&ObjDict_obj1A00[0] }
                     };

/* index 0x2000 :   Mapped variable DI1 */
                    subindex ObjDict_Index2000[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&DI1 }
                     };

/* index 0x2001 :   Mapped variable DI2 */
                    subindex ObjDict_Index2001[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&DI2 }
                     };

/* index 0x2100 :   Mapped variable DO1 */
                    subindex ObjDict_Index2100[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&DO1 }
                     };

/* index 0x2101 :   Mapped variable DO2 */
                    subindex ObjDict_Index2101[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&DO2 }
                     };

const indextable ObjDict_objdict[] = 
{
  { (subindex*)ObjDict_Index1000,sizeof(ObjDict_Index1000)/sizeof(ObjDict_Index1000[0]), 0x1000},
  { (subindex*)ObjDict_Index1001,sizeof(ObjDict_Index1001)/sizeof(ObjDict_Index1001[0]), 0x1001},
  { (subindex*)ObjDict_Index1005,sizeof(ObjDict_Index1005)/sizeof(ObjDict_Index1005[0]), 0x1005},
  { (subindex*)ObjDict_Index1006,sizeof(ObjDict_Index1006)/sizeof(ObjDict_Index1006[0]), 0x1006},
  { (subindex*)ObjDict_Index1016,sizeof(ObjDict_Index1016)/sizeof(ObjDict_Index1016[0]), 0x1016},
  { (subindex*)ObjDict_Index1018,sizeof(ObjDict_Index1018)/sizeof(ObjDict_Index1018[0]), 0x1018},
  { (subindex*)ObjDict_Index1200,sizeof(ObjDict_Index1200)/sizeof(ObjDict_Index1200[0]), 0x1200},
  { (subindex*)ObjDict_Index1280,sizeof(ObjDict_Index1280)/sizeof(ObjDict_Index1280[0]), 0x1280},
  { (subindex*)ObjDict_Index1400,sizeof(ObjDict_Index1400)/sizeof(ObjDict_Index1400[0]), 0x1400},
  { (subindex*)ObjDict_Index1600,sizeof(ObjDict_Index1600)/sizeof(ObjDict_Index1600[0]), 0x1600},
  { (subindex*)ObjDict_Index1800,sizeof(ObjDict_Index1800)/sizeof(ObjDict_Index1800[0]), 0x1800},
  { (subindex*)ObjDict_Index1A00,sizeof(ObjDict_Index1A00)/sizeof(ObjDict_Index1A00[0]), 0x1A00},
  { (subindex*)ObjDict_Index2000,sizeof(ObjDict_Index2000)/sizeof(ObjDict_Index2000[0]), 0x2000},
  { (subindex*)ObjDict_Index2001,sizeof(ObjDict_Index2001)/sizeof(ObjDict_Index2001[0]), 0x2001},
  { (subindex*)ObjDict_Index2100,sizeof(ObjDict_Index2100)/sizeof(ObjDict_Index2100[0]), 0x2100},
  { (subindex*)ObjDict_Index2101,sizeof(ObjDict_Index2101)/sizeof(ObjDict_Index2101[0]), 0x2101},
};

const indextable * ObjDict_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
	int i;
	*callbacks = NULL;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1005: i = 2;*callbacks = ObjDict_Index1005_callbacks; break;
		case 0x1006: i = 3;*callbacks = ObjDict_Index1006_callbacks; break;
		case 0x1016: i = 4;break;
		case 0x1018: i = 5;break;
		case 0x1200: i = 6;break;
		case 0x1280: i = 7;break;
		case 0x1400: i = 8;break;
		case 0x1600: i = 9;break;
		case 0x1800: i = 10;*callbacks = ObjDict_Index1800_callbacks; break;
		case 0x1A00: i = 11;break;
		case 0x2000: i = 12;break;
		case 0x2001: i = 13;break;
		case 0x2100: i = 14;break;
		case 0x2101: i = 15;break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &ObjDict_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status ObjDict_PDO_status[1] = {s_PDO_status_Initializer};

quick_index ObjDict_firstIndex = {
  6, /* SDO_SVR */
  7, /* SDO_CLT */
  8, /* PDO_RCV */
  9, /* PDO_RCV_MAP */
  10, /* PDO_TRS */
  11 /* PDO_TRS_MAP */
};

quick_index ObjDict_lastIndex = {
  6, /* SDO_SVR */
  7, /* SDO_CLT */
  8, /* PDO_RCV */
  9, /* PDO_RCV_MAP */
  10, /* PDO_TRS */
  11 /* PDO_TRS_MAP */
};

UNS16 ObjDict_ObjdictSize = sizeof(ObjDict_objdict)/sizeof(ObjDict_objdict[0]); 

CO_Data ObjDict_Data = CANOPEN_NODE_DATA_INITIALIZER(ObjDict);

