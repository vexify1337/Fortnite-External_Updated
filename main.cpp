
#include "includes.hpp"
#include <iostream>
#include <thread>
static auto cr3_loop() -> void {

	auto LatestGworld = readd<uintptr_t>(baseaddy + offsets::gworld);
	while (true) {
		cache::uworld = readd<uintptr_t>(baseaddy + offsets::gworld);
		if (LatestGworld != cache::uworld) {
			auto cr3 = Driver::GetDir();
			printf("DTB ---> 0x%llx\n", cr3);
			LatestGworld = readd<uintptr_t>(baseaddy + offsets::gworld);

		}

		std::this_thread::sleep_for(std::chrono::microseconds(100));
	}
}
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

	Driver::GetDir();
	std::thread([&]() { { cr3_loop(); } }).detach();
	create_overlay(); 
	directx_init();
	render_loop();

}


