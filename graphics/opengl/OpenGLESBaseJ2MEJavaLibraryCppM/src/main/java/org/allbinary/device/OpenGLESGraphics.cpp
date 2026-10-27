
        /* Generated Code Do Not Modify */
        



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

class OpenGLESGraphics
            : public Object
        , public OpenGLSurfaceChangedInterface, public GraphicsInterface {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: GL10* gl = NullGL10::NULL_GL10;

: OpenGLESGraphics(){
}


    public: void updateGL(GL* gl){
}


    public: void set(GL* gl){
}


                //@Throws(Exception.constructor)
            
    public: void init(){
}


                //@Throws(Exception.constructor)
            
    public: void update(){
}


    public: void setOrthoginalMode(){
}


    public: void setCameraMode(){
}


    public: GL10* getGlP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gl;
    
}


    public: void setFontDebug(Font* font, FontDebugBase* fontDebug){



                            throw new RuntimeException();
                    
}


};

            

