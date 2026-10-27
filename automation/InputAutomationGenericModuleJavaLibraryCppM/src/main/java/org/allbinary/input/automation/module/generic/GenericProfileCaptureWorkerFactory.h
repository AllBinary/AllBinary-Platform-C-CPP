
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class GenericProfile;
class GenericProfileDataWorkerType;
class SavedCaptureGenericProfileDataWorkerType;
class CaptureWorkerInterface;
class ScreenCaptureImagesWorker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SavedCaptureImagesWorker;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileCaptureWorkerFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static CaptureWorkerInterface* getInstance(GenericProfile* genericProfile);

private: GenericProfileCaptureWorkerFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICPROFILECAPTUREWORKERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h>
#endif
#if __has_include(<org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>)
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>
#endif
#if __has_include(<org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>)
#include <org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/SavedCaptureImagesWorker.h")
#include "org/allbinary/input/automation/module/generic/SavedCaptureImagesWorker.h"
#endif

        #endif
    
