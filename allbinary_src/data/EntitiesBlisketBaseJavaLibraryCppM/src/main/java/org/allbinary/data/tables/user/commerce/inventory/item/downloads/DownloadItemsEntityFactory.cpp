
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_DOWNLOADS_DOWNLOADITEMSENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_DOWNLOADS_DOWNLOADITEMSENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h"
        

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
        #include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntity.h"

auto DownloadItemsEntityFactory::instance_owner() -> DownloadItemsEntityFactory* { static std::unique_ptr<DownloadItemsEntityFactory> value(new DownloadItemsEntityFactory()); return value.get(); }
DownloadItemsEntityFactory* DownloadItemsEntityFactory::instance = DownloadItemsEntityFactory::instance_owner();

    auto DownloadItemsEntityFactory::getInstance() -> DownloadItemsEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DownloadItemsEntityFactory::instance;
    
}


DownloadItemsEntityFactory::DownloadItemsEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto DownloadItemsEntityFactory::getDownloadItemsEntityInstance() -> DownloadItemsEntity*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new org::allbinary::data::tables::user::commerce::inventory::item::downloads::DownloadItemsEntity();
    

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




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_DOWNLOADS_DOWNLOADITEMSENTITYFACTORY_CPP
