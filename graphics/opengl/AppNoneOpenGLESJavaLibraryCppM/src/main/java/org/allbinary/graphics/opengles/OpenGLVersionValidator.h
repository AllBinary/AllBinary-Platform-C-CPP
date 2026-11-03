
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ShaderComposite;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLVersionValidator
            : public virtual Object
         {

    private: static OpenGLVersionValidator* instance_owner();
    private: static OpenGLVersionValidator* instance;

    public: static OpenGLVersionValidator* getInstance();


            
    public: OpenGLVersionValidator();
        
    public: bool isGL31OrHigher();

    public: bool isAvailable(std::string glVersionRequired);

    public: void setShaderComposite(ShaderComposite* shaderComposite, Object* anyType);
    public: void setShaderComposite(ShaderComposite* shaderComposite, const std::string& anyType) { return setShaderComposite(shaderComposite, JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setShaderComposite(ShaderComposite* shaderComposite, BoxValue anyType) { return setShaderComposite(shaderComposite, JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void setShaderComposite(ShaderComposite* shaderComposite, const std::vector<BoxElement>& anyType) { return setShaderComposite(shaderComposite, JavaBoxes::toObject(anyType)); }

    public: int32_t EGL_CONTEXT_CLIENT_VERSION_VALUE =  -1;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/opengles/shader/ShaderComposite.h>)
#include <org/allbinary/graphics/opengles/shader/ShaderComposite.h>
#endif

        #endif
    
