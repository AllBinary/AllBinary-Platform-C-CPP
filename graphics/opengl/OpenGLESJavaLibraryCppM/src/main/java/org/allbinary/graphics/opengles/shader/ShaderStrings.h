
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShaderStrings
            : public virtual Object
         {

    private: static ShaderStrings* instance_owner();
    private: static ShaderStrings* instance;

    public: static ShaderStrings* getInstance();


            
    public: ShaderStrings();
        
    public: const std::string NO_PROGRAM_HANDLE = "No program handle";

    public: const std::string UNIFORM_BLOCK_HANDLE = "Uniform Block Handle: ";

    public: const std::string UNIFORM_HANDLE = "Uniform Handle: ";

    public: const std::string UNIFORM_ATTRIBUTE_HANDLE = "Uniform Attribute Handle: ";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_H_COMPLETE
        
        #endif
    
