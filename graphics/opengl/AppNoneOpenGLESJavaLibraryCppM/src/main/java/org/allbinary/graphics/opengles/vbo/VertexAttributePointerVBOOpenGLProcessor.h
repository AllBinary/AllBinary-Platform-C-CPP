
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_VERTEXATTRIBUTEPOINTERVBOOPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_VERTEXATTRIBUTEPOINTERVBOOPENGLPROCESSOR_H

            #include "../../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VertexAttributePointerVBOOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static VertexAttributePointerVBOOpenGLProcessor instance() { return VertexAttributePointerVBOOpenGLProcessor(); }

    public: static VertexAttributePointerVBOOpenGLProcessor getInstance();

public: VertexAttributePointerVBOOpenGLProcessor();

    public: void process(GL10 gl, Object* anyType);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_VERTEXATTRIBUTEPOINTERVBOOPENGLPROCESSOR_H
