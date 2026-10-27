
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntity.h"

auto BasicOptionItemsEntityFactory::instance_owner() -> BasicOptionItemsEntityFactory* { static std::unique_ptr<BasicOptionItemsEntityFactory> value(new BasicOptionItemsEntityFactory()); return value.get(); }
BasicOptionItemsEntityFactory* BasicOptionItemsEntityFactory::instance = BasicOptionItemsEntityFactory::instance_owner();

    auto BasicOptionItemsEntityFactory::getInstance() -> BasicOptionItemsEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicOptionItemsEntityFactory::instance;
    
}


BasicOptionItemsEntityFactory::BasicOptionItemsEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto BasicOptionItemsEntityFactory::getBasicOptionItemsEntityInstance() -> BasicOptionItemsEntity*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new org::allbinary::data::tables::user::commerce::inventory::item::options::BasicOptionItemsEntity();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITYFACTORY_CPP
