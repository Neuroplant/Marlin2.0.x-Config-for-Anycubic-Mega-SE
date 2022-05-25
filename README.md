# Marlin2.0.x-Config-for-Anycubic-Mega-SE

1. Install Visual Studio Code
2. install PlatformIO
3. Install Auto Build Marlin
4. Download Marlin-bugfix-2.0.x.zip from Marlinfw.org and unpack
5. replace files in /Marlin/ with files from here.
6. Open unpacked files folder with Auto Build Marlin
7. edit platformio.ini and set default_envs = melzi_optiboot_optimized 
8. Add Libary TMCStepper to project

After Compile and Upload:
1. Load Default settings
2. Do PID Tunings 
3. Do Bed Leveling
4. Save Settings

I tested this on my Printer, but I can not give any warrantie if your Printer will survive the Update. 
The Printer Board has ICSP pins so you will have the possibillity to flash it with an AVR-Device or Arduino

https://gprivate.com/5z9xt
