/*
"Plank reminds me of a freash-cut spring flowers, 
spewing across a babbling brook with a hint of lemon."
Know it all ed | Ed, Edd, 'n Eddy
*/

/*Base system:*/
#include <u.h>
#include <libc.h>
#include <draw.h>
#include <thread.h>
#include <event.h>

/*External, but included in system:*/
#include <keyboard.h>
#include <frame.h>
#include <cursor.h>
#include <mouse.h>

/*In the event of libaries internal to plank:*/
//#include "consoldate.h"

/*Declerations:*/

char* context_edit[] = 
{
	"Copy",
	"Dump",
	"Cut",
	"Delete",
	"Select all"
};
// 0 = Copy| 1= Dump| 2 = Cut| 3 = Delete| 4 = Select all|
char* context_main[] = 
{
	"Load from path",
	"Write to path",
	"Exit"
};
// 0 = Load from path| 1 = Write to path| 2 = Exit|

char appname[] = "Plank";

Image *point_path;
Rectangle path_bar;
Image *point_file;
Rectangle file_box;
Display dizplay;
/*^Placeholders for now*/

Menu edit_Menu = {context_edit};
Menu main_Menu = {context_main};

char path[32768];
/*^The max unsigned value on the Apollo guidance computer, 
this quite frankly will be a common placeholder number for 
arrays in plank.*/

Dir *path_target;

/*Main "meat":*/
void
eresized(int new)
{
	if(new && getwindow(display, Refnone) < 0)
	{
		sysfatal("I can't reattach myself to a window.");
	}
	/*^Mandatory part of rio-using applications*/
}

void
act_dump(void)
{
	/*Pasting in plank is called "dumping". 
	This is my rational for calling it that way - how do you 
	paste a 1:1 cessna to a paper?*/
	int foo;

	if ( (foo = open("/dev/snarf", 0READ) ) >= 0 )
	{
		char textdump[32768];
		read
	}
}

void
act_copy(void)
{
	/*the plan9 world calls this "Snarfing", but i feel 
	like the more common "copy" would be understood by
	more people...*/
}

void
act_cut(void)
{

}

void
act_del(void)
{

}

void main(int argc, char **argv)
{
	Mouse jerry;
	event actions_;
	int e, mousedown = 0;

	//

	intdraw(0,0,"Plank")
	eresized(0);

	while (1)
	{
		e = event(&actions);

		if ( (e == Emouse ) && (ev.mouse.buttons & 3) )
		{
			/*middle button*/
			switch (menuhit) 
			{
				case 0

				break;

				case 1

				break;

				case 2

				break;
			}

		}
		else if( (e == Emouse) && (ev.mouse.buttons & 4) ) 
		{
			/*right button*/
			switch (menuhit) 
			{
				case 0

				break;

				case 1

				break;

				case 2

				break;
			}
		}
	}
}