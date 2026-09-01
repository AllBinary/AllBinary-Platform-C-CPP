
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H

            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/FontDebugBase.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicsInterface.h"
#include "NullGL10.h"

class OpenGLESGraphics: public Graphics, public OpenGLSurfaceChangedInterface, public GraphicsInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: GL10 gl = NullGL10::NULL_GL10;

public: OpenGLESGraphics();

    public: void updateGL(GL gl);

    public: void set(GL gl);

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void setOrthoginalMode();

    public: void setCameraMode();

    public: GL10 getGl10();

    public: void setFontDebug(Font font, FontDebugBase fontDebug);

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
