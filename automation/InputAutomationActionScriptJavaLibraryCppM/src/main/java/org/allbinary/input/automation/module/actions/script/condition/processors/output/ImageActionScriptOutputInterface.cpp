
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"

class ImageActionScriptOutputInterface: public ProfileActionScriptOutputInterface {

    public: virtual ImageTypes* getImageTypes() = 0;

    public: virtual void setImageTypes(ImageTypes* imageTypes) = 0;

    public: virtual bool isSaved() = 0;

    public: virtual void setSaved(bool saved) = 0;

    public: virtual bool isDisplay() = 0;

    public: virtual void setDisplay(bool display) = 0;

    public: virtual void log() = 0;

};

            

