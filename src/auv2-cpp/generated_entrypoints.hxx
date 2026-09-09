#pragma once
#include "detail/auv2/auv2_base_classes.h"

/// Defines an AU factory entry for one CLAP plugin index.
#define CLAP_AUV2_ENTRY(n)                                                        \
    /** Wraps one CLAP plugin using the host's component identity. */             \
    struct wrapAsAUV2_inst##n : free_audio::auv2_wrapper::WrapAsAUV2               \
    {                                                                            \
        /** Initializes the wrapper for this plugin index and host instance. */  \
        wrapAsAUV2_inst##n(AudioComponentInstance ci)                              \
            : free_audio::auv2_wrapper::WrapAsAUV2("", "", n, ci) {}               \
    };                                                                           \
    AUSDK_COMPONENT_ENTRY(ausdk::AUMusicDeviceFactory, wrapAsAUV2_inst##n);

CLAP_AUV2_ENTRY(0);
CLAP_AUV2_ENTRY(1);
CLAP_AUV2_ENTRY(2);
CLAP_AUV2_ENTRY(3);