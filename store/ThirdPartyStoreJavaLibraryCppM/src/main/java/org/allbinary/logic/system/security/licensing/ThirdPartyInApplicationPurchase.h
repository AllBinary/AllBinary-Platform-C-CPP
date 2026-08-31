
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThirdPartyInApplicationPurchaseInterface.h"
#include "LockableFeature.h"

class ThirdPartyInApplicationPurchase
            : public Object
        : public ThirdPartyInApplicationPurchaseInterface {
        

    public bool isPurchased(LockableFeature lockableFeature);

    public onCreate(any = {} anyType, any = {} stateObject);

    public onDestroy();

    public onStart();

    public onActivityResult(int32_t requestCode, int32_t resultCode, any = {} dataObject);

    public onSaveInstanceState(any = {} anyType);

    public onStop();

    public requestPurchase(LockableFeature lockableFeature);

    public requestReceipts();

    public add(LockableFeature lockableFeature);

    public string getUserName();

    public bool isEnabled();

    requestProducts();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H
