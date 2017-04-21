#ifndef PHOBOT_h
#define PHOBOT_h

class PHOBOT_Class
{
  private:
    int servo_min_pwm;
    int servo_max_pwm;
    int battery;
    bool first_time;
  public:
    PHOBOT_Class();
    void initServo();
    void moveServo1(int pwm);
    void moveServo2(int pwm);
    int readBattery();
};

extern PHOBOT_Class PHOBOT;

#endif
