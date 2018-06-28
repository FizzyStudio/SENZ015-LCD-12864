# SENZ015-LCD-12864

###### Translation

> For `English`, please click [`here.`](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/README.md)

> For `Chinese`, please click [`here.`](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/README_CN.md)

![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_Front.jpg "SENZ015_Front")
![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_Back.jpg "SENZ015_Back")


### Introduction


> SENZ015 LCD 12864 module uses a 128x64 liquid crystal display that support Chinese character , English characters and even graphics. It can exhibit 4 lines and 12 English characters/6 Chinese characters per line. It is suitable for interactive work with Arduino. It features a backlit control, pallerlel or serial control, contrast adjust. 


### Specification

- Operating Voltage: +3.3V ~ 5V
- Controller: ST7920
- Background Color: blue
- Pixels: 128 columns × 64 row
- Scanning Rate: 60 frames per second
- FOV: 170°
- LCD type：STN
- Control interface: 4/8 bit digital parallel driver, and 3 bit serial driver
- Function: cursor display, picture shift, CGRAM, sleeping mode
- Working Temperature: -20 ℃ ~ +70 ℃
- Display Area: 73 x 39mm
- Module Size: 93 x 70 x 12.5mm


### Tutorial

#### Pin Definition

|Sensor pin|Ardunio Pin|Function Description|
|-|:-:|-|
|VCC|+3.3~5V|Power|
|GND|GND||
|VO|-|Adjust the contrast ratio|
|RS(CS)|H/L|Parallel Mode: RS="H",  data signal, RS="L",  command signal; Serial Mode: CS: chip signal|
|R/W(SID)|H/L|Parallel Mode: R/W="H", write data, R/W="L", read data; Serial Mode: SID: data interface|
|E(CLK)|H/L|Parallel Mode: Enable signal; Serial Mode: clock signal|
|DB0~DB7|H/L|Data0-7|
|PSB|H/L|PSB="H", Parallel Mode; PSB="L", Serial Mode|
|NC|-||
|RST|H/L|RST="L", Reset|
|VOUT|-||
|BLA|-|Back LED anode, +5V|
|BLK|-|Back LED kathode, 0V|


![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_pin.jpg "Pin Definition") 

#### Connecting Diagram

![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_connect.png "Connecting Diagram") 
See sample code for reference.

##### Download the library
- Download Arduino *U8glib* library [`here`](http://https://bintray.com/olikraus/u8glib/download_file?file_path=u8glib_arduino_v1.18.1.zip)


#### Sample Code


	//This code is to show "Hello World" with the COM mode
	/*

	Connect Pins as the following：

	E(SCK)->10, R/W(MOSI)->11, RS(CS)->12;
	VCC->3.3V, GND->GND,, BLA->+5V, BLK->GND;
	PSB->GND, RST->High;

	*/

	#include "U8glib.h"
	U8GLIB_ST7920_128X64_4X u8g(18, 16, 17);
	void draw(void) {
	  u8g.setFont(u8g_font_unifont);
	  u8g.drawStr( 0, 22, "Hello World!");
	}

	void setup(void) {

	}

	void loop(void) {
	  // picture loop
 	 u8g.firstPage();  
	  do {
	    draw();
		  } while( u8g.nextPage() );
	}


### Purchasing [*SENZ015 LCD 12864*](https://www.ebay.com/).
