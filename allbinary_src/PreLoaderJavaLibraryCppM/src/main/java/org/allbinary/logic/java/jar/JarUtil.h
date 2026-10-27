
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_JAR_JARUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_JAR_JARUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/IOException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarInputStream.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JarUtil
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

    private: URL* jarURL;

public: JarUtil(URL* jarURL);

    public: void show();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_JAR_JARUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_JAR_JARUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_JAR_JARUTIL_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<java/net/URLConnection.h>)
#include <java/net/URLConnection.h>
#endif
#if __has_include(<java/util/jar/JarEntry.h>)
#include <java/util/jar/JarEntry.h>
#endif
#if __has_include(<java/util/jar/JarInputStream.h>)
#include <java/util/jar/JarInputStream.h>
#endif

        #endif
    
