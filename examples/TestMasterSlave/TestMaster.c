
/* File generated by gen_cfile.py. Should not be modified. */

#include "TestMaster.h"

/**************************************************************************/
/* Declaration of the mapped variables                                    */
/**************************************************************************/
UNS8 MasterMap1 = 0x0;		/* Mapped at index 0x2000, subindex 0x00 */
UNS8 MasterMap2 = 0x0;		/* Mapped at index 0x2001, subindex 0x00 */
UNS8 MasterMap3 = 0x0;		/* Mapped at index 0x2002, subindex 0x00 */
UNS8 MasterMap4 = 0x0;		/* Mapped at index 0x2003, subindex 0x00 */
UNS8 MasterMap5 = 0x0;		/* Mapped at index 0x2004, subindex 0x00 */
UNS8 MasterMap6 = 0x0;		/* Mapped at index 0x2005, subindex 0x00 */
UNS8 MasterMap7 = 0x0;		/* Mapped at index 0x2006, subindex 0x00 */
UNS8 MasterMap8 = 0x0;		/* Mapped at index 0x2007, subindex 0x00 */
UNS8 MasterMap9 = 0x0;		/* Mapped at index 0x2008, subindex 0x00 */
UNS32 MasterMap10 = 0x0;		/* Mapped at index 0x2009, subindex 0x00 */
UNS16 MasterMap11 = 0x0;		/* Mapped at index 0x200A, subindex 0x00 */
INTEGER16 MasterMap12 = 0x0;		/* Mapped at index 0x200B, subindex 0x00 */
INTEGER16 MasterMap13 = 0x0;		/* Mapped at index 0x200C, subindex 0x00 */

/**************************************************************************/
/* Declaration of the value range types                                   */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 TestMaster_valueRangeTest (UNS8 typeValue, void * value)
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
UNS8 TestMaster_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 TestMaster_iam_a_slave = 0;

TIMER_HANDLE TestMaster_heartBeatTimers[1] = {TIMER_NONE};

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 TestMaster_obj1000 = 0x12D;	/* 301 */
                    subindex TestMaster_Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&TestMaster_obj1000 }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 TestMaster_obj1001 = 0x0;	/* 0 */
                    subindex TestMaster_Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_obj1001 }
                     };

/* index 0x1003 :   Pre-defined Error Field */
                    UNS8 TestMaster_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1003[] = 
                    {
                      0x0	/* 0 */
                    };
                    ODCallback_t TestMaster_Index1003_callbacks[] = 
                     {
                       NULL,
                       NULL,
                     };
                    subindex TestMaster_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1003 },
                       { RO, uint32, sizeof (UNS32), (void*)&TestMaster_obj1003[0] }
                     };

/* index 0x1005 :   SYNC COB ID. */
                    UNS32 TestMaster_obj1005 = 0x40000080;	/* 1073741952 */
                    ODCallback_t TestMaster_Index1005_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex TestMaster_Index1005[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1005 }
                     };

/* index 0x1006 :   Communication / Cycle Period. */
                    UNS32 TestMaster_obj1006 = 0xC350;	/* 50000 */
                    ODCallback_t TestMaster_Index1006_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex TestMaster_Index1006[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1006 }
                     };

/* index 0x1010 :   Store parameters. */
                    UNS8 TestMaster_highestSubIndex_obj1010 = 4; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1010_Save_All_Parameters = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1010_Save_Communication_Parameters = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1010_Save_Application_Parameters = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1010_Save_Manufacturer_Parameters = 0x0;	/* 0 */
                    subindex TestMaster_Index1010[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1010 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1010_Save_All_Parameters },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1010_Save_Communication_Parameters },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1010_Save_Application_Parameters },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1010_Save_Manufacturer_Parameters }
                     };

/* index 0x1011 :   Restore Default Parameters. */
                    UNS8 TestMaster_highestSubIndex_obj1011 = 4; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1011_Restore_All_Default_Parameters = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1011_Restore_Communication_Default_Parameters = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1011_Restore_Application_Default_Parameters = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1011_Restore_Manufacturer_Default_Parameters = 0x0;	/* 0 */
                    subindex TestMaster_Index1011[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1011 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1011_Restore_All_Default_Parameters },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1011_Restore_Communication_Default_Parameters },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1011_Restore_Application_Default_Parameters },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1011_Restore_Manufacturer_Default_Parameters }
                     };

/* index 0x1014 :   Emergency COB ID. */
                    UNS32 TestMaster_obj1014 = 0x80;	/* 128 */
                    subindex TestMaster_Index1014[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1014 }
                     };

/* index 0x1016 :   Consumer Heartbeat Time. */
                    UNS8 TestMaster_highestSubIndex_obj1016 = 1; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1016[] = 
                    {
                      0x205DC	/* 132572 */
                    };
                    subindex TestMaster_Index1016[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1016 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1016[0] }
                     };

/* index 0x1017 :   Producer Heartbeat Time */ 
                    UNS16 TestMaster_obj1017 = 0x0;   /* 0 */

/* index 0x1018 :   Identity. */
                    UNS8 TestMaster_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1018_Vendor_ID = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1018_Product_Code = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1018_Revision_Number = 0x0;	/* 0 */
                    UNS32 TestMaster_obj1018_Serial_Number = 0x0;	/* 0 */
                    subindex TestMaster_Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1018 },
                       { RO, uint32, sizeof (UNS32), (void*)&TestMaster_obj1018_Vendor_ID },
                       { RO, uint32, sizeof (UNS32), (void*)&TestMaster_obj1018_Product_Code },
                       { RO, uint32, sizeof (UNS32), (void*)&TestMaster_obj1018_Revision_Number },
                       { RO, uint32, sizeof (UNS32), (void*)&TestMaster_obj1018_Serial_Number }
                     };

/* index 0x1280 :   Client SDO 1 Parameter. */
                    UNS8 TestMaster_highestSubIndex_obj1280 = 3; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1280_COB_ID_Client_to_Server_Transmit_SDO = 0x602;	/* 1538 */
                    UNS32 TestMaster_obj1280_COB_ID_Server_to_Client_Receive_SDO = 0x582;	/* 1410 */
                    UNS8 TestMaster_obj1280_Node_ID_of_the_SDO_Server = 0x2;	/* 2 */
                    subindex TestMaster_Index1280[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1280 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1280_COB_ID_Client_to_Server_Transmit_SDO },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1280_COB_ID_Server_to_Client_Receive_SDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1280_Node_ID_of_the_SDO_Server }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 TestMaster_highestSubIndex_obj1400 = 5; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1400_COB_ID_used_by_PDO = 0x200;	/* 512 */
                    UNS8 TestMaster_obj1400_Transmission_Type = 0x1;	/* 1 */
                    UNS16 TestMaster_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestMaster_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1400_Event_Timer = 0x0;	/* 0 */
                    subindex TestMaster_Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1400 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1400_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1400_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1400_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1400_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1400_Event_Timer }
                     };

/* index 0x1401 :   Receive PDO 2 Parameter. */
                    UNS8 TestMaster_highestSubIndex_obj1401 = 5; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1401_COB_ID_used_by_PDO = 0x300;	/* 768 */
                    UNS8 TestMaster_obj1401_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1401_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestMaster_obj1401_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1401_Event_Timer = 0x0;	/* 0 */
                    subindex TestMaster_Index1401[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1401 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1401_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1401_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1401_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1401_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1401_Event_Timer }
                     };

/* index 0x1402 :   Receive PDO 3 Parameter. */
                    UNS8 TestMaster_highestSubIndex_obj1402 = 5; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1402_COB_ID_used_by_PDO = 0x401;	/* 1025 */
                    UNS8 TestMaster_obj1402_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1402_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestMaster_obj1402_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1402_Event_Timer = 0x0;	/* 0 */
                    subindex TestMaster_Index1402[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1402 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1402_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1402_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1402_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1402_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1402_Event_Timer }
                     };

/* index 0x1403 :   Receive PDO 4 Parameter. */
                    UNS8 TestMaster_highestSubIndex_obj1403 = 5; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1403_COB_ID_used_by_PDO = 0x482;	/* 1154 */
                    UNS8 TestMaster_obj1403_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1403_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestMaster_obj1403_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestMaster_obj1403_Event_Timer = 0x0;	/* 0 */
                    subindex TestMaster_Index1403[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1403 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1403_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1403_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1403_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_obj1403_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestMaster_obj1403_Event_Timer }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 TestMaster_highestSubIndex_obj1600 = 10; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1600[] = 
                    {
                      0x20000001,	/* 536870913 */
                      0x20010001,	/* 536936449 */
                      0x20020001,	/* 537001985 */
                      0x20030001,	/* 537067521 */
                      0x20040001,	/* 537133057 */
                      0x20050001,	/* 537198593 */
                      0x20060001,	/* 537264129 */
                      0x20070001,	/* 537329665 */
                      0x20080008,	/* 537395208 */
                      0x20090020	/* 537460768 */
                    };
                    subindex TestMaster_Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1600 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[7] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[8] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1600[9] }
                     };

/* index 0x1601 :   Receive PDO 2 Mapping. */
                    UNS8 TestMaster_highestSubIndex_obj1601 = 1; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1601[] = 
                    {
                      0x200A0010	/* 537526288 */
                    };
                    subindex TestMaster_Index1601[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1601 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1601[0] }
                     };

/* index 0x1602 :   Receive PDO 3 Mapping. */
                    UNS8 TestMaster_highestSubIndex_obj1602 = 1; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1602[] = 
                    {
                      0x200B0010	/* 537591824 */
                    };
                    subindex TestMaster_Index1602[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1602 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1602[0] }
                     };

/* index 0x1603 :   Receive PDO 4 Mapping. */
                    UNS8 TestMaster_highestSubIndex_obj1603 = 1; /* number of subindex - 1*/
                    UNS32 TestMaster_obj1603[] = 
                    {
                      0x200C0010	/* 537657360 */
                    };
                    subindex TestMaster_Index1603[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1603 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestMaster_obj1603[0] }
                     };

/* index 0x1F22 :   Concise DCF. */
                    UNS8 TestMaster_highestSubIndex_obj1F22 = 2; /* number of subindex - 1*/
                    UNS8* TestMaster_obj1F22[] = 
                    {
                      "",
                      "\x01\x00\x00\x00\x17\x10\x00\x02\x00\x00\x00\xe8\x03"
                    };
                    subindex TestMaster_Index1F22[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestMaster_highestSubIndex_obj1F22 },
                       { RW, domain, 0, (void*)&TestMaster_obj1F22[0] },
                       { RW, domain, 13, (void*)&TestMaster_obj1F22[1] }
                     };

/* index 0x2000 :   Mapped variable MasterMap1 */
                    subindex TestMaster_Index2000[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap1 }
                     };

/* index 0x2001 :   Mapped variable MasterMap2 */
                    subindex TestMaster_Index2001[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap2 }
                     };

/* index 0x2002 :   Mapped variable MasterMap3 */
                    subindex TestMaster_Index2002[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap3 }
                     };

/* index 0x2003 :   Mapped variable MasterMap4 */
                    subindex TestMaster_Index2003[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap4 }
                     };

/* index 0x2004 :   Mapped variable MasterMap5 */
                    subindex TestMaster_Index2004[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap5 }
                     };

/* index 0x2005 :   Mapped variable MasterMap6 */
                    subindex TestMaster_Index2005[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap6 }
                     };

/* index 0x2006 :   Mapped variable MasterMap7 */
                    subindex TestMaster_Index2006[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap7 }
                     };

/* index 0x2007 :   Mapped variable MasterMap8 */
                    subindex TestMaster_Index2007[] = 
                     {
                       { RW, boolean, sizeof (UNS8), (void*)&MasterMap8 }
                     };

/* index 0x2008 :   Mapped variable MasterMap9 */
                    subindex TestMaster_Index2008[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&MasterMap9 }
                     };

/* index 0x2009 :   Mapped variable MasterMap10 */
                    subindex TestMaster_Index2009[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&MasterMap10 }
                     };

/* index 0x200A :   Mapped variable MasterMap11 */
                    subindex TestMaster_Index200A[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&MasterMap11 }
                     };

/* index 0x200B :   Mapped variable MasterMap12 */
                    subindex TestMaster_Index200B[] = 
                     {
                       { RW, int16, sizeof (INTEGER16), (void*)&MasterMap12 }
                     };

/* index 0x200C :   Mapped variable MasterMap13 */
                    subindex TestMaster_Index200C[] = 
                     {
                       { RW, int16, sizeof (INTEGER16), (void*)&MasterMap13 }
                     };

const indextable TestMaster_objdict[] = 
{
  { (subindex*)TestMaster_Index1000,sizeof(TestMaster_Index1000)/sizeof(TestMaster_Index1000[0]), 0x1000},
  { (subindex*)TestMaster_Index1001,sizeof(TestMaster_Index1001)/sizeof(TestMaster_Index1001[0]), 0x1001},
  { (subindex*)TestMaster_Index1005,sizeof(TestMaster_Index1005)/sizeof(TestMaster_Index1005[0]), 0x1005},
  { (subindex*)TestMaster_Index1006,sizeof(TestMaster_Index1006)/sizeof(TestMaster_Index1006[0]), 0x1006},
  { (subindex*)TestMaster_Index1010,sizeof(TestMaster_Index1010)/sizeof(TestMaster_Index1010[0]), 0x1010},
  { (subindex*)TestMaster_Index1011,sizeof(TestMaster_Index1011)/sizeof(TestMaster_Index1011[0]), 0x1011},
  { (subindex*)TestMaster_Index1014,sizeof(TestMaster_Index1014)/sizeof(TestMaster_Index1014[0]), 0x1014},
  { (subindex*)TestMaster_Index1016,sizeof(TestMaster_Index1016)/sizeof(TestMaster_Index1016[0]), 0x1016},
  { (subindex*)TestMaster_Index1018,sizeof(TestMaster_Index1018)/sizeof(TestMaster_Index1018[0]), 0x1018},
  { (subindex*)TestMaster_Index1280,sizeof(TestMaster_Index1280)/sizeof(TestMaster_Index1280[0]), 0x1280},
  { (subindex*)TestMaster_Index1400,sizeof(TestMaster_Index1400)/sizeof(TestMaster_Index1400[0]), 0x1400},
  { (subindex*)TestMaster_Index1401,sizeof(TestMaster_Index1401)/sizeof(TestMaster_Index1401[0]), 0x1401},
  { (subindex*)TestMaster_Index1402,sizeof(TestMaster_Index1402)/sizeof(TestMaster_Index1402[0]), 0x1402},
  { (subindex*)TestMaster_Index1403,sizeof(TestMaster_Index1403)/sizeof(TestMaster_Index1403[0]), 0x1403},
  { (subindex*)TestMaster_Index1600,sizeof(TestMaster_Index1600)/sizeof(TestMaster_Index1600[0]), 0x1600},
  { (subindex*)TestMaster_Index1601,sizeof(TestMaster_Index1601)/sizeof(TestMaster_Index1601[0]), 0x1601},
  { (subindex*)TestMaster_Index1602,sizeof(TestMaster_Index1602)/sizeof(TestMaster_Index1602[0]), 0x1602},
  { (subindex*)TestMaster_Index1603,sizeof(TestMaster_Index1603)/sizeof(TestMaster_Index1603[0]), 0x1603},
  { (subindex*)TestMaster_Index1F22,sizeof(TestMaster_Index1F22)/sizeof(TestMaster_Index1F22[0]), 0x1F22},
  { (subindex*)TestMaster_Index2000,sizeof(TestMaster_Index2000)/sizeof(TestMaster_Index2000[0]), 0x2000},
  { (subindex*)TestMaster_Index2001,sizeof(TestMaster_Index2001)/sizeof(TestMaster_Index2001[0]), 0x2001},
  { (subindex*)TestMaster_Index2002,sizeof(TestMaster_Index2002)/sizeof(TestMaster_Index2002[0]), 0x2002},
  { (subindex*)TestMaster_Index2003,sizeof(TestMaster_Index2003)/sizeof(TestMaster_Index2003[0]), 0x2003},
  { (subindex*)TestMaster_Index2004,sizeof(TestMaster_Index2004)/sizeof(TestMaster_Index2004[0]), 0x2004},
  { (subindex*)TestMaster_Index2005,sizeof(TestMaster_Index2005)/sizeof(TestMaster_Index2005[0]), 0x2005},
  { (subindex*)TestMaster_Index2006,sizeof(TestMaster_Index2006)/sizeof(TestMaster_Index2006[0]), 0x2006},
  { (subindex*)TestMaster_Index2007,sizeof(TestMaster_Index2007)/sizeof(TestMaster_Index2007[0]), 0x2007},
  { (subindex*)TestMaster_Index2008,sizeof(TestMaster_Index2008)/sizeof(TestMaster_Index2008[0]), 0x2008},
  { (subindex*)TestMaster_Index2009,sizeof(TestMaster_Index2009)/sizeof(TestMaster_Index2009[0]), 0x2009},
  { (subindex*)TestMaster_Index200A,sizeof(TestMaster_Index200A)/sizeof(TestMaster_Index200A[0]), 0x200A},
  { (subindex*)TestMaster_Index200B,sizeof(TestMaster_Index200B)/sizeof(TestMaster_Index200B[0]), 0x200B},
  { (subindex*)TestMaster_Index200C,sizeof(TestMaster_Index200C)/sizeof(TestMaster_Index200C[0]), 0x200C},
};

const indextable * TestMaster_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
	int i;
	*callbacks = NULL;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1005: i = 2;*callbacks = TestMaster_Index1005_callbacks; break;
		case 0x1006: i = 3;*callbacks = TestMaster_Index1006_callbacks; break;
		case 0x1010: i = 4;break;
		case 0x1011: i = 5;break;
		case 0x1014: i = 6;break;
		case 0x1016: i = 7;break;
		case 0x1018: i = 8;break;
		case 0x1280: i = 9;break;
		case 0x1400: i = 10;break;
		case 0x1401: i = 11;break;
		case 0x1402: i = 12;break;
		case 0x1403: i = 13;break;
		case 0x1600: i = 14;break;
		case 0x1601: i = 15;break;
		case 0x1602: i = 16;break;
		case 0x1603: i = 17;break;
		case 0x1F22: i = 18;break;
		case 0x2000: i = 19;break;
		case 0x2001: i = 20;break;
		case 0x2002: i = 21;break;
		case 0x2003: i = 22;break;
		case 0x2004: i = 23;break;
		case 0x2005: i = 24;break;
		case 0x2006: i = 25;break;
		case 0x2007: i = 26;break;
		case 0x2008: i = 27;break;
		case 0x2009: i = 28;break;
		case 0x200A: i = 29;break;
		case 0x200B: i = 30;break;
		case 0x200C: i = 31;break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &TestMaster_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status TestMaster_PDO_status[1] = {s_PDO_status_Initializer};

quick_index TestMaster_firstIndex = {
  0, /* SDO_SVR */
  9, /* SDO_CLT */
  10, /* PDO_RCV */
  14, /* PDO_RCV_MAP */
  0, /* PDO_TRS */
  0 /* PDO_TRS_MAP */
};

quick_index TestMaster_lastIndex = {
  0, /* SDO_SVR */
  9, /* SDO_CLT */
  13, /* PDO_RCV */
  17, /* PDO_RCV_MAP */
  0, /* PDO_TRS */
  0 /* PDO_TRS_MAP */
};

UNS16 TestMaster_ObjdictSize = sizeof(TestMaster_objdict)/sizeof(TestMaster_objdict[0]); 

CO_Data TestMaster_Data = CANOPEN_NODE_DATA_INITIALIZER(TestMaster);

