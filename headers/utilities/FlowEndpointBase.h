#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 11 member(s).
class FlowEndpointBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FlowEndpointBase@@QEAAXPEAVFlowEndpointMessageReceiver@@KW4EndpointInitializationOptions@@@Z
    void Initialize(FlowEndpointMessageReceiver *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeMessageToEndpointSync@FlowEndpointBase@@QEAA_NPEAUHWND__@@W4StandardMessage@@AEBUValueSet@Collections@Foundation@Windows@winrt@@@Z
    bool InvokeMessageToEndpointSync(HWND__*, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@FlowEndpointBase@@QEAAXXZ
    void Uninitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlowEndpointBase@@UEAA@XZ
    virtual ~FlowEndpointBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreRunningLowIl@FlowEndpointBase@@IEAA_NXZ
    bool AreRunningLowIl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesWindowBelongToCallingProcess@FlowEndpointBase@@IEAA_NPEAUHWND__@@@Z
    bool DoesWindowBelongToCallingProcess(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCopyData@FlowEndpointBase@@IEAAXPEAUHWND__@@AEBUtagCOPYDATASTRUCT@@@Z
    void OnCopyData(HWND__*, tagCOPYDATASTRUCT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOtherEndpointLost@FlowEndpointBase@@IEAAXW4EndpointLossReason@1@@Z
    void OnOtherEndpointLost(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@FlowEndpointBase@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
