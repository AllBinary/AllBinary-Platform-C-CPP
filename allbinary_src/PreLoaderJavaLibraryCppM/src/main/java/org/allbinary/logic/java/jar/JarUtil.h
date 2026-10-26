
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <java/net/URL.h>

      
#include <java/net/URLConnection.h>

      
#include <java/util/jar/JarEntry.h>

      
#include <java/util/jar/JarInputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class JarUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

    private: URL jarURL;

public: JarUtil(URL jarURL);

    public: void show();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_JAR_JARUTIL_H
