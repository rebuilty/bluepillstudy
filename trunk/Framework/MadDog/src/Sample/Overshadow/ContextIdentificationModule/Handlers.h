#pragma once
#include <ntddk.h>
#include "VTCore.h"
#include "VTUtilAPIs.h"
#include "Vmx/Vmcs.h"
#include "Vmx/Vmx.h"

NTSTATUS HvmSetupVMControlBlock (
    PCPU Cpu,
    PVOID GuestEip,
    PVOID GuestEsp
);