// use.cpp — part of opencode-free-sub.

#include "opencodefreesub/use.h"

#include <cstdio>

namespace opencodefreesub {

Use::Use(const std::string& config_path)
    : config_path_(config_path) {}

void Use::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Use::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-free-sub] use: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodefreesub
