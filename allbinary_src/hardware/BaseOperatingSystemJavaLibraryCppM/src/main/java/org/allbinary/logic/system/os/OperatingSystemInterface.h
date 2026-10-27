
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class CharacterSet;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OperatingSystemInterface
            : public virtual Object
         {

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

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/java/character/CharacterSet.h>)
#include <org/allbinary/logic/java/character/CharacterSet.h>
#endif

        #endif
    
