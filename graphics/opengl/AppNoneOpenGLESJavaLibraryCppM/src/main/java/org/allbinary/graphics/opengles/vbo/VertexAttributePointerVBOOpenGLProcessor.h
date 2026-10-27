
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class GL10;
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VertexAttributePointerVBOOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static VertexAttributePointerVBOOpenGLProcessor* instance_owner();
    private: static VertexAttributePointerVBOOpenGLProcessor* instance;

    public: static VertexAttributePointerVBOOpenGLProcessor* getInstance();

public: VertexAttributePointerVBOOpenGLProcessor();

    public: void process(GL10* gl, Object* anyType);
    public: void process(GL10* gl, const std::string& anyType) { return process(gl, JavaString::box(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_VERTEXATTRIBUTEPOINTERVBOOPENGLPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_VERTEXATTRIBUTEPOINTERVBOOPENGLPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_VBO_VERTEXATTRIBUTEPOINTERVBOOPENGLPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>)
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>
#endif

        #endif
    
