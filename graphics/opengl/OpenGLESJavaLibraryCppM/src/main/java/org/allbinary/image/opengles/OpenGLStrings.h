
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLStrings
            : public virtual Object
         {

    private: static OpenGLStrings* instance_owner();
    private: static OpenGLStrings* instance;

    public: static OpenGLStrings* getInstance();


            
    public: OpenGLStrings();
        
    public: const std::string GL_ERROR_LABEL = "GLError: ";

    public: const std::string SET = "set(GL10)";

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_H_COMPLETE
        
        #endif
    
