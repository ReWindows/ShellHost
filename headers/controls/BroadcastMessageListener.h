#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 2 member(s).
class BroadcastMessageListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@BroadcastMessageListener@@QEAAXXZ
    void Start();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@BroadcastMessageListener@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
