void setup(){
  size(400,400);
}
void draw(){
  background(#FFFFF2);
  for(int i=0; i<24; i++){
    float a = radians(360/24);
    if(i==0) fill(#FF7E05); //橘，中獎
    else if(i%3==0) fill(#000000); //黑
    else if(i%3==1) fill(#FAE3A9); //淡黃
    else fill(#FFFFFF);
    arc(200, 200, 300, 300, d + a*i, d + a*(i+1), PIE);
  }
  d -= v;
  v *= 0.9;
}
float d = 0, v = 0, oldX;
void mousePressed(){
  d = mouseX; //記得在哪裡按下去
}
void mouseDragged(){
  d = radians(mouseX);
}
void mouseReleased() {//放開時，要自己轉，有速度
  v = radians(mouseX - oldX);
}
