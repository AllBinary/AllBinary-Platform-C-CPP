
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Shader.h"

class ShaderInitializer
            : public Object
         {
        

    private: static const instance: ShaderInitializer = new ShaderInitializer();

    public static ShaderInitializer getInstance();

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public int32_t init(GL10 gl, std::vector<Shader> shader, std::vector<string> attributeArray);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H
