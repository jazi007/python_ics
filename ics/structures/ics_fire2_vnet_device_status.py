# This file was auto generated; Do not modify, if you value your sanity!
import ctypes
import enum

from ics.structures.ethernet_network_status_t import *


class ics_fire2_vnet_device_status(ctypes.Structure):
    _pack_ = 4
    _fields_ = [
        ('ethernetActivationLineEnabled', ctypes.c_uint8),
        ('ethernetStatus', ethernetNetworkStatus_t),
        ('unused', ctypes.c_uint8),
    ]


icsFire2VnetDeviceStatus = ics_fire2_vnet_device_status

