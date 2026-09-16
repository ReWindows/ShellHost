#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 5 member(s).
namespace winrt {
class impl {
public:
    class factory_count_guard;
    class implements_delegate_base;
    class slim_source_location;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?hresult_from_win32@impl@winrt@@YAHI@Z
    int hresult_from_win32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?resume_background_callback@impl@winrt@@YAXPEAX0@Z
    void resume_background_callback(void *, void *);
};
} // namespace winrt
