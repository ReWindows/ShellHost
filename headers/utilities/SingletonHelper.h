#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 3 member(s).
namespace SingletonHelpers {
class SingletonHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClaimSingletonOrRedirectLaunch@SingletonHelper@SingletonHelpers@@QEAA?AW4SingletonClaimResult@2@AEBUValueSet@Collections@Foundation@Windows@winrt@@W4ForegroundOption@12@_N@Z
    int TryClaimSingletonOrRedirectLaunch(WindissectOpaque const &, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SingletonHelper@SingletonHelpers@@QEAA@XZ
    ~SingletonHelper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessageFromEndpoint@SingletonHelper@SingletonHelpers@@MEAAXPEAUHWND__@@W4StandardMessage@@AEBUValueSet@Collections@Foundation@Windows@winrt@@@Z
    virtual void OnMessageFromEndpoint(HWND__*, int, WindissectOpaque const &);
};
} // namespace SingletonHelpers
