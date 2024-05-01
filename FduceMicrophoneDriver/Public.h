/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_FduceMicrophoneDriver,
    0x5f42890c,0x1d30,0x4bbd,0xaa,0x76,0x7a,0x9b,0x38,0x1a,0x87,0x79);
// {5f42890c-1d30-4bbd-aa76-7a9b381a8779}
