void setup(){//Ctrl-N開新檔案，小畫家
  size(400,400);
  background(#F5E319);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1')stroke(255,0,0);//紅色
  if(key=='2')stroke(0,255,0);//綠色
}
