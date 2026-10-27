
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"

class KeyboardActionScriptInputInterface: public ProfileActionScriptInputInterface {

    public: virtual int32_t getDelayBetweenKeys() = 0;

    public: virtual std::vector<int32_t> getKeyArray() = 0;

    public: virtual bool isPress() = 0;

    public: virtual bool isRelease() = 0;

    public: virtual bool isNormal() = 0;

    public: virtual void setPress(bool press) = 0;

    public: virtual void setRelease(bool release) = 0;

    public: virtual void setNormal() = 0;

    public: virtual std::string getText() = 0;

    public: virtual void setText(std::string text) = 0;

    public: virtual void log() = 0;

};

            

