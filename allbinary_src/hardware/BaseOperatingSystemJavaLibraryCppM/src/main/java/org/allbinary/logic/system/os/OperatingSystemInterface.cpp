
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

        
#include <org/allbinary/logic/java/character/CharacterSet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OperatingSystemInterface {

    public: virtual std::string getName() = 0;

    public: virtual std::string getVersion() = 0;

    public: virtual std::string getArch() = 0;

    public: virtual CharacterSet* getCharacterSet() = 0;

    public: virtual bool isOverScan() = 0;

    public: virtual int32_t getOverScanXPercent() = 0;

    public: virtual int32_t getOverScanYPercent() = 0;

    public: virtual bool isScalable() = 0;

    public: virtual bool isAutoHide() = 0;

    public: virtual std::string toString() = 0;

};

            

