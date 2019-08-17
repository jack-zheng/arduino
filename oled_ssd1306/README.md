# Light the OLED screen display

there are more I2C tutorial than SPI...

1. there are two libs that common used and high stared, u8g2 and adafruit on github
1. from my side I pick the adadruit
    * install lib: adafruit_ssd1306
    * install lib: adafruit_gfx_library
1. run given sample and display will show

## Pin name

| Pin  | Alternate Names |Description  |
|------|:---------------:|------------:|
| VCC  |                 |Power supply |
| GND  |                 |Ground       |
| D0   | SCL,CLK,SCK     |Clock        |
| D1   | SDA,MOSI        |Data         |
| RES  | RST,RESET       |Rest         |
| DC   | A0              |Data/Command |
| CS   |                 |Chip Select  |

Datasheet content:

When serial interface mode is selected, D0 will be the serial clock input: SCLK; D1 will
be the serial data input: SDIN and D2 should be kept NC.

## Resources

Vido guide

* [I2c + adafruit](https://www.youtube.com/watch?v=_e_0HJY0uIo)
* [SPI + u8g2](https://www.youtube.com/watch?v=7Kli1DgHZc8)
* [4SPI](https://www.youtube.com/watch?v=RoDga09YzNg)

* [Post](https://github.com/jandelgado/arduino/wiki/SSD1306-based-OLED-connected-to-Arduino)
