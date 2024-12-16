
#include "includes.hpp"
#include <iostream>
#include <thread>

void main()
{
	printf("Waiting for Fortnite...");

	while (game_wnd == 0)
	{
		Sleep(1);
		processID = Driver::find_process(L"FortniteClient-Win64-Shipping.exe");
		game_wnd = get_process_wnd(processID); 
		Sleep(1);
	}

	baseaddy = Driver::find_image();

	if (!baseaddy) 
	{
		printf("The driver couldn't get the base address"); 
		Sleep(3000);
		exit(0);
	}

	create_overlay(); 
	directx_init();
	render_loop();

}


