
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EnableFacesShaderOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static EnableFacesShaderOpenGLProcessor* instance_owner();
    private: static EnableFacesShaderOpenGLProcessor* instance;

    public: static EnableFacesShaderOpenGLProcessor* getInstance();

public: EnableFacesShaderOpenGLProcessor();

    public: void process(GL10* gl, Object* anyType);
    public: void process(GL10* gl, const std::string& anyType) { return process(gl, JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void process(GL10* gl, BoxValue anyType) { return process(gl, JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void process(GL10* gl, const std::vector<BoxElement>& anyType) { return process(gl, JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_ENABLEFACESSHADEROPENGLPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>)
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>
#endif

        #endif
    
