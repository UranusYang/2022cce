void setup(){
  size(400, 400);
  fill(255, 0, 0);
  noStroke();
}

void draw(){

}
void mousePressed(){
  for(int y=0; y<400; y++){
    for(int x=0; x<400; x++){
      float a = (x-200)/30.0;
      float b = (200-y)/30.0;
      float c = a*a + b*b - 1;
      if(c*c*c - a*a*b*b*b < 0){
        ellipse(x+mouseX-200, y+mouseY-200, 2, 2);
      }
    }
  }
}
