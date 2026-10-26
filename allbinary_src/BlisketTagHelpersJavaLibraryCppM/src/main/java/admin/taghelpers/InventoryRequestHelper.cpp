
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
        #include "ModifyTable.h"
#include "InventoryItemViewParentTagHelper.h"

class InventoryRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: ItemInterface itemInterface;

public: InventoryRequestHelper(HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext){

    HelperTag inventoryTag = propertiesHashMap.get(AbTagData::PARENT);;
    

    InventoryItemView itemView = InventoryItemViewParentTagHelper::getInstance().getInventoryItemView(inventoryTag);;
    
this->itemInterface= itemView.getItemInterface();
    
}


                //@Throws(Exception.constructor)
            
    public: std::string insert(){

        try {
            
    TableMappingInterface dataMappingInterface = this->getItemInterface();;
    

    BasicArrayList values = dataMappingInterface.toVector();;
    
InventoryEntityFactory::getInstance().getInventoryEntityInstance().insert(values);
    

    std::string success = "Successfully Added Product";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to add item to Inventory";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "insert()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string delete_(){

        try {
            
    TableMappingInterface dataMappingInterface = this->getItemInterface();;
    

    std::string id = dataMappingInterface.getKey();;
    
InventoryEntityFactory::getInstance().getInventoryEntityInstance().deleteWhere(basicItemData.ID, id);
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Successfully Removed the item with ");
    
stringBuffer.append(basicItemData.ID);
    
stringBuffer.append("=");
    
stringBuffer.append(id);
    
stringBuffer.append(" from to the Inventory table");
    

    std::string success = stringBuffer.toString();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, tagStrings.DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to remove item with from Inventory";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, tagStrings.DO_START_TAG, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string update(){

        try {
            this->delete();
    
this->insert();
    

    std::string success = "Item Successfully Updated";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed To Update Item";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: ItemInterface getItemInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->itemInterface;
    
}


};

            

