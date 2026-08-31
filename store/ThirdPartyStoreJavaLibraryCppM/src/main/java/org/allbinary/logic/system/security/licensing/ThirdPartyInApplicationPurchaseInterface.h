
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LockableFeature.h"

class ThirdPartyInApplicationPurchaseInterface {
        

    bool isPurchased(LockableFeature lockableFeature);

    onCreate(any anyType, any stateObject);

    onDestroy();

    onStart();

    onActivityResult(int32_t requestCode, int32_t resultCode, any dataObject);

    onSaveInstanceState(any anyType);

    onStop();

    requestPurchase(LockableFeature lockableFeature);

    requestReceipts();

    add(LockableFeature lockableFeature);

    string getUserName();

    bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H
