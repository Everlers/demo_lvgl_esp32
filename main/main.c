#include <stdio.h>
#include "string.h"
//ESP and FreeRTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "esp_event.h"
#include "nvs_flash.h"
//LWIP
#include "lwip/ip4_addr.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include "lwip/err.h"
#include "lwip/netdb.h"
//My include
#include "st7789v.h"
#include "wifi.h"
#include "tcp.h"

#include "lvgl.h"
#include "lv_port_disp_template.h"

#include "lv_examples.h"

static void lvgl_task (void *param);

void app_main(void)
{
	//Initialize NVS
  /*esp_err_t ret = nvs_flash_init();
  if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
    ESP_ERROR_CHECK(nvs_flash_erase());
    ret = nvs_flash_init();
  }
  ESP_ERROR_CHECK(ret);
*/
	lv_init();
	lv_port_disp_init();

	//lcd_init();//初始化显示
	//wifiSTAInit();//初始化WiFi连接
	//lcd_show_printf(0,0,COLOR_WHITE,COLOR_BLACK,"Build time: %s %s",__DATE__,__TIME__);
	xTaskCreate(lvgl_task,"lvgl task",4096,NULL,configMAX_PRIORITIES,NULL);
	while (1)
	{
		lv_tick_inc(1);
	  vTaskDelay(1);
	}
}

static void lvgl_task (void *param)
{
	lv_demo_widgets();
	while(1)
	{
		lv_task_handler();
		vTaskDelay(1);
	}
}

