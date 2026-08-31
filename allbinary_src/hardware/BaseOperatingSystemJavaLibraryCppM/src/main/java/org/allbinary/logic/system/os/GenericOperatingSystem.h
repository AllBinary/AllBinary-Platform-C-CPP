
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/java/character/CharacterSet.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OperatingSystemInterface.h"
#include "SystemProperties.h"

class GenericOperatingSystem
            : public Object
        : public OperatingSystemInterface {
        

    private: const osName: string;

    private: const osArch: string;

    private: const osVersion: string;

    private: const characterSet: CharacterSet = new CharacterSet();

    scalable: bool = false;

public constructor ();

    public string getName();

    public string getVersion();

    public string getArch();

    public CharacterSet getCharacterSet();

    public bool isOverScan();

    public int32_t getOverScanXPercent();

    public int32_t getOverScanYPercent();

    public bool isScalable();

    public bool isAutoHide();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H
