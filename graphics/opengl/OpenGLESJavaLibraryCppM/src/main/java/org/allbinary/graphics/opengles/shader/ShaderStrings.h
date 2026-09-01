
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShaderStrings
            : public Object
         {

    private: static ShaderStrings instance() { return ShaderStrings(); }

    public: static ShaderStrings getInstance();

    public: const std::string NO_PROGRAM_HANDLE = "No program handle";

    public: const std::string UNIFORM_BLOCK_HANDLE = "Uniform Block Handle: ";

    public: const std::string UNIFORM_HANDLE = "Uniform Handle: ";

    public: const std::string UNIFORM_ATTRIBUTE_HANDLE = "Uniform Attribute Handle: ";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_H
