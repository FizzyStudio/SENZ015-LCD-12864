# SENZ015 LCD 12864

###### 翻译

> `英文` 请参考 [`这里`](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/README.md)

> `中文` 请参考 [`这里`](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/README_CN.md)

![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_Front.jpg "SENZ015_Front")
![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_Back.jpg "SENZ015_Back")


### 产品介绍

> SENZ015 LCD 12864模块是一款基于12864液晶显示器开发的串口、并口通用显示模块。
12864带汉字库图形点阵液晶显示模块,可显示8192个中文汉字（16X16点阵）、128个字符（8X16点阵）和图形显示（128X64点阵）。该模块具有并行和串行接口,背光控制（并行模式时使用）,背光开关（串行模式使用）,串行、并行模式开关切换功能,对比度调节电位器。


### 产品参数

- 工作电压：+3.3 ~ 5V(内置升压电路,无需负压)
- 控制器：ST7920
- 显示颜色：黄绿/蓝色/灰屏
- 像素个数：128列 x 64行
- 刷屏速率：60fps
- FOV: 170°
- LCD类型：STN
- 控制接口：4/8位数字并行驱动(LCD12864默认模式)和3位串行
- 软件功能：光标显示、画面移位、自定义字符、睡眠模式等
- 工作温度：-20 ~ +70℃
- 视域尺寸：73 x 39mm
- 模块尺寸：93 x 70 x 12.5mm


### 使用教程

#### 引脚定义

|Sensor pin|Ardunio Pin|Function Description|
|-|:-:|-|
|VCC|+3.3~5V|Power|
|GND|GND||
|VO|-|Adjust the contrast ratio|
|RS(CS)|H/L|LPT Mode: RS="H",  data signal, RS="L",  command signal; COM Mode: CS: chip signal|
|R/W(SID)|H/L|LPT Mode: R/W="H", write data, R/W="L", read data; COM Mode: SID: data interface|
|E(CLK)|H/L|LPT Mode: Enable signal; COM Mode: clock signal|
|DB0~DB7|H/L|Data0-7|
|PSB|H/L|PSB="H", LPT Mode; PSB="L", COM Mode|
|NC|-||
|RST|H/L|RST="L", Reset|
|VOUT|-||
|BLA|-|Back LED anode, +5V|
|BLK|-|Back LED kathode, 0V|


![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_pin.jpg "引脚定义") 


#### 连线图

![](https://github.com/njustcjj/SENZ015-LCD-12864/blob/master/pic/SENZ015_connect.png "连线图") 


#### 支持的库文件
- 通用*U8glib*库文件，点击[`下载`](http://https://bintray.com/olikraus/u8glib/download_file?file_path=u8glib_arduino_v1.18.1.zip)


### 示例代码

	//This code is to show "Hello World" with the COM mode
	/*

	Connect Pins as the following：

	E(SCK)->10, R/W(MOSI)->11, RS(CS)->12;
	VCC->3.3V, GND->GND,, BLA->+5V, BLK->GND;
	PSB->GND, RST->High;

	*/

	#include "U8glib.h"
	U8GLIB_ST7920_128X64_4X u8g(10, 11, 12); 
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



### 购买[*SENZ015 LCD 12864*](https://www.ebay.com/).