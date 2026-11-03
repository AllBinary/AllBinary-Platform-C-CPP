
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_MODELVIEWPROJECTION_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_MODELVIEWPROJECTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ModelViewProjection::ModelViewProjection() {
        }
        auto ModelViewProjection::instance_owner() -> ModelViewProjection* { static std::unique_ptr<ModelViewProjection> value(new ModelViewProjection()); return value.get(); }
ModelViewProjection* ModelViewProjection::instance = ModelViewProjection::instance_owner();

    auto ModelViewProjection::getInstance() -> ModelViewProjection*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModelViewProjection::instance;
    
}


    auto ModelViewProjection::get() -> std::vector<float>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullUtil::getInstance()->NULL_FLOAT_ARRAY;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_MODELVIEWPROJECTION_CPP
