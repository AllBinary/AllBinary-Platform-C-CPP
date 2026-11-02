
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2019 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H
        #define ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/List.h>
class ActivityManager;
class RunningServiceInfo;
class ComponentName;
class Context;
class ResourceUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidServicesUtil
            : public virtual Object
         {

    public: static AndroidServicesUtil* getInstance();

    private: static AndroidServicesUtil* instance_owner();
    private: static AndroidServicesUtil* instance;


            
    public: AndroidServicesUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: ResourceUtil* resourceUtil;

    private: const int32_t SERVICE_LIMIT_MAX = 1000;

    private: const std::string IS_SERVICE_RUNNING = "isServiceRunning";

    private: const std::string SERVICE_NOT_FOUND_RUNNING = "Service not found Running: ";

    public: bool isServiceRunning(std::string name);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H_COMPLETE
        #if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<android/app/ActivityManager.h>)
#include <android/app/ActivityManager.h>
#endif
#if __has_include(<android/app/ActivityManager/RunningServiceInfo.h>)
#include <android/app/ActivityManager/RunningServiceInfo.h>
#endif
#if __has_include(<android/content/ComponentName.h>)
#include <android/content/ComponentName.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
