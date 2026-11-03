
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGLRESOURCES_CPP
        #define ORG_PLATFORM_OPENGLRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/platform/OpenGLResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLResources::OpenGLResources() {
        }
        auto OpenGLResources::instance_owner() -> OpenGLResources* { static std::unique_ptr<OpenGLResources> value(new OpenGLResources()); return value.get(); }
OpenGLResources* OpenGLResources::instance = OpenGLResources::instance_owner();

    auto OpenGLResources::getInstance() -> OpenGLResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLResources::instance;
    
}


    auto OpenGLResources::init() -> void{
}


    auto OpenGLResources::isExcluded(std::string name) -> bool{



                            throw RuntimeException();
                    
}


    auto OpenGLResources::getIdentifier(std::string name, std::string defType, std::string defPackage) -> int32_t{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLResources::openRawResource(int32_t id) -> InputStream*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLResources::openRawResourceFromName(std::string resourceName) -> InputStream*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto OpenGLResources::getResourceAsStream(std::string resourceName) -> InputStream*{



                            throw RuntimeException();
                    
}


    auto OpenGLResources::getPackageName() -> std::string{



                            throw RuntimeException();
                    
}




        #endif //ORG_PLATFORM_OPENGLRESOURCES_CPP
