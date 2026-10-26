
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_VERTEXATTRIBUTEPOINTEROPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_VERTEXATTRIBUTEPOINTEROPENGLPROCESSOR_H

            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VertexAttributePointerOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static VertexAttributePointerOpenGLProcessor instance() { return VertexAttributePointerOpenGLProcessor(); }

    public: static VertexAttributePointerOpenGLProcessor getInstance();

public: VertexAttributePointerOpenGLProcessor();

    public: void process(GL10 gl, Object* anyType);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_VERTEXATTRIBUTEPOINTEROPENGLPROCESSOR_H
