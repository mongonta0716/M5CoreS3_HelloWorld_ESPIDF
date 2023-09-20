#include <M5Unified.h>
#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

static const char* TAG = "WakeWordTest";


void setup() {
  M5.begin();
  M5_LOGI("HelloWorld");
  M5.Display.setTextSize(3);
  M5.Display.println("HelloWorld");
  M5.Display.println("VSCode+PIO+ESPIDF");
}

void loop() {

  M5_LOGI("HelloWorld");
  vTaskDelay(1000/portTICK_PERIOD_MS);
}

void loopTask(void*)
{
  setup();
  for (;;) {
    loop();
  }
  vTaskDelete(NULL);
}

extern "C" {
void app_main(void)
{
  printf("HelloWorld");
  xTaskCreatePinnedToCore(loopTask, "loopTask", 8192, NULL, 1, NULL, 1);
}
}