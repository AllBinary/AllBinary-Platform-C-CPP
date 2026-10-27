
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LockableFeature.h"

class ThirdPartyInApplicationPurchaseInterface {

    public: virtual bool isPurchased(LockableFeature* lockableFeature) = 0;

    public: virtual void onCreate(Object* anyType, Object* stateObject) = 0;

    public: virtual void onDestroy() = 0;

    public: virtual void onStart() = 0;

    public: virtual void onActivityResult(int32_t requestCode, int32_t resultCode, Object* dataObject) = 0;

    public: virtual void onSaveInstanceState(Object* anyType) = 0;

    public: virtual void onStop() = 0;

    public: virtual void requestPurchase(LockableFeature* lockableFeature) = 0;

    public: virtual void requestReceipts() = 0;

    public: virtual void add(LockableFeature* lockableFeature) = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual bool isEnabled() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H
