//frame.cpp

#include"frame.h"
#include "panel.h"

Frame::Frame()

	: wxFrame(NULL, wxID_ANY, "Hello World",
		wxDefaultPosition, wxSize(1280, 760))

{
	auto panel = new Panel(this);

}