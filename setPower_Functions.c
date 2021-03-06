int motorMapping[255] = {-127,
                         -126,-125,-124,-123,-122,-121,-120,-119,-118,-117,-116,-115,-114,-113,
                         -112,-111,-110,-109,-108,-107,-106,-105,-104,-103,-102,-101,-100,-99,
                         -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85,
                         -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71,
                         -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57,
                         -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43,
                         -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29,
                         -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15,
                         -14, -13, -12, -11, -10, -9,  -8,  -7,  -6,  -5,  -4,  -3,  -2,  -1,
                         0,
                         1,   2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,
                         15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
                         29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,
                         43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,
                         57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,
                         71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,  84,
                         85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,  96,  97,  98,
                         99,  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
                         113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126,
                         127
};

void setPower(int power, int port) {
  switch (port) {
    case 1 :
      motor[port1] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 2 :
      motor[port2] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 3 :
      motor[port3] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 4 :
      motor[port4] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 5 :
      motor[port5] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 6 :
      motor[port6] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 7 :
      motor[port7] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 8 :
      motor[port8] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 9 :
      motor[port9] = motorMapping[constrain(power,-127,127)+127];
      break;
    case 10 :
      motor[port10] = motorMapping[constrain(power,-127,127)+127];
      break;
    case -1:
      setPower(constrain(power,-127,127)+127,1);
      setPower(constrain(power,-127,127)+127,2);
      setPower(constrain(power,-127,127)+127,3);
      setPower(constrain(power,-127,127)+127,4);
      setPower(constrain(power,-127,127)+127,5);
      setPower(constrain(power,-127,127)+127,6);
      setPower(constrain(power,-127,127)+127,7);
      setPower(constrain(power,-127,127)+127,8);
      setPower(constrain(power,-127,127)+127,9);
      setPower(constrain(power,-127,127)+127,10);
      break;
  }
}

void setLeft(int power) {
  setPower(power, 3);
  setPower(power, 4);
}

void setRight(int power) {
  setPower(power, 5);
  setPower(power, 9);
}

void setArm(int power) {
  setPower(power, 6);
}

void setMogo(int power) {
  setPower(power, 2);
  setPower(power, 8);
}

void setClaw(int power) {
  setPower(power, 7);
}
