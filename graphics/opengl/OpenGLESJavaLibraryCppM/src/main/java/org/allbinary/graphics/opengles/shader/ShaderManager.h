
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShaderManager
            : public virtual Object
         {

    private: static ShaderManager* instance_owner();
    private: static ShaderManager* instance;

    public: static ShaderManager* getInstance();

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: const std::string LOAD_SHADER = "loadShader";

    /*protected*/ public: const std::string __VERSION__ = "__VERSION__";

    public: int32_t GL_VERTEX_SHADER;

    public: int32_t GL_FRAGMENT_SHADER;

public: ShaderManager(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER);

    public: int32_t load(GL10* gl, std::string resource, std::vector<std::string> shaderAsStringArray, int32_t shaderType);

    public: int32_t loadShader(GL10* gl, std::string resource, BasicArrayList* stringList, int32_t shaderType);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
