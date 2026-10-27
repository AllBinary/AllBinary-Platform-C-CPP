
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2ME
class ResourceUtil
            : public Object
         {

    private: static ResourceUtil* instance() { static std::unique_ptr<ResourceUtil> value(new ResourceUtil()); return value.get(); }

    public: static ResourceUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ResourceUtil();

    public: void setLoadingPaths(std::string path, std::string ext);

                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resource);

                //@Throws(Exception.constructor)
            
    private: InputStream* getResourceAsStreamAtStart(std::string resource, int32_t startIndex);

    public: void addResource(std::string resource, int32_t value);

};

            


        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
