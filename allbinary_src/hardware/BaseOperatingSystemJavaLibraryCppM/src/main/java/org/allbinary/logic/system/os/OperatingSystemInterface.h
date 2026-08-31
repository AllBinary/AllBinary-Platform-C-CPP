
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

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/java/character/CharacterSet.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OperatingSystemInterface {
        

    string getName();

    string getVersion();

    string getArch();

    CharacterSet getCharacterSet();

    bool isOverScan();

    int32_t getOverScanXPercent();

    int32_t getOverScanYPercent();

    bool isScalable();

    bool isAutoHide();

    string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMINTERFACE_H
