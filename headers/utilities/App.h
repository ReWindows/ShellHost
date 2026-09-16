#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShellHost.exe by Windissect. 23 member(s).
namespace CLI {
class App {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear@App@CLI@@QEAAXXZ
    void clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?count_all@App@CLI@@QEBA_KXZ
    uint64_t count_all() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ignore_case@App@CLI@@QEAAPEAV12@_N@Z
    ::CLI::App * ignore_case(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?pre_callback@App@CLI@@UEAAXXZ
    virtual void pre_callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_option@App@CLI@@QEAA_NPEAVOption@2@@Z
    bool remove_option(::CLI::Option *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1App@CLI@@UEAA@XZ
    virtual ~App();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_configure@App@CLI@@IEAAXXZ
    void _configure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_count_remaining_positionals@App@CLI@@IEBA_K_N@Z
    uint64_t _count_remaining_positionals(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_fallthrough_parent@App@CLI@@IEAAPEAV12@XZ
    ::CLI::App * _get_fallthrough_parent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_parse_single_config@App@CLI@@IEAA_NAEBUConfigItem@2@_K@Z
    bool _parse_single_config(::CLI::ConfigItem const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process@App@CLI@@IEAAXXZ
    void _process();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process_callbacks@App@CLI@@IEAAXXZ
    void _process_callbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process_config_file@App@CLI@@IEAAXXZ
    void _process_config_file();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process_env@App@CLI@@IEAAXXZ
    void _process_env();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process_extras@App@CLI@@IEAAXXZ
    void _process_extras();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process_help_flags@App@CLI@@IEBAX_N0@Z
    void _process_help_flags(bool, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_process_requirements@App@CLI@@IEAAXXZ
    void _process_requirements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_trigger_pre_parse@App@CLI@@IEAAX_K@Z
    void _trigger_pre_parse(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_validate@App@CLI@@IEBAXXZ
    void _validate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?increment_parsed@App@CLI@@IEAAXXZ
    void increment_parsed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?run_callback@App@CLI@@IEAAX_N0@Z
    void run_callback(bool, bool);
};
} // namespace CLI
