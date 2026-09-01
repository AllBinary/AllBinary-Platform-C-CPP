
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

            #include "../../../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/renderer/RendererStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShaderUpdater
            : public Object
         {

    private: static ShaderUpdater instance() { return ShaderUpdater(); }

    public: static ShaderUpdater getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const RendererStrings rendererStrings = RendererStrings::getInstance();

    public: void onSurfaceCreated(GL10 gl, EGLConfig eglConfig);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H
