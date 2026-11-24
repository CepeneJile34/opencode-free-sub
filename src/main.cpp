// main.cpp — entry point. Wires config and subsystems together.

#include "opencodefreesub/settings.h"
#include "opencodefreesub/gen.h"
#include "opencodefreesub/activate.h"
#include "opencodefreesub/use.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    opencodefreesub::Settings settings = opencodefreesub::Settings::load_default();
    opencodefreesub::Gen gen(settings.store_path);
    opencodefreesub::Activate activate(settings.store_path);
    opencodefreesub::Use use(settings.store_path);
    std::fprintf(stderr, "[opencode-free-sub] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
