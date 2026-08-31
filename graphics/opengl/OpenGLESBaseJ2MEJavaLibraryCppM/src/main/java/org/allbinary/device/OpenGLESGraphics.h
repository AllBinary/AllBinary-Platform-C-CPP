
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/graphics/font/FontDebugBase.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicsInterface.h"
#include "NullGL10.h"

class OpenGLESGraphics
            : public Object
        : public OpenGLSurfaceChangedInterface, public GraphicsInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    gl: GL10 = NullGL10.NULL_GL10;

 constructor ();

    public updateGL(GL gl);

    public set(GL gl);

                //@Throws(Exception.constructor)
            
    public init();

                //@Throws(Exception.constructor)
            
    public update();

    public setOrthoginalMode();

    public setCameraMode();

    public GL10 getGlP();

    public setFontDebug(Font font, FontDebugBase fontDebug);

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
