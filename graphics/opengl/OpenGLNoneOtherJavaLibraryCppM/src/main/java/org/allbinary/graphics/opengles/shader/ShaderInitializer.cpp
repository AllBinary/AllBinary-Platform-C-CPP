
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/Shader.h"

class ShaderInitializer
            : public Object
         {

    private: static ShaderInitializer* instance() { static std::unique_ptr<ShaderInitializer> value(new ShaderInitializer()); return value.get(); }

    public: static ShaderInitializer* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShaderInitializer::instance();
    
}


    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: int32_t init(GL10* gl, std::vector<Shader*> shader, std::vector<std::string> attributeArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

