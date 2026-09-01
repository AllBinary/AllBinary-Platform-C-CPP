
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

    public: bool isPurchased(LockableFeature lockableFeature);

    public: void onCreate(Object* anyType, Object* stateObject);

    public: void onDestroy();

    public: void onStart();

    public: void onActivityResult(int32_t requestCode, int32_t resultCode, Object* dataObject);

    public: void onSaveInstanceState(Object* anyType);

    public: void onStop();

    public: void requestPurchase(LockableFeature lockableFeature);

    public: void requestReceipts();

    public: void add(LockableFeature lockableFeature);

    public: std::string getUserName();

    public: bool isEnabled();

    protected: void requestProducts();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_H
