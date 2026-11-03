
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_CPP
        #define VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/inventory/InventorySearchProductUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/StoreTransformer.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InventorySearchProductUtil::InventorySearchProductUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto InventorySearchProductUtil::instance_owner() -> InventorySearchProductUtil* { static std::unique_ptr<InventorySearchProductUtil> value(new InventorySearchProductUtil()); return value.get(); }
InventorySearchProductUtil* InventorySearchProductUtil::instance = InventorySearchProductUtil::instance_owner();

    auto InventorySearchProductUtil::getInstance() -> InventorySearchProductUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InventorySearchProductUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto InventorySearchProductUtil::getProduct(AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, std::string product) -> std::string{

        try {
            
    InventoryEntity* inventoryEntityInterface = InventoryEntityFactory::getInstance()->getInventoryEntityInstance();;
    

    ItemInterface* itemInterface = inventoryEntityInterface->getItem(product);;
    

                        if(itemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    TransformDocumentInterface* viewDocumentInterface = TransformStoreDocumentFactory::getInstance(searchRequest);;
    
viewDocumentInterface->getBaseNode()->appendChild((new BasicItemView(itemInterface, new BasicArrayListD()))->toXmlNode(viewDocumentInterface->getDoc()));
    

    std::string success = XmlDocumentHelper::toString(viewDocumentInterface->getDoc());;
    

    std::string outputStr = (new StoreTransformer(abeClientInformation, dynamic_cast<TransformInfoInterface*>(new TransformInfoHttpSearch(searchRequest))))->translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return outputStr;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ITEM_NOT_FOUND;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "getProduct", &e);
    

                                    }
                                



                            throw Exception("Failed to getProduct");
                    
}

}




        #endif //VIEWS_GENERIC_INVENTORY_INVENTORYSEARCHPRODUCTUTIL_CPP
