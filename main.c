int main(void)
{
	/* USER CODE BEGIN 1 */
	uint8_t i, j;
	/* USER CODE END 1 */

	/* MCU Configuration----------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* Configure the system clock */
	SystemClock_Config();

	/* Initialize all configured peripherals */
	MX_GPIO_Init();

	/* USER CODE BEGIN 2 */
	LCD_Init();    
	LCD_Clear();	
	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	for(;;)
	{
		/* USER CODE END WHILE */
		for(i = 0; i < 4; i++)
		{
			for(j = 0; j < 7; j++)
			{
				LCD_GoTo(j,i);      
				LCD_SendText("EMBARCADOS");
				HAL_Delay(400);
				LCD_Clear(); 
			}
		}
		
		/* USER CODE BEGIN 3 */
	}
	/* USER CODE END 3 */
}