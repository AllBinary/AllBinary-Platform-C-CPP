
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGLRESOURCES_H
        #define ORG_PLATFORM_OPENGLRESOURCES_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLResources
            : public Object
         {

    private: static OpenGLResources instance() { return OpenGLResources(); }

    public: static OpenGLResources getInstance();

    public: void init();

    public: bool isExcluded(std::string name);

    public: int32_t getIdentifier(std::string name, std::string defType, std::string defPackage);

                //@Throws(Exception.constructor)
            
    public: InputStream openRawResource(int32_t id);

                //@Throws(Exception.constructor)
            
    public: InputStream openRawResourceFromName(std::string resourceName);

                //@Throws(Exception.constructor)
            
    public: InputStream getResourceAsStream(std::string resourceName);

    public: std::string getPackageName();

};

            


        #endif //ORG_PLATFORM_OPENGLRESOURCES_H
