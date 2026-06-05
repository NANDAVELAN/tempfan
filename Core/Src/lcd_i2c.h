#ifndef LCD_I2C_H
#define LCD_I2C_H

#include "stm32f4xx_hal.h"

void lcd_init(void);
void lcd_send_string(char *str);
void lcd_send_cmd(char cmd);
void lcd_send_data(char data);
void lcd_put_cur(int row, int col);

extern I2C_HandleTypeDef hi2c1;

#endif
