
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

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/List.h>

      
#include <android/app/ActivityManager.h>

      
#include <android/app/ActivityManager/RunningServiceInfo.h>

      
#include <android/content/ComponentName.h>

      
#include <android/content/Context.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidServicesUtil
            : public Object
         {

    public: static AndroidServicesUtil* getInstance();

    private: static AndroidServicesUtil* instance() { static std::unique_ptr<AndroidServicesUtil> value(new AndroidServicesUtil()); return value.get(); }

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: ResourceUtil* resourceUtil = ResourceUtil::getInstance();

    private: const int32_t SERVICE_LIMIT_MAX = 1000;

    private: const std::string IS_SERVICE_RUNNING = "isServiceRunning";

    private: const std::string SERVICE_NOT_FOUND_RUNNING = "Service not found Running: ";

    public: bool isServiceRunning(std::string name);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H
