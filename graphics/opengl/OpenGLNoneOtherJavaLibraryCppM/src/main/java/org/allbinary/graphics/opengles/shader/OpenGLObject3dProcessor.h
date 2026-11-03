
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLObject3dProcessor
            : public virtual Object
         {


            
    public: OpenGLObject3dProcessor();
        
    /*protected*/ public: CommonStrings* commonStrings;

    public: void process(GL10* gl, Object* object3d);
    public: void process(GL10* gl, const std::string& object3d) { return process(gl, JavaString::box(object3d)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void process(GL10* gl, BoxValue object3d) { return process(gl, JavaBoxes::toObject(object3d)); }
    public: template<typename BoxElement> void process(GL10* gl, const std::vector<BoxElement>& object3d) { return process(gl, JavaBoxes::toObject(object3d)); }

    public: void process(GL10* gl, Object* object3d, int32_t index);
    public: void process(GL10* gl, const std::string& object3d, int32_t index) { return process(gl, JavaString::box(object3d), index); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void process(GL10* gl, BoxValue object3d, int32_t index) { return process(gl, JavaBoxes::toObject(object3d), index); }
    public: template<typename BoxElement> void process(GL10* gl, const std::vector<BoxElement>& object3d, int32_t index) { return process(gl, JavaBoxes::toObject(object3d), index); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
