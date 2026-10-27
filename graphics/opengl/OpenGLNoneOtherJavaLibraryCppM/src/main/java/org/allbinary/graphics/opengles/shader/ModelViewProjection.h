
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_MODELVIEWPROJECTION_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_MODELVIEWPROJECTION_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ModelViewProjection
            : public Object
         {

    private: static ModelViewProjection* instance() { static std::unique_ptr<ModelViewProjection> value(new ModelViewProjection()); return value.get(); }

    public: static ModelViewProjection* getInstance();

    public: std::vector<float> get();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_MODELVIEWPROJECTION_H
