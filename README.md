# LVGL CYD
- [LVGL drivers demo](https://github.com/rzeldent/esp32-smartdisplay-demo)
  This example here is based on this.  
- [LVGL drivers](https://github.com/rzeldent/esp32-smartdisplay)
- [Board descrptions](https://github.com/rzeldent/platformio-espressif32-sunton)

# GUI tool
https://github.com/eez-open/studio
https://github.com/eez-open/eez-framework
## Run in Ubuntu
- download latest AppImage from https://github.com/eez-open/studio/releases
- make the AppImage executable and run as described in README
```
# please check version
chmod +x ./EEZ-Studio-0.23.2.AppImage
./EEZ-Studio-0.23.2.AppImage --no-sandbox
```

# Workaround
Currently there is a bug in eez-framework.  
After building the gui in EEZ Studio you have the fix the created source code.
```
sed -i 's/LVGL_VERSION_MINOR >= 3/LVGL_VERSION_MINOR > 3/g' src/ui/eez-flow.cpp
```

# Status
This one works
```
pio run -e esp32-3248S035C
```
But this one not. The support for NV3041A was dropped.
```
pio run -e JC4827W543C
```

# Links
- dasdgw yoradio has support for the display but does currently not compile
- https://github.com/calint/platformio-bam shows valid graphics but uses another touch controller
- [FAQ EEZ Studio with LVGL](https://github.com/eez-open/studio/wiki/FAQ)
