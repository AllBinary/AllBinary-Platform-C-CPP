
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class EGLConfig;
class GL10;
class RendererStrings;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShaderUpdater
            : public virtual Object
         {

    private: static ShaderUpdater* instance_owner();
    private: static ShaderUpdater* instance;

    public: static ShaderUpdater* getInstance();


            
    public: ShaderUpdater();
        
    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: RendererStrings* rendererStrings;

    public: void onSurfaceCreated(GL10* gl, EGLConfig* eglConfig);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/egl/EGLConfig.h>)
#include <javax/microedition/khronos/egl/EGLConfig.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/renderer/RendererStrings.h>)
#include <org/allbinary/graphics/opengles/renderer/RendererStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
