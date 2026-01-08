#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        static bool isShow = false;
        if (!isShow) {
            auto alert = FLAlertLayer::create(
                "Welcome to RustGDPS",
                "Welcome to RusDash and DustGDPS!\nYour client status: <cg>Loaded!</c>\n\n<cj>Enjoy the game! ;D</c>",
                "Let's GO"
            );
            alert->m_scene = this; 
            alert->show();
            
            isShow = true;
        }

        return true;
    }
};
