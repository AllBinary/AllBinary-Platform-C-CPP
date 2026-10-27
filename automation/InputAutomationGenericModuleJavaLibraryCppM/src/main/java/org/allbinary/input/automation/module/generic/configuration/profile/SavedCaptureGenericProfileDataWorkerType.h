
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class InputImageType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SavedCaptureGenericProfileDataWorkerType: public GenericProfileDataWorkerType {

    private: static SavedCaptureGenericProfileDataWorkerType* SAVED_CAPTURE_owner();
    public: static SavedCaptureGenericProfileDataWorkerType* SAVED_CAPTURE;

    private: std::string path;

    private: int32_t lastFrame= 0;

public: SavedCaptureGenericProfileDataWorkerType(std::string name, std::string path, int32_t lastFrame);

    public: std::string getPath();

    public: void setPath(std::string path);

    public: int32_t getLastFrame();

    public: void setLastFrame(int32_t lastFrame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_H_COMPLETE
        #if __has_include(<org/allbinary/input/media/image/InputImageType.h>)
#include <org/allbinary/input/media/image/InputImageType.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
#endif

        #endif
    
