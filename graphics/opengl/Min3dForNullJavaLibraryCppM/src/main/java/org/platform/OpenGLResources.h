
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
        

    private: static const instance: OpenGLResources = new OpenGLResources();

    public static OpenGLResources getInstance();

    public init();

    public bool isExcluded(string name);

    public int32_t getIdentifier(string name, string defType, string defPackage);

                //@Throws(Exception.constructor)
            
    public InputStream openRawResource(int32_t id);

                //@Throws(Exception.constructor)
            
    public InputStream openRawResourceFromName(string resourceName);

                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resourceName);

    public string getPackageName();

};

            


        #endif //ORG_PLATFORM_OPENGLRESOURCES_H
