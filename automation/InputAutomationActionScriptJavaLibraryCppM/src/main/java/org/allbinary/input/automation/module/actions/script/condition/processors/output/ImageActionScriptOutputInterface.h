
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptOutputInterface.h"
#include "ImageTypes.h"

class ImageActionScriptOutputInterface: public ProfileActionScriptOutputInterface {

    ImageTypes getImageTypes();

    void setImageTypes(ImageTypes imageTypes);

    bool isSaved();

    void setSaved(bool saved);

    bool isDisplay();

    void setDisplay(bool display);

    void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTINTERFACE_H
