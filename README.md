> The Blinking LED,  
> A simple Hack that still works for me after years:
> 1. Place a tiny LED (red or yellow) by the side of your monitor or virtually on the screen corner. Basically anywhere almost bordering your field of view.
> 2. Make it blink like a fast heartbeat (120-150 bpm) and gradually slowdown to around 60 bpm (or your slow heartbeat base). Make the slope approx 20 to 60 minutes (you can adjust the best rate by testing in 10m increments after a few days in one setting).  
> Now...
> 3. Get to work regardless if distracted and agitated. Close all apps except what you need to work and BOOM!, let the magic happen. Without realising, your brain will try to sync with the light that you can barely see, calming you down and allowing you to go focus-mode with the task in had.  
> Works like hypnosis!
> It is also a cheap hack... I build my unit with a cheap ESP32 and heart-rate sensor to sync deeper and dynamically adjust the slope...  
> Will explain better if any interest.  
> No science behind (only principles), I just hammered a solution like any Ape with the shakes would need!

(Source: https://news.ycombinator.com/item?id=38276107)

Inspired by this post, I bought an Arduino Nano clone and wrote some code to replicate this solution. 
It was blinking the entire time while I was working on it, but the project itself was simply fun to work on, so I'm not entirely convinced of its effectiveness - not yet, at least. 

This also marks the first time I ever programmed a physical device, even as simple as this. Fun in itself.

This specific clone requires you select "Old Bootloader" option in Arduino IDE, otherwise it will refuse to flash.
