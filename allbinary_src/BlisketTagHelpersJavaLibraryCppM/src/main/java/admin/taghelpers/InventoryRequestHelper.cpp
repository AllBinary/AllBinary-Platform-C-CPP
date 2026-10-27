
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
        



        #ifndef ADMIN_TAGHELPERS_INVENTORYREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_INVENTORYREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/InventoryRequestHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/tags/AbTagData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/InventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"
#include "admin/taghelpers/InventoryItemViewParentTagHelper.h"


InventoryRequestHelper::InventoryRequestHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

    HelperTag* inventoryTag = dynamic_cast<HelperTag*>(propertiesHashMap->get(AbTagData::PARENT));;
    

    InventoryItemView* itemView = InventoryItemViewParentTagHelper::getInstance()->getInventoryItemView(inventoryTag);;
    
this->itemInterface= itemView->getItemInterface();
    
}


                //@Throws(Exception.constructor)
            
    auto InventoryRequestHelper::insert() -> std::string{

        try {
            
    TableMappingInterface* dataMappingInterface = dynamic_cast<TableMappingInterface*>(this->getItemInterface());;
    

    BasicArrayList* values = dataMappingInterface->toVector();;
    
InventoryEntityFactory::getInstance()->getInventoryEntityInstance()->insert(values);
    

    std::string success = "Successfully Added Product";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to add item to Inventory";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insert()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto InventoryRequestHelper::delete_() -> std::string{

        try {
            
    TableMappingInterface* dataMappingInterface = dynamic_cast<TableMappingInterface*>(this->getItemInterface());;
    

    std::string id = dataMappingInterface->getKey();;
    
InventoryEntityFactory::getInstance()->getInventoryEntityInstance()->deleteWhere(basicItemData->ID, id);
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Successfully Removed the item with ");
    
stringBuffer->append(basicItemData->ID);
    
stringBuffer->append("=");
    
stringBuffer->append(id);
    
stringBuffer->append(" from to the Inventory table");
    

    std::string success = stringBuffer->toString();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, tagStrings.DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to remove item with from Inventory";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, tagStrings.DO_START_TAG, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto InventoryRequestHelper::update() -> std::string{

        try {
            this->delete_();
    
this->insert();
    

    std::string success = "Item Successfully Updated";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed To Update Item";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto InventoryRequestHelper::getItemInterface() -> ItemInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->itemInterface;
    
}




        #endif //ADMIN_TAGHELPERS_INVENTORYREQUESTHELPER_CPP
