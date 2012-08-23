#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

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
	// clear out the window with black
	gl::clear( Color( 1.0, 0, 0 ) ); 
}

CINDER_APP_BASIC( CinderProject1App, RendererGl )
