
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class GL;
class GL10;
class Font;
#include <javax/microedition/lcdui/Graphics.h>
class FontDebugBase;
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/GraphicsInterface.h"
class NullGL10;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESGraphics: public Graphics, public OpenGLSurfaceChangedInterface, public GraphicsInterface {

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: GL10* gl;

public: OpenGLESGraphics();

    public: void updateGL(GL* gl);

    public: void set(GL* gl);

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void setOrthoginalMode();

    public: void setCameraMode();

    public: GL10* getGl10();

    public: void setFontDebug(Font* font, FontDebugBase* fontDebug);

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H_COMPLETE)
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/font/FontDebugBase.h>)
#include <org/allbinary/graphics/font/FontDebugBase.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>)
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/device/GraphicsInterface.h")
#include "org/allbinary/device/GraphicsInterface.h"
#endif
#if __has_include("org/allbinary/device/NullGL10.h")
#include "org/allbinary/device/NullGL10.h"
#endif

        #endif
    
