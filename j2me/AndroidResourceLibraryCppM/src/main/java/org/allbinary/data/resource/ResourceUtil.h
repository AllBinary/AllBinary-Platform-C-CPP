
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/InputStream.h>
class Activity;
class Context;
class Resources;
class DebugFactory;
class NoDebug;
class NullUtil;
class StdUtil;
class ForcedLogUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class CommonSeps;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
class HashtableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Android
class ResourceUtil
            : public virtual Object
         {

    private: static ResourceUtil* instance_owner();
    private: static ResourceUtil* instance;

    public: static ResourceUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: Object* context;

    private: Object* resources;

    private: ABHashtable<Object*, Object*>* hashMap;

private: ResourceUtil();

    public: void setLoadingPaths(std::string path, std::string ext);

    public: Context* getContext();

    public: void setContextFromActivity(Activity* activity);

    public: void setContext(Context* aContext);

    public: int32_t getResourceId(std::string resource);

    public: void addResource(std::string resource, int32_t value);

    private: bool containsDuplicate(std::string resource, int32_t value);

    public: void setResources(Resources* resources);

                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resource);

};

            


        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/content/res/Resources.h>)
#include <android/content/res/Resources.h>
#endif
#if __has_include(<org/allbinary/debug/DebugFactory.h>)
#include <org/allbinary/debug/DebugFactory.h>
#endif
#if __has_include(<org/allbinary/debug/NoDebug.h>)
#include <org/allbinary/debug/NoDebug.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif

        #endif
    
