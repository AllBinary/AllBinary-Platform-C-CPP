
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGLRESOURCES_H
        #define ORG_PLATFORM_OPENGLRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLResources
            : public virtual Object
         {

    private: static OpenGLResources* instance_owner();
    private: static OpenGLResources* instance;

    public: static OpenGLResources* getInstance();


            
    public: OpenGLResources();
        
    public: void init();

    public: bool isExcluded(std::string name);

    public: int32_t getIdentifier(std::string name, std::string defType, std::string defPackage);

                //@Throws(Exception.constructor)
            
    public: InputStream* openRawResource(int32_t id);

                //@Throws(Exception.constructor)
            
    public: InputStream* openRawResourceFromName(std::string resourceName);

                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resourceName);

    public: std::string getPackageName();

};

            


        #endif //ORG_PLATFORM_OPENGLRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_PLATFORM_OPENGLRESOURCES_H_COMPLETE)
        #define ORG_PLATFORM_OPENGLRESOURCES_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif

        #endif
    
