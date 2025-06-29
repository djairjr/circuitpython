USB_VID = 0x303A
USB_PID = 0x8120
USB_PRODUCT = "M5Stack StampS3 - CircuitPython"
USB_MANUFACTURER = "M5STACK"

IDF_TARGET = esp32s3

CIRCUITPY_ESP_FLASH_MODE = qio
CIRCUITPY_ESP_FLASH_FREQ = 80m
CIRCUITPY_ESP_FLASH_SIZE = 8MB
CIRCUITPY_ESPCAMERA = 0

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_ST7789
