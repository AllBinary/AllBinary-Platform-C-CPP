
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
        



            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/tags/AbTagData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"
#include "InventoryItemViewParentTagHelper.h"

class DownloadItemsRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: DownloadableItem downloadableItem;

public: DownloadItemsRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){

    HelperTag inventoryTag = hashMap.get(AbTagData::PARENT) as HelperTag;;
    

    InventoryItemViewParentTagHelper inventoryItemViewParentTagHelper = InventoryItemViewParentTagHelper::getInstance();;
    

    DownloadableInventoryItemView downloadableInventoryItemView = inventoryItemViewParentTagHelper.getDownloadableInventoryItemView(inventoryTag);;
    
this->downloadableItem= downloadableInventoryItemView.getDownloadableItem();
    
}


    public: std::string insert(){

        try {
            
    Vector vector = this->downloadableItem.toVector();;
    
DownloadItemsEntityFactory::getInstance().getDownloadItemsEntityInstance().insert(vector);
    

    std::string success = "Successfully inserted " +this->downloadableItem.getId() +" into downloaditems table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to insert " +this->downloadableItem.getId() +" into downloaditems table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "inserts()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string delete_(){

        try {
            DownloadItemsEntityFactory::getInstance().getDownloadItemsEntityInstance().delete(this->downloadableItem.getId());
    

    std::string success = "Successfully deleted";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to delete";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "delete()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string update(){

        try {
            
    std::string success = "Update Successful";;
    

    HashMap<any, any> values = this->downloadableItem.toHashMap();;
    
DownloadItemsEntityFactory::getInstance().getDownloadItemsEntityInstance().update(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(this->downloadableItem.getId() +CommonSeps::getInstance().SPACE +success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to update: " +this->downloadableItem.getId();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

