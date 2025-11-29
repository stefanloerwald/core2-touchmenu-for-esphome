#include "esphome/core/log.h"
#include "shys_m5_core2.h"

namespace esphome
{
    namespace shys_m5_core2
    {

        static const char *TAG = "shys_m5_core2";

        /**
         * @brief SETUP
         *
         * Initialisierung
         */
        void ShysM5Core2::setup()
        {
            ShysM5Core2::initializeShysM5Core2();
            ESP_LOGI("log", "%s", "M5 is initialized");
        }

        /**
         * @brief LOOP
         *
         * Standard Loop
         */
        void ShysM5Core2::loop()
        {
            ShysM5Core2::handleTouch();
            esphome::delay(5);
        }

        /**
         * @brief dump_config
         *
         * Ausgabe der aktuellen Konfiguration im Log nach Initialisierung
         */
        void ShysM5Core2::dump_config()
        {
            ESP_LOGCONFIG(TAG, "-----------------------------------");
            ESP_LOGCONFIG(TAG, "Shys M5 Core2");
            ESP_LOGCONFIG(TAG, "Password Secure: %s", this->login_enabled ? "on" : "off");
            ESP_LOGCONFIG(TAG, "Initial Sound: %s", this->init_sound_enabled ? "on" : "off");
            ESP_LOGCONFIG(TAG, "-----------------------------------");
        }

    }
}
