
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
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Shader;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShaderInitializer
            : public virtual Object
         {

    private: static ShaderInitializer* instance_owner();
    private: static ShaderInitializer* instance;

    public: static ShaderInitializer* getInstance();


            
    public: ShaderInitializer();
        
    /*protected*/ public: CommonStrings* commonStrings;

    public: int32_t init(GL10* gl, std::vector<Shader*> shader, std::vector<std::string> attributeArray);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/Shader.h")
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#endif

        #endif
    
