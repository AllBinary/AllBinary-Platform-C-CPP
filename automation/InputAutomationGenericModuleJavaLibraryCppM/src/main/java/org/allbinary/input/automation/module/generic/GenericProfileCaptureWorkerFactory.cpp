
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/GenericProfileCaptureWorkerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>

      
#include <org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/SavedCaptureImagesWorker.h"


GenericProfileCaptureWorkerFactory::GenericProfileCaptureWorkerFactory(){
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileCaptureWorkerFactory::getInstance(GenericProfile* genericProfile) -> CaptureWorkerInterface*{

    BasicArrayList* vector = genericProfile->getGenericProfileDataWorkerTypeVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfileDataWorkerType* genericProfileDataWorkerType = dynamic_cast<GenericProfileDataWorkerType*>(vector->get(index));;
    

                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::SCREEN_CAPTURE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ScreenCaptureImagesWorker();
    

                                    }
                                
                             else 
                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::SAVED_CAPTURE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SavedCaptureImagesWorker(dynamic_cast<SavedCaptureGenericProfileDataWorkerType*>(genericProfileDataWorkerType));
    

                                    }
                                
}




                            throw Exception("No CaptureWorkerInterface specified in GenericProfile");
                    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_CPP
