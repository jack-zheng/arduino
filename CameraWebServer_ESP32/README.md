# How to setup ESP cam env

1. install esp32 lib in Arduino. File -> Preferences -> `https://dl.espressif.com/dl/package_esp32_index.json`
1. Files -> Examples -> esp32 -> Camera -> CameraWebServer
1. Tools:
    * Board: ESP32 Wrover Module
    * Partition Schema: Huge App (3M No OTA)
    * Special port accordingly
1. update code:
    * update the camera model to camera_model_ai_thinker
    * update ssid and password
1. pin, refer to video, remember to put the pin of 5v and GND ast reset button side, connect GND and IO0 for download
1. upload, after finish remove the GND, IO0 connect
1. click reset button and observ the serial monitor, visit the website and you can see the cam works now

## Video guide

[Youtube](https://www.youtube.com/watch?v=q7Z_XnBYFhY)
