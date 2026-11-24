// gen.cpp — part of opencode-free-sub.

#include "opencodefreesub/gen.h"

#include <cstdio>

namespace opencodefreesub {

Gen::Gen(const std::string& config_path)
    : config_path_(config_path) {}

void Gen::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Gen::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-free-sub] gen: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodefreesub
