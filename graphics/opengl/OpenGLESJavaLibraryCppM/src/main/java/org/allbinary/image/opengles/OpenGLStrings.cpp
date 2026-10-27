
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLStrings
            : public Object
         {

    private: static OpenGLStrings* instance() { static std::unique_ptr<OpenGLStrings> value(new OpenGLStrings()); return value.get(); }

    public: static OpenGLStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLStrings::instance();
    
}


    public: const std::string GL_ERROR_LABEL = "GLError: ";

    public: const std::string SET = "set(GL10)";

};

            

