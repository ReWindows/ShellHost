#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 4 member(s).
namespace ValueSetUtils {
class details {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertManifestPropertyValuesRecursive@details@ValueSetUtils@@YAXAEBUValueSet@Collections@Foundation@Windows@winrt@@AEBUIPropertySet@4567@@Z
    void InsertManifestPropertyValuesRecursive(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureEnabled@details@ValueSetUtils@@YA_NI@Z
    bool IsFeatureEnabled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeNodeBasedOnVelocity@details@ValueSetUtils@@YA_NAEBUValueSet@Collections@Foundation@Windows@winrt@@@Z
    bool ShouldIncludeNodeBasedOnVelocity(WindissectOpaque const &);
};
} // namespace ValueSetUtils
