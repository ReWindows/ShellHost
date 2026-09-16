#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 8 member(s).
namespace CLI {
class Option {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?capture_default_str@Option@CLI@@QEAAPEAV12@XZ
    ::CLI::Option * capture_default_str();
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear@Option@CLI@@QEAAXXZ
    void clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?expected@Option@CLI@@QEAAPEAV12@H@Z
    ::CLI::Option * expected(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_items_expected_max@Option@CLI@@QEBAHXZ
    int get_items_expected_max() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_type_size_min@Option@CLI@@QEBAHXZ
    int get_type_size_min() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?run_callback@Option@CLI@@QEAAXXZ
    void run_callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?type_size@Option@CLI@@QEAAPEAV12@HH@Z
    ::CLI::Option * type_size(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Option@CLI@@QEAA@XZ
    ~Option();
};
} // namespace CLI
