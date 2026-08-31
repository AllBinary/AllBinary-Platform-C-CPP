
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemView.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/StoreTransformer.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventorySearchProductUtil
            : public Object
         {
        

    private: static const instance: InventorySearchProductUtil = new InventorySearchProductUtil();

    public static InventorySearchProductUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventorySearchProductUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const ITEM_NOT_FOUND: string = "Item Not Found.";

                //@Throws(Exception.constructor)
            
    public string getProduct(AbeClientInformationInterface abeClientInformation, SearchRequest searchRequest, string product){

        try {
            
    inventoryEntityInterface: InventoryEntity = InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!;;
    

    itemInterface: ItemInterface = inventoryEntityInterface!.getItem(product)!;;
    

                        if(itemInterface != 
                                    null
                                )
                        
                                    {
                                    
    viewDocumentInterface: TransformDocumentInterface = TransformStoreDocumentFactory.getInstance(searchRequest)!;;
    
viewDocumentInterface!.getBaseNode()!.appendChild(new BasicItemView(itemInterface, new Vector()).toXmlNode(viewDocumentInterface!.getDoc()));
    

    success: string = DomDocumentHelper.toString(viewDocumentInterface!.getDoc())!;;
    

    outputStr: string = new StoreTransformer(abeClientInformation, new TransformInfoHttpSearch(searchRequest) as TransformInfoInterface).translate(success)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStr;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ITEM_NOT_FOUND;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "getProduct", e);
    

                                    }
                                



                            throw new Exception("Failed to getProduct");
                    
}

}


};

            

