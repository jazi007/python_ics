
//
// WARNING: This file was auto generated and should not be modified directly!
// Any changes here will be overwritten!
//

#include "setup_module_auto_defines.h"
#include <Python.h>
#include "ics/icsnVC40.h"

int setup_module_auto_defines(PyObject * module)
{
	int result = 0;

	result += PyModule_AddIntMacro(module, NEOVI_COMMTYPE_RS232);
	result += PyModule_AddIntMacro(module, NEOVI_COMMTYPE_USB_BULK);
	result += PyModule_AddIntMacro(module, NEOVI_COMMTYPE_TCPIP);
	result += PyModule_AddIntMacro(module, NEOVI_COMMTYPE_FIRE_USB);
	result += PyModule_AddIntMacro(module, NETID_DEVICE);
	result += PyModule_AddIntMacro(module, NETID_HSCAN);
	result += PyModule_AddIntMacro(module, NETID_MSCAN);
	result += PyModule_AddIntMacro(module, NETID_SWCAN);
	result += PyModule_AddIntMacro(module, NETID_LSFTCAN);
	result += PyModule_AddIntMacro(module, NETID_FORDSCP);
	result += PyModule_AddIntMacro(module, NETID_J1708);
	result += PyModule_AddIntMacro(module, NETID_AUX);
	result += PyModule_AddIntMacro(module, NETID_JVPW);
	result += PyModule_AddIntMacro(module, NETID_ISO);
	result += PyModule_AddIntMacro(module, NETID_ISOPIC);
	result += PyModule_AddIntMacro(module, NETID_MAIN51);
	result += PyModule_AddIntMacro(module, NETID_RED);
	result += PyModule_AddIntMacro(module, NETID_SCI);
	result += PyModule_AddIntMacro(module, NETID_ISO2);
	result += PyModule_AddIntMacro(module, NETID_ISO14230);
	result += PyModule_AddIntMacro(module, NETID_LIN);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET1);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET2);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET3);
	result += PyModule_AddIntMacro(module, NETID_ISO3);
	result += PyModule_AddIntMacro(module, NETID_HSCAN2);
	result += PyModule_AddIntMacro(module, NETID_HSCAN3);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET4);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET5);
	result += PyModule_AddIntMacro(module, NETID_ISO4);
	result += PyModule_AddIntMacro(module, NETID_LIN2);
	result += PyModule_AddIntMacro(module, NETID_LIN3);
	result += PyModule_AddIntMacro(module, NETID_LIN4);
	result += PyModule_AddIntMacro(module, NETID_MOST);
	result += PyModule_AddIntMacro(module, NETID_RED_APP_ERROR);
	result += PyModule_AddIntMacro(module, NETID_CGI);
	result += PyModule_AddIntMacro(module, NETID_3G_RESET_STATUS);
	result += PyModule_AddIntMacro(module, NETID_3G_FB_STATUS);
	result += PyModule_AddIntMacro(module, NETID_3G_APP_SIGNAL_STATUS);
	result += PyModule_AddIntMacro(module, NETID_3G_READ_DATALINK_CM_TX_MSG);
	result += PyModule_AddIntMacro(module, NETID_3G_READ_DATALINK_CM_RX_MSG);
	result += PyModule_AddIntMacro(module, NETID_3G_LOGGING_OVERFLOW);
	result += PyModule_AddIntMacro(module, NETID_3G_READ_SETTINGS_EX);
	result += PyModule_AddIntMacro(module, NETID_HSCAN4);
	result += PyModule_AddIntMacro(module, NETID_HSCAN5);
	result += PyModule_AddIntMacro(module, NETID_RS232);
	result += PyModule_AddIntMacro(module, NETID_UART);
	result += PyModule_AddIntMacro(module, NETID_UART2);
	result += PyModule_AddIntMacro(module, NETID_UART3);
	result += PyModule_AddIntMacro(module, NETID_UART4);
	result += PyModule_AddIntMacro(module, NETID_SWCAN2);
	result += PyModule_AddIntMacro(module, NETID_ETHERNET_DAQ);
	result += PyModule_AddIntMacro(module, NETID_DATA_TO_HOST);
	result += PyModule_AddIntMacro(module, NETID_TEXTAPI_TO_HOST);
	result += PyModule_AddIntMacro(module, NETID_I2C1);
	result += PyModule_AddIntMacro(module, NETID_SPI1);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET6);
	result += PyModule_AddIntMacro(module, NETID_RED_VBAT);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET7);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET8);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET9);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET10);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET11);
	result += PyModule_AddIntMacro(module, NETID_FLEXRAY1A);
	result += PyModule_AddIntMacro(module, NETID_FLEXRAY1B);
	result += PyModule_AddIntMacro(module, NETID_FLEXRAY2A);
	result += PyModule_AddIntMacro(module, NETID_FLEXRAY2B);
	result += PyModule_AddIntMacro(module, NETID_LIN5);
	result += PyModule_AddIntMacro(module, NETID_FLEXRAY);
	result += PyModule_AddIntMacro(module, NETID_FLEXRAY2);
	result += PyModule_AddIntMacro(module, NETID_OP_ETHERNET12);
	result += PyModule_AddIntMacro(module, NETID_MOST25);
	result += PyModule_AddIntMacro(module, NETID_MOST50);
	result += PyModule_AddIntMacro(module, NETID_MOST150);
	result += PyModule_AddIntMacro(module, NETID_ETHERNET);
	result += PyModule_AddIntMacro(module, NETID_GMFSA);
	result += PyModule_AddIntMacro(module, NETID_TCP);
	result += PyModule_AddIntMacro(module, NETID_HSCAN6);
	result += PyModule_AddIntMacro(module, NETID_HSCAN7);
	result += PyModule_AddIntMacro(module, NETID_LIN6);
	result += PyModule_AddIntMacro(module, NETID_LSFTCAN2);
	result += PyModule_AddIntMacro(module, NETID_HW_COM_LATENCY_TEST);
	result += PyModule_AddIntMacro(module, NETID_DEVICE_STATUS);
	result += PyModule_AddIntMacro(module, NETID_MAX);
	result += PyModule_AddIntMacro(module, NETID_INVALID);
	result += PyModule_AddIntMacro(module, NEODEVICE_UNKNOWN);
	result += PyModule_AddIntMacro(module, NEODEVICE_BLUE);
	result += PyModule_AddIntMacro(module, NEODEVICE_ECU_AVB);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADSUPERMOON);
	result += PyModule_AddIntMacro(module, NEODEVICE_DW_VCAN);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADMOON2);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADGIGALOG);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCAN41);
	result += PyModule_AddIntMacro(module, NEODEVICE_FIRE);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADPLUTO);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCAN42_EL);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADIO_CANHUB);
	result += PyModule_AddIntMacro(module, NEODEVICE_NEOECU12);
	result += PyModule_AddIntMacro(module, NEODEVICE_OBD2_LCBADGE);
	result += PyModule_AddIntMacro(module, NEODEVICE_RAD_MOON_DUO);
	result += PyModule_AddIntMacro(module, NEODEVICE_ONYX);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCAN3);
	result += PyModule_AddIntMacro(module, NEODEVICE_JUPITER);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCAN4_IND);
	result += PyModule_AddIntMacro(module, NEODEVICE_GIGASTAR);
	result += PyModule_AddIntMacro(module, NEODEVICE_RED);
	result += PyModule_AddIntMacro(module, NEODEVICE_ECU);
	result += PyModule_AddIntMacro(module, NEODEVICE_IEVB);
	result += PyModule_AddIntMacro(module, NEODEVICE_PENDANT);
	result += PyModule_AddIntMacro(module, NEODEVICE_OBD2_PRO);
	result += PyModule_AddIntMacro(module, NEODEVICE_ECUCHIP_UART);
	result += PyModule_AddIntMacro(module, NEODEVICE_PLASMA);
	result += PyModule_AddIntMacro(module, NEODEVICE_DONT_REUSE0);
	result += PyModule_AddIntMacro(module, NEODEVICE_NEOANALOG);
	result += PyModule_AddIntMacro(module, NEODEVICE_CT_OBD);
	result += PyModule_AddIntMacro(module, NEODEVICE_DONT_REUSE1);
	result += PyModule_AddIntMacro(module, NEODEVICE_DONT_REUSE2);
	result += PyModule_AddIntMacro(module, NEODEVICE_ION);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADSTAR);
	result += PyModule_AddIntMacro(module, NEODEVICE_DONT_REUSE3);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCAN44);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCAN42);
	result += PyModule_AddIntMacro(module, NEODEVICE_CMPROBE);
	result += PyModule_AddIntMacro(module, NEODEVICE_EEVB);
	result += PyModule_AddIntMacro(module, NEODEVICE_VCANRF);
	result += PyModule_AddIntMacro(module, NEODEVICE_FIRE2);
	result += PyModule_AddIntMacro(module, NEODEVICE_FLEX);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADGALAXY);
	result += PyModule_AddIntMacro(module, NEODEVICE_RADSTAR2);
	result += PyModule_AddIntMacro(module, NEODEVICE_VIVIDCAN);
	result += PyModule_AddIntMacro(module, NEODEVICE_OBD2_SIM);
	result += PyModule_AddIntMacro(module, NEODEVICE_ANY_PLASMA);
	result += PyModule_AddIntMacro(module, NEODEVICE_ANY_ION);
	result += PyModule_AddIntMacro(module, NEODEVICE_NEOECUCHIP);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_MSCAN);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN2);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN3);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_SWCAN);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN4);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN5);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN6);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_HSCAN7);
	result += PyModule_AddIntMacro(module, ISO15765_2_NETWORK_SWCAN2);
	result += PyModule_AddIntMacro(module, PLASMA_SLAVE1_OFFSET);
	result += PyModule_AddIntMacro(module, PLASMA_SLAVE2_OFFSET);
	result += PyModule_AddIntMacro(module, PLASMA_SLAVE_NUM);
	result += PyModule_AddIntMacro(module, PLASMA_SLAVE1_OFFSET_RANGE2);
	result += PyModule_AddIntMacro(module, PLASMA_SLAVE2_OFFSET_RANGE2);
	result += PyModule_AddIntMacro(module, PLASMA_SLAVE3_OFFSET_RANGE2);
	result += PyModule_AddIntMacro(module, SCRIPT_STATUS_STOPPED);
	result += PyModule_AddIntMacro(module, SCRIPT_STATUS_RUNNING);
	result += PyModule_AddIntMacro(module, SCRIPT_LOCATION_FLASH_MEM);
	result += PyModule_AddIntMacro(module, SCRIPT_LOCATION_INTERNAL_FLASH);
	result += PyModule_AddIntMacro(module, SCRIPT_LOCATION_SDCARD);
	result += PyModule_AddIntMacro(module, SCRIPT_LOCATION_VCAN3_MEM);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CUSTOM);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CAN);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_GMLAN);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_J1850VPW);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_J1850PWM);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_ISO9141);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_Keyword2000);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_GM_ALDL_UART);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CHRYSLER_CCD);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CHRYSLER_SCI);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_FORD_UBP);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_BEAN);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_LIN);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_J1708);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CHRYSLER_JVPW);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_J1939);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_FLEXRAY);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_MOST);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CGI);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_GME_CIM_SCL_KLINE);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_SPI);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_I2C);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_GENERIC_UART);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_JTAG);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_UNIO);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_DALLAS_1WIRE);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_GENERIC_MANCHSESTER);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_SENT_PROTOCOL);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_UART);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_ETHERNET);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_CANFD);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_GMFSA);
	result += PyModule_AddIntMacro(module, SPY_PROTOCOL_TCP);
	result += PyModule_AddIntMacro(module, SPY_STATUS_GLOBAL_ERR);
	result += PyModule_AddIntMacro(module, SPY_STATUS_TX_MSG);
	result += PyModule_AddIntMacro(module, SPY_STATUS_XTD_FRAME);
	result += PyModule_AddIntMacro(module, SPY_STATUS_REMOTE_FRAME);
	result += PyModule_AddIntMacro(module, SPY_STATUS_CRC_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS_CAN_ERROR_PASSIVE);
	result += PyModule_AddIntMacro(module, SPY_STATUS_HEADERCRC_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS_INCOMPLETE_FRAME);
	result += PyModule_AddIntMacro(module, SPY_STATUS_LOST_ARBITRATION);
	result += PyModule_AddIntMacro(module, SPY_STATUS_UNDEFINED_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS_CAN_BUS_OFF);
	result += PyModule_AddIntMacro(module, SPY_STATUS_BUS_RECOVERED);
	result += PyModule_AddIntMacro(module, SPY_STATUS_BUS_SHORTED_PLUS);
	result += PyModule_AddIntMacro(module, SPY_STATUS_BUS_SHORTED_GND);
	result += PyModule_AddIntMacro(module, SPY_STATUS_CHECKSUM_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS_BAD_MESSAGE_BIT_TIME_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS_TX_NOMATCH);
	result += PyModule_AddIntMacro(module, SPY_STATUS_COMM_IN_OVERFLOW);
	result += PyModule_AddIntMacro(module, SPY_STATUS_EXPECTED_LEN_MISMATCH);
	result += PyModule_AddIntMacro(module, SPY_STATUS_MSG_NO_MATCH);
	result += PyModule_AddIntMacro(module, SPY_STATUS_BREAK);
	result += PyModule_AddIntMacro(module, SPY_STATUS_AVSI_REC_OVERFLOW);
	result += PyModule_AddIntMacro(module, SPY_STATUS_TEST_TRIGGER);
	result += PyModule_AddIntMacro(module, SPY_STATUS_AUDIO_COMMENT);
	result += PyModule_AddIntMacro(module, SPY_STATUS_GPS_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS_ANALOG_DIGITAL_INPUT);
	result += PyModule_AddIntMacro(module, SPY_STATUS_TEXT_COMMENT);
	result += PyModule_AddIntMacro(module, SPY_STATUS_NETWORK_MESSAGE_TYPE);
	result += PyModule_AddIntMacro(module, SPY_STATUS_VSI_TX_UNDERRUN);
	result += PyModule_AddIntMacro(module, SPY_STATUS_VSI_IFR_CRC_BIT);
	result += PyModule_AddIntMacro(module, SPY_STATUS_INIT_MESSAGE);
	result += PyModule_AddIntMacro(module, SPY_STATUS_LIN_MASTER);
	result += PyModule_AddIntMacro(module, SPY_STATUS_CANFD);
	result += PyModule_AddIntMacro(module, SPY_STATUS_PDU);
	result += PyModule_AddIntMacro(module, SPY_STATUS_FLEXRAY_PDU);
	result += PyModule_AddIntMacro(module, SPY_STATUS_HIGH_SPEED);
	result += PyModule_AddIntMacro(module, SPY_STATUS_EXTENDED);
	result += PyModule_AddIntMacro(module, SPY_STATUS_FLEXRAY_PDU_UPDATE_BIT_SET);
	result += PyModule_AddIntMacro(module, SPY_STATUS_FLEXRAY_PDU_NO_UPDATE_BIT);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_HAS_VALUE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_VALUE_IS_BOOLEAN);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_HIGH_VOLTAGE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LONG_MESSAGE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_GLOBAL_CHANGE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ERROR_FRAME);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_END_OF_LONG_MESSAGE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ERR_RX_BREAK_NOT_0);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ERR_RX_BREAK_TOO_SHORT);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ERR_RX_SYNC_NOT_55);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ERR_RX_DATA_GREATER_8);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ERR_TX_RX_MISMATCH);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ERR_MSG_ID_PARITY);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ISO_FRAME_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_SYNC_FRAME_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ISO_OVERFLOW_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_ID_FRAME_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ISO_PARITY_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_SLAVE_BYTE_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_RX_TIMEOUT_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_LIN_NO_SLAVE_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_LIN_JUST_BREAK_SYNC);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_LIN_SLAVE_DATA_TOO_SHORT);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_LIN_ONLY_UPDATE_SLAVE_TABLE_ONCE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_PACKET_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_LOW_LEVEL);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_CONTROL_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_MHP_USER_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_MHP_CONTROL_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_I2S_DUMP);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_TOO_SHORT);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_MOST50);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_MOST150);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_MOST_CHANGED_PAR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ETHERNET_CRC_ERROR);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ETHERNET_FRAME_TOO_SHORT);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ETHERNET_FCS_AVAILABLE);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ETHERNET_NO_PADDING);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_ETHERNET_PREEMPTION_ENABLED);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_FLEXRAY_TX_AB);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_FLEXRAY_TX_AB_NO_A);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_FLEXRAY_TX_AB_NO_B);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_FLEXRAY_TX_AB_NO_MATCH);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_FLEXRAY_NO_CRC);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_FLEXRAY_NO_HEADERCRC);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_CAN_ISO15765_LOGICAL_FRAME);
	result += PyModule_AddIntMacro(module, SPY_STATUS2_CAN_HAVE_LINK_DATA);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_CANFD_ESI);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_CANFD_IDE);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_CANFD_RTR);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_CANFD_FDF);
	result += PyModule_AddIntMacro(module, SPY_STATUS3_CANFD_BRS);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_HS_CAN_CNF1);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_HS_CAN_CNF2);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_HS_CAN_CNF3);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_HS_CAN_MODE);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_MS_CAN_CNF1);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_MS_CAN_CNF2);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_MS_CAN_CNF3);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_SW_CAN_CNF1);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_SW_CAN_CNF2);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_SW_CAN_CNF3);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_LSFT_CAN_CNF1);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_LSFT_CAN_CNF2);
	result += PyModule_AddIntMacro(module, NEO_CFG_MPIC_LSFT_CAN_CNF3);
	result += PyModule_AddObject(module, "NEOVI_TIMESTAMP_2", PyFloat_FromDouble(NEOVI_TIMESTAMP_2));
	result += PyModule_AddObject(module, "NEOVI_TIMESTAMP_1", PyFloat_FromDouble(NEOVI_TIMESTAMP_1));
	result += PyModule_AddObject(module, "NEOVIPRO_VCAN_TIMESTAMP_2", PyFloat_FromDouble(NEOVIPRO_VCAN_TIMESTAMP_2));
	result += PyModule_AddObject(module, "NEOVIPRO_VCAN_TIMESTAMP_1", PyFloat_FromDouble(NEOVIPRO_VCAN_TIMESTAMP_1));
	result += PyModule_AddObject(module, "NEOVI6_VCAN_TIMESTAMP_2", PyFloat_FromDouble(NEOVI6_VCAN_TIMESTAMP_2));
	result += PyModule_AddObject(module, "NEOVI6_VCAN_TIMESTAMP_1", PyFloat_FromDouble(NEOVI6_VCAN_TIMESTAMP_1));
	result += PyModule_AddObject(module, "NEOVI_RED_TIMESTAMP_2_25NS", PyFloat_FromDouble(NEOVI_RED_TIMESTAMP_2_25NS));
	result += PyModule_AddObject(module, "NEOVI_RED_TIMESTAMP_1_25NS", PyFloat_FromDouble(NEOVI_RED_TIMESTAMP_1_25NS));
	result += PyModule_AddObject(module, "NEOVI_RED_TIMESTAMP_2_10NS", PyFloat_FromDouble(NEOVI_RED_TIMESTAMP_2_10NS));
	result += PyModule_AddObject(module, "NEOVI_RED_TIMESTAMP_1_10NS", PyFloat_FromDouble(NEOVI_RED_TIMESTAMP_1_10NS));
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NONE);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_VSI);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_AVT_716);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NI_CAN);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NEOVI);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_AVT_717);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NEOv6_VCAN);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_DOUBLE_SEC);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NEORED_10US);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NEORED_25NS);
	result += PyModule_AddIntMacro(module, HARDWARE_TIMESTAMP_ID_NEORED_10NS);
	result += PyModule_AddIntMacro(module, CANNODE_STATUS_COREMINI_IS_RUNNING);
	result += PyModule_AddIntMacro(module, CANNODE_STATUS_IN_BOOTLOADER);
	result += PyModule_AddIntMacro(module, MAIN_VNET);
	result += PyModule_AddIntMacro(module, SLAVE_VNET_A);
	result += PyModule_AddIntMacro(module, SLAVE_VNET_B);
	result += PyModule_AddIntMacro(module, WIFI_CONNECTION);
	// enum
	result += PyModule_AddIntMacro(module, AUTO);
	result += PyModule_AddIntMacro(module, USE_TQ);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, BPS20);
	result += PyModule_AddIntMacro(module, BPS33);
	result += PyModule_AddIntMacro(module, BPS50);
	result += PyModule_AddIntMacro(module, BPS62);
	result += PyModule_AddIntMacro(module, BPS83);
	result += PyModule_AddIntMacro(module, BPS100);
	result += PyModule_AddIntMacro(module, BPS125);
	result += PyModule_AddIntMacro(module, BPS250);
	result += PyModule_AddIntMacro(module, BPS500);
	result += PyModule_AddIntMacro(module, BPS800);
	result += PyModule_AddIntMacro(module, BPS1000);
	result += PyModule_AddIntMacro(module, BPS666);
	result += PyModule_AddIntMacro(module, BPS2000);
	result += PyModule_AddIntMacro(module, BPS4000);
	result += PyModule_AddIntMacro(module, CAN_BPS5000);
	result += PyModule_AddIntMacro(module, CAN_BPS6667);
	result += PyModule_AddIntMacro(module, CAN_BPS8000);
	result += PyModule_AddIntMacro(module, CAN_BPS10000);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, NORMAL);
	result += PyModule_AddIntMacro(module, DISABLE);
	result += PyModule_AddIntMacro(module, LOOPBACK);
	result += PyModule_AddIntMacro(module, LISTEN_ONLY);
	result += PyModule_AddIntMacro(module, LISTEN_ALL);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, CAN_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, NO_CANFD);
	result += PyModule_AddIntMacro(module, CANFD_ENABLED);
	result += PyModule_AddIntMacro(module, CANFD_BRS_ENABLED);
	result += PyModule_AddIntMacro(module, CANFD_ENABLED_ISO);
	result += PyModule_AddIntMacro(module, CANFD_BRS_ENABLED_ISO);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, CANFD_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, SWCAN_AUTOSWITCH_DISABLED);
	result += PyModule_AddIntMacro(module, SWCAN_AUTOSWITCH_NO_RESISTOR);
	result += PyModule_AddIntMacro(module, SWCAN_AUTOSWITCH_WITH_RESISTOR);
	result += PyModule_AddIntMacro(module, SWCAN_AUTOSWITCH_DISABLED_RESISTOR_ENABLED);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, SWCAN_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, BPS5000);
	result += PyModule_AddIntMacro(module, BPS10400);
	result += PyModule_AddIntMacro(module, BPS33333);
	result += PyModule_AddIntMacro(module, BPS50000);
	result += PyModule_AddIntMacro(module, BPS62500);
	result += PyModule_AddIntMacro(module, BPS71429);
	result += PyModule_AddIntMacro(module, BPS83333);
	result += PyModule_AddIntMacro(module, BPS100000);
	result += PyModule_AddIntMacro(module, BPS117647);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, RESISTOR_ON);
	result += PyModule_AddIntMacro(module, RESISTOR_OFF);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, SLEEP_MODE);
	result += PyModule_AddIntMacro(module, SLOW_MODE);
	result += PyModule_AddIntMacro(module, NORMAL_MODE);
	result += PyModule_AddIntMacro(module, FAST_MODE);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, LIN_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, ISO9141_KEYWORD2000__INIT_STEP_SIZE);
	result += PyModule_AddIntMacro(module, ISO9141_KEYWORD2000_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, UART_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, J1708_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, SRedSettings_SIZE);
	result += PyModule_AddIntMacro(module, STextAPISettings_SIZE);
	result += PyModule_AddIntMacro(module, stChipVersions_SIZE);
	result += PyModule_AddIntMacro(module, SNeoMostGatewaySettings_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, OPETH_FUNC_TAP);
	result += PyModule_AddIntMacro(module, OPETH_FUNC_MEDIACONVERTER);
	result += PyModule_AddIntMacro(module, OPETH_FUNC_TAP_LOW_LATENCY);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, OP_ETH_GENERAL_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, OPETH_LINK_AUTO);
	result += PyModule_AddIntMacro(module, OPETH_LINK_MASTER);
	result += PyModule_AddIntMacro(module, OPETH_LINK_SLAVE);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, OPETH_MAC_SPOOF_DST_ADDR);
	result += PyModule_AddIntMacro(module, OPETH_MAC_SPOOF_SRC_ADDR);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, OP_ETH_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, ETHERNET_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, ETHERNET_SETTINGS2_SIZE);
	result += PyModule_AddIntMacro(module, ETHERNET10G_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, DISK_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, CANTERM_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, TIMESYNC_ICSHARDWARE_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, RADGigalogDiskFormatUnknown);
	result += PyModule_AddIntMacro(module, RADGigalogDiskFormatFAT32);
	result += PyModule_AddIntMacro(module, RADGigalogDiskFormatexFAT);
	// end of enum -  } ERADGigalogDiskFormat;

	// enum
	result += PyModule_AddIntMacro(module, RADGigalogDiskLayoutSpanned);
	result += PyModule_AddIntMacro(module, RADGigalogDiskLayoutRAID0);
	result += PyModule_AddIntMacro(module, RADGigalogDiskLayoutRAID1);
	result += PyModule_AddIntMacro(module, RADGigalogDiskLayoutRAID5);
	result += PyModule_AddIntMacro(module, RADGigalogDiskLayoutIndividual);
	// end of enum -  } ERADGigalogDiskLayout;

	result += PyModule_AddIntMacro(module, SRADGigalogDiskStatus_SIZE);
	result += PyModule_AddIntMacro(module, SRADGigalogDiskStructure_SIZE);
	result += PyModule_AddIntMacro(module, SRADGigalogDiskDetails_SIZE);
	result += PyModule_AddIntMacro(module, SRADGigalogDiskFormatProgress_SIZE);
	result += PyModule_AddIntMacro(module, SRadGigalogSubCmdHdr_SIZE);
	result += PyModule_AddIntMacro(module, SRadGigalogComm_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, SERDESCAM_MODE_PASSTHROUGH);
	result += PyModule_AddIntMacro(module, SERDESCAM_MODE_TAP);
	result += PyModule_AddIntMacro(module, SERDESCAM_MODE_PLAYBACK);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, SERDESCAM_CONFIG_MODE_EXTERNAL_OVER_TAP);
	result += PyModule_AddIntMacro(module, SERDESCAM_CONFIG_MODE_LOCAL_SCRIPT);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, SERDESCAM_BITS_PER_PIXEL_8);
	result += PyModule_AddIntMacro(module, SERDESCAM_BITS_PER_PIXEL_10);
	result += PyModule_AddIntMacro(module, SERDESCAM_BITS_PER_PIXEL_12);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, SERDESCAM_PIXEL_BIT_POS_0);
	result += PyModule_AddIntMacro(module, SERDESCAM_PIXEL_BIT_POS_1);
	result += PyModule_AddIntMacro(module, SERDESCAM_PIXEL_BIT_POS_2);
	result += PyModule_AddIntMacro(module, SERDESCAM_PIXEL_BIT_POS_3);
	// end of enum -  };

	// enum
	result += PyModule_AddIntMacro(module, SERDESCAM_VIDEO_FORMAT_YCBCR_422);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, SERDESCAM_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, REPORT_ON_PERIODIC);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC1);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC2);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC3);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC4);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC5);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC6);
	result += PyModule_AddIntMacro(module, REPORT_ON_LED1);
	result += PyModule_AddIntMacro(module, REPORT_ON_LED2);
	result += PyModule_AddIntMacro(module, REPORT_ON_KLINE);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC3_AIN);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC4_AIN);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC5_AIN);
	result += PyModule_AddIntMacro(module, REPORT_ON_MISC6_AIN);
	result += PyModule_AddIntMacro(module, REPORT_ON_GPS);
	// end of enum -  };

	result += PyModule_AddIntMacro(module, VNETBITS_FEATURE_ANDROID_MSGS);
	result += PyModule_AddIntMacro(module, SFireSettings_SIZE);
	result += PyModule_AddIntMacro(module, VNETBITS_FEATURE_ANDROID_MSGS);
	result += PyModule_AddIntMacro(module, VNETBITS_FEATURE_DISABLE_USB_CHECK);
	result += PyModule_AddIntMacro(module, SFireVnetSettings_SIZE);
	result += PyModule_AddIntMacro(module, SCyanSettings_SIZE);
	result += PyModule_AddIntMacro(module, SVCAN3Settings_SIZE);
	result += PyModule_AddIntMacro(module, SVCAN4Settings_SIZE);
	result += PyModule_AddIntMacro(module, SVCANRFSettings_SIZE);
	result += PyModule_AddIntMacro(module, SECUSettings_SIZE);
	result += PyModule_AddIntMacro(module, SPendantSettings_SIZE);
	result += PyModule_AddIntMacro(module, SIEVBSettings_SIZE);
	result += PyModule_AddIntMacro(module, SEEVBSettings_SIZE);
	result += PyModule_AddIntMacro(module, SRADGalaxySettings_SIZE);
	result += PyModule_AddIntMacro(module, SRADStar2Settings_SIZE);
	result += PyModule_AddIntMacro(module, SRADSuperMoonSettings_SIZE);
	result += PyModule_AddIntMacro(module, SRADMoon2Settings_SIZE);
	result += PyModule_AddIntMacro(module, SRADGigalogSettings_SIZE);
	result += PyModule_AddIntMacro(module, SVividCANSettings_SIZE);
	result += PyModule_AddIntMacro(module, SOBD2SimSettings_SIZE);
	result += PyModule_AddIntMacro(module, CmProbeSettings_SIZE);
	result += PyModule_AddIntMacro(module, OBD2ProSettings_SIZE);
	result += PyModule_AddIntMacro(module, VCAN412Settings_SIZE);
	result += PyModule_AddIntMacro(module, SVCAN412Settings_SIZE);
	result += PyModule_AddIntMacro(module, ECU_AVBSettings_SIZE);
	result += PyModule_AddIntMacro(module, PLUTO_NUM_PRIORITY);
	result += PyModule_AddIntMacro(module, PLUTO_MAX_L2_POLICING);
	result += PyModule_AddIntMacro(module, PLUTO_MAX_L2_ADDRESS_LOOKUP);
	result += PyModule_AddIntMacro(module, PLUTO_MAX_VLAN_LOOKUP);
	result += PyModule_AddIntMacro(module, PLUTO_MAX_FORWARDING_ENTRIES);
	result += PyModule_AddIntMacro(module, PLUTO_MAX_MAC_CONFIG_ENTRIES);
	result += PyModule_AddIntMacro(module, PLUTO_MAX_RETAGGING_ENTRIES);
	result += PyModule_AddIntMacro(module, MAX_VL_POLICING_ENTRIES);
	result += PyModule_AddIntMacro(module, MAX_VL_FORWARDING_ENTRIES);
	result += PyModule_AddIntMacro(module, SRADPlutoSettings_SIZE);
	result += PyModule_AddIntMacro(module, CANHubSettings_SIZE);
	result += PyModule_AddIntMacro(module, SFlexVnetzSettings_Size);
	// enum
	result += PyModule_AddIntMacro(module, flexVnetModeDisabled);
	result += PyModule_AddIntMacro(module, flexVnetModeOneSingle);
	result += PyModule_AddIntMacro(module, flexVnetModeOneDual);
	result += PyModule_AddIntMacro(module, flexVnetModeTwoSingle);
	result += PyModule_AddIntMacro(module, flexVnetModeColdStart);
	// end of enum -  } flexVnetMode;

	result += PyModule_AddIntMacro(module, SNeoECU12Settings_SIZE);
	result += PyModule_AddIntMacro(module, GS_VERSION);
	result += PyModule_AddIntMacro(module, GLOBAL_SETTINGS_SIZE);
	result += PyModule_AddIntMacro(module, NEOVI_3G_MAX_SETTINGS_SIZE);
	// enum
	result += PyModule_AddIntMacro(module, DeviceFireSettingsType);
	result += PyModule_AddIntMacro(module, DeviceFireVnetSettingsType);
	result += PyModule_AddIntMacro(module, DeviceFire2SettingsType);
	result += PyModule_AddIntMacro(module, DeviceVCAN3SettingsType);
	result += PyModule_AddIntMacro(module, DeviceRADGalaxySettingsType);
	result += PyModule_AddIntMacro(module, DeviceRADStar2SettingsType);
	result += PyModule_AddIntMacro(module, DeviceVCAN4SettingsType);
	result += PyModule_AddIntMacro(module, DeviceVCAN412SettingsType);
	result += PyModule_AddIntMacro(module, DeviceVividCANSettingsType);
	result += PyModule_AddIntMacro(module, DeviceECU_AVBSettingsType);
	result += PyModule_AddIntMacro(module, DeviceRADSuperMoonSettingsType);
	result += PyModule_AddIntMacro(module, DeviceRADMoon2SettingsType);
	result += PyModule_AddIntMacro(module, DeviceRADPlutoSettingsType);
	result += PyModule_AddIntMacro(module, DeviceRADGigalogSettingsType);
	result += PyModule_AddIntMacro(module, DeviceSettingsTypeMax);
	// end of enum -  } EDeviceSettingsType;

	// enum
	result += PyModule_AddIntMacro(module, PlasmaIonVnetChannelMain);
	result += PyModule_AddIntMacro(module, PlasmaIonVnetChannelA);
	result += PyModule_AddIntMacro(module, PlasmaIonVnetChannelB);
	result += PyModule_AddIntMacro(module, eSoftCore);
	result += PyModule_AddIntMacro(module, eFpgaStatusResp);
	// end of enum -  } EPlasmaIonVnetChannel_t;

	result += PyModule_AddIntMacro(module, stCM_ISO157652_TxMessage_SIZE);
	result += PyModule_AddIntMacro(module, ISO15765_2015_TxMessage_SIZE);
	result += PyModule_AddIntMacro(module, stCM_ISO157652_RxMessage_SIZE);
	result += PyModule_AddIntMacro(module, spyFilterLong_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessage_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessage_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessage_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessage_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessageLong_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessageJ1850_SIZE);
	result += PyModule_AddIntMacro(module, icsSpyMessageVSB_SIZE);
	// enum
	// end of enum -  	}


	return result == 0 ? 1 : 0;
}
