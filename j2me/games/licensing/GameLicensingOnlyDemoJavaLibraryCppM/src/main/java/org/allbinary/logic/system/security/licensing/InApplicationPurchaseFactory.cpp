
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LockableFeature.h"

auto InApplicationPurchaseFactory::instance_owner() -> InApplicationPurchaseFactory* { static std::unique_ptr<InApplicationPurchaseFactory> value(new InApplicationPurchaseFactory()); return value.get(); }
InApplicationPurchaseFactory* InApplicationPurchaseFactory::instance = InApplicationPurchaseFactory::instance_owner();

    auto InApplicationPurchaseFactory::getInstance() -> InApplicationPurchaseFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InApplicationPurchaseFactory::instance;
    
}


InApplicationPurchaseFactory::InApplicationPurchaseFactory(){
}


    auto InApplicationPurchaseFactory::init(Object* anyType, Object* stateObject) -> void{
}


    auto InApplicationPurchaseFactory::onCreate(Object* anyType, Object* stateObject) -> void{
}


    auto InApplicationPurchaseFactory::onStart() -> void{
}


    auto InApplicationPurchaseFactory::onResult(int32_t requestCode, int32_t resultCode, Object* data) -> void{
}


    auto InApplicationPurchaseFactory::onSaveState(Object* anyType) -> void{
}


    auto InApplicationPurchaseFactory::onStop() -> void{
}


    auto InApplicationPurchaseFactory::onDestroy() -> void{
}


    auto InApplicationPurchaseFactory::purchase(LockableFeature* lockableFeature) -> void{
}


    auto InApplicationPurchaseFactory::isPurchased(LockableFeature* lockableFeature) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto InApplicationPurchaseFactory::add(LockableFeature* lockableFeature) -> void{
}


    auto InApplicationPurchaseFactory::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto InApplicationPurchaseFactory::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_CPP
