#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 15 member(s).
class winrt {
public:
    class hresult;
    class hresult_access_denied;
    class hresult_canceled;
    class hresult_changed_state;
    class hresult_class_not_available;
    class hresult_class_not_registered;
    class hresult_error;
    class hresult_illegal_delegate_assignment;
    class hresult_illegal_method_call;
    class hresult_illegal_state_change;
    class hresult_invalid_argument;
    class hresult_no_interface;
    class hresult_not_implemented;
    class hresult_out_of_bounds;
    class hresult_wrong_thread;
    class hstring;
    class impl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z
    WindissectOpaque box_value(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?terminate@winrt@@YAXXZ
    void terminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z
    void throw_hresult(WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z
    void throw_last_error(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_hresult@winrt@@YA?AUhresult@1@XZ
    WindissectOpaque to_hresult();
};
