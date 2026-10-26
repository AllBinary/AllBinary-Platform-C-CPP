
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/opengles/shader/ShaderComposite.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLVersionValidator
            : public Object
         {

    private: static OpenGLVersionValidator instance() { return OpenGLVersionValidator(); }

    public: static OpenGLVersionValidator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLVersionValidator::instance();
    
}


    public: bool isGL31OrHigher(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isAvailable(std::string glVersionRequired){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void setShaderComposite(ShaderComposite shaderComposite, Object* anyType){
}


    public: int32_t EGL_CONTEXT_CLIENT_VERSION_VALUE =  -1;

};

            

