
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/KotlinUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SoftwareInformation
            : public Object
         {
        

    private: const name: string;

    private: const shortName: string;

    private: const version: string;

public constructor (string name, string version, string shortName);

    public string getName();

    public string getVersion();

    public string toShortString();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_H
