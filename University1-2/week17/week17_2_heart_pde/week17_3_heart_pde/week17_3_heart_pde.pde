size(400, 400);
fill(255, 0, 0);
noStroke();

for(int y=0; y<400; y++){
  for(int x=0; x<400; x++){
    float a = (x-200)/100.0;
    float b = (200-y)/100.0;
    float c = a*a + b*b - 1;
    if(c*c*c - a*a*b*b*b < 0)ellipse(x, y, 2, 2);
  }
}
