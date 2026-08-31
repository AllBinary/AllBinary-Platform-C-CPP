
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
        

    public static AndroidServicesUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidServicesUtil.instance;
    
}


    private: static const instance: AndroidServicesUtil = new AndroidServicesUtil();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;

    private: const SERVICE_LIMIT_MAX: int32_t = 1000;

    private: const IS_SERVICE_RUNNING: string = "isServiceRunning";

    private: const SERVICE_NOT_FOUND_RUNNING: string = "Service not found Running: ";

    public bool isServiceRunning(string name){

    activityManager: ActivityManager = this.resourceUtil!.getContext()!.getSystemService(Context.ACTIVITY_SERVICE) as unknown as ActivityManager;;
    

    runningServicesList: List<RunningServiceInfo> = activityManager!.getRunningServices(this.SERVICE_LIMIT_MAX)!;;
    

    runningServiceInfo: RunningServiceInfo;;
    

    serviceComponent: ComponentName;;
    

    serviceName: string;;
    

    size: int32_t = runningServicesList!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
runningServiceInfo= runningServicesList!.get(index);
    
serviceComponent= runningServiceInfo!.service;
    
serviceName= serviceComponent!.toString();
    

                        if(serviceName!.indexOf(name) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}

this.logUtil!.putF(this.SERVICE_NOT_FOUND_RUNNING +name, this, this.IS_SERVICE_RUNNING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

