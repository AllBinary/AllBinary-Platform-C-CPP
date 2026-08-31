
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
        



        #ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_H
        #define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThirdPartyStore
            : public Object
         {
        

    private: authorized: bool= false;

    private: const name: string;

public constructor (string name);

    public authorize(AbeClientInformationInterface clientInformationInterface);

    public bool isAuthorized();

    setAuthorized(bool authorized);

    public string getName();

};

            


        #endif //ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_H
