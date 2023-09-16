#include <WaitPushButton>
WaitPushButton x(8, 9, 10);
void setup() {
  x.init();
}
void loop() {
  x.waitms(5000);
}
