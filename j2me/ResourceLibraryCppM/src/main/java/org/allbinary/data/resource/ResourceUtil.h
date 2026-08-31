
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
        



        #ifndef ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
        #define ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/ClassLoader.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SE - J2ME
class ResourceUtil
            : public Object
         {
        

    private: static classLoader: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: static const instance: ResourceUtil = new ResourceUtil();

    public static ResourceUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

    public setLoadingPaths(string path, string ext);

    public setClassLoader(ClassLoader classLoader);

                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resource);

                //@Throws(Exception.constructor)
            
    InputStream getResourceAsStreamAtStart(string resource, int32_t startIndex);

    public addResource(string resource, Integer value);

};

            


        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
