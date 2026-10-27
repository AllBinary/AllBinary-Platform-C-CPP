
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShaderManager
            : public Object
         {

    private: static ShaderManager* instance() { static std::unique_ptr<ShaderManager> value(new ShaderManager( -1,  -1)); return value.get(); }

    public: static ShaderManager* getInstance();

    protected: const std::string LOAD_SHADER = "loadShader";

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: int32_t GL_VERTEX_SHADER;

    public: int32_t GL_FRAGMENT_SHADER;

public: ShaderManager(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER);

    public: int32_t load(GL10* gl, std::string resource, std::vector<std::string> shaderAsStringArray, int32_t shaderType);

    public: int32_t loadShader(GL10* gl, std::string resource, BasicArrayList* stringList, int32_t shaderType);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H
