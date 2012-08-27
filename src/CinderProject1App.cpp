#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include <ctime>
#include <cstdlib>

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderProject1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void CinderProject1App::setup()
{
}

void CinderProject1App::mouseDown( MouseEvent event )
{
}

void CinderProject1App::update()
{
}

void CinderProject1App::draw()
{
	int redvalue, greenvalue, bluevalue;
	srand(time(0));
	redvalue=(rand() % 255)+1;
	greenvalue=(rand() % 255)+1;
	bluevalue=(rand()% 255)+1;
	// clear out the window and draw random color
	for(int a=2; a>1; a=a+1)
	{
		gl::clear( Color( redvalue / 255.0 , greenvalue / 255.0, bluevalue / 255.0 ) );
	}
}

CINDER_APP_BASIC( CinderProject1App, RendererGl )
