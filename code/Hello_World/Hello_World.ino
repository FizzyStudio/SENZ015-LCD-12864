#include "U8glib.h"
U8GLIB_ST7920_128X64_4X u8g(10, 11, 12); //SCK->10,MOSI->11,CS->12
void draw(void) {
  u8g.setFont(u8g_font_unifont);
  u8g.drawStr( 0, 22, "Hi, Junjie!");
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
