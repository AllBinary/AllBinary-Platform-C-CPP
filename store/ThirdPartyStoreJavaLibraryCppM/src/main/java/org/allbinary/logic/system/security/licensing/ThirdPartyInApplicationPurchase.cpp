
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchaseInterface.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"


ThirdPartyInApplicationPurchase::ThirdPartyInApplicationPurchase() {
        }
        
    auto ThirdPartyInApplicationPurchase::isPurchased(LockableFeature* lockableFeature) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ThirdPartyInApplicationPurchase::onCreate(Object* anyType, Object* stateObject) -> void{
}


    auto ThirdPartyInApplicationPurchase::onDestroy() -> void{
}


    auto ThirdPartyInApplicationPurchase::onStart() -> void{
}


    auto ThirdPartyInApplicationPurchase::onActivityResult(int32_t requestCode, int32_t resultCode, Object* dataObject) -> void{
}


    auto ThirdPartyInApplicationPurchase::onSaveInstanceState(Object* anyType) -> void{
}


    auto ThirdPartyInApplicationPurchase::onStop() -> void{
}


    auto ThirdPartyInApplicationPurchase::requestPurchase(LockableFeature* lockableFeature) -> void{
}


    auto ThirdPartyInApplicationPurchase::requestReceipts() -> void{
}


    auto ThirdPartyInApplicationPurchase::add(LockableFeature* lockableFeature) -> void{
}


    auto ThirdPartyInApplicationPurchase::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto ThirdPartyInApplicationPurchase::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ThirdPartyInApplicationPurchase::requestProducts() -> void{
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASE_CPP
