
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_CPP
        #define ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/AndroidServicesUtil.h"
        

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
        

AndroidServicesUtil::AndroidServicesUtil() : logUtil(LogUtil::getInstance()), resourceUtil(ResourceUtil::getInstance()) {
        }
        
    auto AndroidServicesUtil::getInstance() -> AndroidServicesUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AndroidServicesUtil::instance;
    
}

auto AndroidServicesUtil::instance_owner() -> AndroidServicesUtil* { static std::unique_ptr<AndroidServicesUtil> value(new AndroidServicesUtil()); return value.get(); }
AndroidServicesUtil* AndroidServicesUtil::instance = AndroidServicesUtil::instance_owner();

    auto AndroidServicesUtil::isServiceRunning(std::string name) -> bool{

    ActivityManager* activityManager = dynamic_cast<ActivityManager*>(this->resourceUtil->getContext()->getSystemService(Context::ACTIVITY_SERVICE));;
    

    List<RunningServiceInfo*>* runningServicesList = activityManager->getRunningServices(this->SERVICE_LIMIT_MAX);;
    

    RunningServiceInfo* runningServiceInfo;;
    

    ComponentName* serviceComponent;;
    

    std::string serviceName;;
    

    int32_t size = runningServicesList->size;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
runningServiceInfo= runningServicesList->get(index);
    
serviceComponent= runningServiceInfo->service;
    
serviceName= JavaString::valueOf(serviceComponent);
    

                        if(JavaString::indexOf(serviceName, name) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}

this->logUtil->putF(JavaString::valueOf(this->SERVICE_NOT_FOUND_RUNNING) +JavaString::valueOf(name), this, this->IS_SERVICE_RUNNING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_ANDROID_ANDROIDSERVICESUTIL_CPP
