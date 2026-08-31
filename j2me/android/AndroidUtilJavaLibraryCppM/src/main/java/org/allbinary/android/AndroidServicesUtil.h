
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
        
            #include "../../../java/lang/Object.h"
        
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
        

    public static AndroidServicesUtil getInstance();

    private: static const instance: AndroidServicesUtil = new AndroidServicesUtil();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;

    private: const SERVICE_LIMIT_MAX: int32_t = 1000;

    private: const IS_SERVICE_RUNNING: string = "isServiceRunning";

    private: const SERVICE_NOT_FOUND_RUNNING: string = "Service not found Running: ";

    public bool isServiceRunning(string name);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_H
