#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 7 member(s).
class ValueSetUtils {
public:
    class details;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeBase64ValueSet@ValueSetUtils@@YAXAEBUhstring@winrt@@AEBUValueSet@Collections@Foundation@Windows@3@@Z
    void DeserializeBase64ValueSet(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValueSetFromAppExtension@ValueSetUtils@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@AEBUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@@Z
    WindissectOpaque TryGetValueSetFromAppExtension(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValueSetFromAppExtension@ValueSetUtils@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@AEBUhstring@6@0@Z
    WindissectOpaque TryGetValueSetFromAppExtension(WindissectOpaque const &, WindissectOpaque const &);
};
