#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
	int jedno,dvoj,vice,zh=0;
	do{
		std::cout << "zh";
		std::cin >> zh;
		if (zh != 0) {
			if (zh>-9||zh<9) jedno++;
			if (zh>-100&&zh<-9||zh>9&&zh<100) dvoj++;
			if (zh<-99||zh>99) vice++;
		}
	}
		while(zh !=0);
		std::cout << "jedno:" << jedno << "\n" << "dvoj:" << dvoj << "\n" << "vice:" << vice;
			
}
