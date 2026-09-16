#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 2 member(s).
namespace details {
class RefCountedWorkerWndProc {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@RefCountedWorkerWndProc@details@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefCountedWorkerWndProc@details@@MEAA@XZ
    virtual ~RefCountedWorkerWndProc();
};
} // namespace details
