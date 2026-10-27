
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_CPP
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/device/OpenGLESGraphics.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/graphics/font/FontDebugBase.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/GraphicsInterface.h"
#include "org/allbinary/device/NullGL10.h"


OpenGLESGraphics::OpenGLESGraphics() : commonStrings(CommonStrings::getInstance()), gl(NullGL10::NULL_GL10){
}


    auto OpenGLESGraphics::updateGL(GL* gl) -> void{
}


    auto OpenGLESGraphics::set(GL* gl) -> void{
}


                //@Throws(Exception.constructor)
            
    auto OpenGLESGraphics::init() -> void{
}


                //@Throws(Exception.constructor)
            
    auto OpenGLESGraphics::update() -> void{
}


    auto OpenGLESGraphics::setOrthoginalMode() -> void{
}


    auto OpenGLESGraphics::setCameraMode() -> void{
}


    auto OpenGLESGraphics::getGlP() -> GL10*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl;
    
}


    auto OpenGLESGraphics::setFontDebug(Font* font, FontDebugBase* fontDebug) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_CPP
