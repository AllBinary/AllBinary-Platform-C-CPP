
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_SPECIAL_SPECIALITEMSENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_SPECIAL_SPECIALITEMSENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/special/SpecialItemsEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/special/SpecialItemsEntity.h"

auto SpecialItemsEntityFactory::instance_owner() -> SpecialItemsEntityFactory* { static std::unique_ptr<SpecialItemsEntityFactory> value(new SpecialItemsEntityFactory()); return value.get(); }
SpecialItemsEntityFactory* SpecialItemsEntityFactory::instance = SpecialItemsEntityFactory::instance_owner();

    auto SpecialItemsEntityFactory::getInstance() -> SpecialItemsEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SpecialItemsEntityFactory::instance;
    
}


SpecialItemsEntityFactory::SpecialItemsEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto SpecialItemsEntityFactory::getSpecialItemsEntityInstance() -> SpecialItemsEntity*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new org::allbinary::data::tables::user::commerce::inventory::item::special::SpecialItemsEntity();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_SPECIAL_SPECIALITEMSENTITYFACTORY_CPP
