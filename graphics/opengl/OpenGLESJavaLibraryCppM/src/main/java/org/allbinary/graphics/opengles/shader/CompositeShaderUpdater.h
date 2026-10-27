
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ShaderStrings.h"

class CompositeShaderUpdater: public ShaderUpdater {

    private: static CompositeShaderUpdater* instanceC() { static std::unique_ptr<CompositeShaderUpdater> value(new CompositeShaderUpdater(StringUtil::getInstance()->getArrayInstance(), StringUtil::getInstance()->getArrayInstance(), StringUtil::getInstance()->getArrayInstance(), NullUtil::getInstance()->NULL_INT_ARRAY)); return value.get(); }

    public: static CompositeShaderUpdater* getInstance();

    protected: CommonSeps* commonSeps = CommonSeps::getInstance();

    protected: ShaderStrings* shaderStrings = ShaderStrings::getInstance();

    public: std::vector<int32_t> uniformBlockHandleArray;

    public: std::vector<std::string> uniformBlockArray;

    public: std::vector<int32_t> uniformHandleArray;

    public: std::vector<std::string> uniformArray;

    public: std::vector<int32_t> attributeHandleArray;

    public: std::vector<std::string> attributeArray;

public: CompositeShaderUpdater(std::vector<std::string> uniformBlockArray, std::vector<std::string> uniformArray, std::vector<std::string> attributeArray, std::vector<int32_t> attributeHandleArray);

    public: void onSurfaceCreated(GL10* gl, EGLConfig* eglConfig, int32_t programHandle);

    public: void onSurfaceDestroyed(GL10* gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
