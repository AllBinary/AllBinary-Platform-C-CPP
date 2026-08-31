
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/renderer/RendererStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShaderUpdater
            : public Object
         {
        

    private: static const instance: ShaderUpdater = new ShaderUpdater();

    public static ShaderUpdater getInstance();

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const rendererStrings: RendererStrings = RendererStrings.getInstance()!;

    public onSurfaceCreated(GL10 gl, EGLConfig eglConfig);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H
