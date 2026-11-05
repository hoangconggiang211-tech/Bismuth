#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

$execute {
    log::info("Bismuth Mod loaded successfully on Android!");
}

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }
        log::debug("Bismuth optimization active in MenuLayer.");
        return true;
    }
};
