
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CAPTUREWORKERUTIL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CAPTUREWORKERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/CaptureWorkerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CaptureWorkerUtil::CaptureWorkerUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto CaptureWorkerUtil::processProfileActionConditions(BasicArrayList* vector, int64_t frame) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(commonStrings->START, "CaptureWorkerUtil", "processProfileActionConditions");
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ProfileActionScriptConditionInterface* profileActionConditionInterface = dynamic_cast<ProfileActionScriptConditionInterface*>(vector->get(index));;
    

                        if(profileActionConditionInterface->shouldProcess(frame))
                        
                                    {
                                    profileActionConditionInterface->process(frame);
    

                                    }
                                
                        else {
                            
                        }
                            
}

}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CAPTUREWORKERUTIL_CPP
