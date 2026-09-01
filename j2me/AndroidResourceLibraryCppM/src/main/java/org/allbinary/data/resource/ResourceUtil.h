
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/io/InputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <android/app/Activity.h>

      
#include <android/content/Context.h>

      
#include <android/content/res/Resources.h>

      
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Android
class ResourceUtil
            : public Object
         {

    private: static ResourceUtil instance() { return ResourceUtil(); }

    public: static ResourceUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Object* context = NullUtil::getInstance().NULL_OBJECT;

    private: Object* resources = NullUtil::getInstance().NULL_OBJECT;

    private: Hashtable<any, any> hashMap = Hashtable<any, any>();

private: ResourceUtil();

    public: void setLoadingPaths(std::string path, std::string ext);

    public: Context getContext();

    public: void setContextFromActivity(Activity activity);

    public: void setContext(Context aContext);

    public: Integer getResourceId(std::string resource);

    public: void addResource(std::string resource, Integer value);

    private: bool containsDuplicate(std::string resource, Integer value);

    public: void setResources(Resources resources);

                //@Throws(Exception.constructor)
            
    public: InputStream getResourceAsStream(std::string resource);

};

            


        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
