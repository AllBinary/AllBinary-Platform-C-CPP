
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

#include <org/allbinary/input/media/image/InputImageType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileDataWorkerType.h"

class SavedCaptureGenericProfileDataWorkerType: public GenericProfileDataWorkerType {
        

    public static SAVED_CAPTURE: SavedCaptureGenericProfileDataWorkerType = new SavedCaptureGenericProfileDataWorkerType("Saved " +InputImageType.CAPTURE.getName(), "c:\\share\\captures\\2\\", 100);

    private: path: string;

    private: lastFrame: int32_t= 0;

public constructor (string name, string path, int32_t lastFrame);

    public string getPath();

    public setPath(string path);

    public int32_t getLastFrame();

    public setLastFrame(int32_t lastFrame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_SAVEDCAPTUREGENERICPROFILEDATAWORKERTYPE_H
