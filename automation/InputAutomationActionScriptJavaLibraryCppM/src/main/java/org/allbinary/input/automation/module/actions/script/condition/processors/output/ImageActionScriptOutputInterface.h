
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"
class ImageTypes;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageActionScriptOutputInterface: public virtual ProfileActionScriptOutputInterface {

    public: virtual ImageTypes* getImageTypes() = 0;

    public: virtual void setImageTypes(ImageTypes* imageTypes) = 0;

    public: virtual bool isSaved() = 0;

    public: virtual void setSaved(bool saved) = 0;

    public: virtual bool isDisplay() = 0;

    public: virtual void setDisplay(bool display) = 0;

    public: virtual void log() = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#endif

        #endif
    
