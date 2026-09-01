
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

    public: static AndroidServicesUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidServicesUtil::instance();
    
}


    private: static AndroidServicesUtil instance() { return AndroidServicesUtil(); }

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const ResourceUtil resourceUtil = ResourceUtil::getInstance();

    private: const int32_t SERVICE_LIMIT_MAX = 1000;

    private: const std::string IS_SERVICE_RUNNING = "isServiceRunning";

    private: const std::string SERVICE_NOT_FOUND_RUNNING = "Service not found Running: ";

    public: bool isServiceRunning(std::string name){

    ActivityManager activityManager = this->resourceUtil.getContext().getSystemService(Context::ACTIVITY_SERVICE) as unknown as ActivityManager;;
    

    List<RunningServiceInfo> runningServicesList = activityManager.getRunningServices(this->SERVICE_LIMIT_MAX);;
    

    RunningServiceInfo runningServiceInfo;;
    

    ComponentName serviceComponent;;
    

    std::string serviceName;;
    

    int32_t size = runningServicesList.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
runningServiceInfo= runningServicesList.get(index);
    
serviceComponent= runningServiceInfo.service;
    
serviceName= serviceComponent.toString();
    

                        if(serviceName.indexOf(name) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}

this->logUtil.putF(this->SERVICE_NOT_FOUND_RUNNING +name, this, this->IS_SERVICE_RUNNING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

