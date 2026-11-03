
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLThreadUtil
            : public virtual Object
         {

    private: static OpenGLThreadUtil* instance_owner();
    private: static OpenGLThreadUtil* instance;

    public: static OpenGLThreadUtil* getInstance();


            
    public: OpenGLThreadUtil();
        
    public: void set(Object* glSurfaceView);
    public: void set(const std::string& glSurfaceView) { return set(JavaString::box(glSurfaceView)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void set(BoxValue glSurfaceView) { return set(JavaBoxes::toObject(glSurfaceView)); }
    public: template<typename BoxElement> void set(const std::vector<BoxElement>& glSurfaceView) { return set(JavaBoxes::toObject(glSurfaceView)); }

    public: void onPause();

    public: void onResume();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H_COMPLETE
        
        #endif
    
