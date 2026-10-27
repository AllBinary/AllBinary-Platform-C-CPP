
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/media/image/InputImageType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"

auto SavedCaptureGenericProfileDataWorkerType::SAVED_CAPTURE_owner() -> SavedCaptureGenericProfileDataWorkerType* { static std::unique_ptr<SavedCaptureGenericProfileDataWorkerType> value(new SavedCaptureGenericProfileDataWorkerType(JavaString::valueOf("Saved ") +JavaString::valueOf(InputImageType::CAPTURE->getName()), "c:\\share\\captures\\2\\", 100)); return value.get(); }
SavedCaptureGenericProfileDataWorkerType* SavedCaptureGenericProfileDataWorkerType::SAVED_CAPTURE = SavedCaptureGenericProfileDataWorkerType::SAVED_CAPTURE_owner();

SavedCaptureGenericProfileDataWorkerType::SavedCaptureGenericProfileDataWorkerType(std::string name, std::string path, int32_t lastFrame) : GenericProfileDataWorkerType(name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setPath(path);
    
this->setLastFrame(lastFrame);
    
}


    auto SavedCaptureGenericProfileDataWorkerType::getPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}


    auto SavedCaptureGenericProfileDataWorkerType::setPath(std::string path) -> void{
this->path= path;
    
}


    auto SavedCaptureGenericProfileDataWorkerType::getLastFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastFrame;
    
}


    auto SavedCaptureGenericProfileDataWorkerType::setLastFrame(int32_t lastFrame) -> void{
this->lastFrame= lastFrame;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_CPP
