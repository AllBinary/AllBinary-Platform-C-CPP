
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H

#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShaderUpdater.h"

class CompositeShaderUpdater: public ShaderUpdater {
        

    private: static const instanceC: CompositeShaderUpdater = new CompositeShaderUpdater(StringUtil.getInstance()!.getArrayInstance(), StringUtil.getInstance()!.getArrayInstance(), StringUtil.getInstance()!.getArrayInstance(), NullUtil.getInstance()!.NULL_INT_ARRAY);

    public static CompositeShaderUpdater getInstance();

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

public constructor (std::vector<string> uniformBlockArray, std::vector<string> uniformArray, std::vector<string> attributeArray, std::vector<int32_t> attributeHandleArray);

    public onSurfaceCreated(GL10 gl, EGLConfig eglConfig, int32_t programHandle);

    public onSurfaceDestroyed(GL10 gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
