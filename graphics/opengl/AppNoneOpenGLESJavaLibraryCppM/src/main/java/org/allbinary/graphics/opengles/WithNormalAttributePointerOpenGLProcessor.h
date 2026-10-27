
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_WITHNORMALATTRIBUTEPOINTEROPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_WITHNORMALATTRIBUTEPOINTEROPENGLPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WithNormalAttributePointerOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static WithNormalAttributePointerOpenGLProcessor* instance() { static std::unique_ptr<WithNormalAttributePointerOpenGLProcessor> value(new WithNormalAttributePointerOpenGLProcessor()); return value.get(); }

    public: static WithNormalAttributePointerOpenGLProcessor* getInstance();

public: WithNormalAttributePointerOpenGLProcessor();

    public: void process(GL10* gl, Object* aObject3d);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_WITHNORMALATTRIBUTEPOINTEROPENGLPROCESSOR_H
