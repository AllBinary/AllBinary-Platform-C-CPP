
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const itemInterface: ItemInterface;

public constructor (HashMap<any, any> propertiesHashMap, PageContext pageContext){

            super();
        
    inventoryTag: HelperTag = propertiesHashMap!.get(AbTagData.PARENT) as HelperTag;;
    

    itemView: InventoryItemView = InventoryItemViewParentTagHelper.getInstance()!.getInventoryItemView(inventoryTag)!;;
    
this.itemInterface= itemView!.getItemInterface();
    
}


                //@Throws(Exception.constructor)
            
    public string insert(){

        try {
            
    dataMappingInterface: TableMappingInterface = this.getItemInterface() as TableMappingInterface;;
    

    values: Vector = dataMappingInterface!.toVector()!;;
    
InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!.insert(values);
    

    success: string = "Successfully Added Product";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to add item to Inventory";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "insert()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string delete(){

        try {
            
    dataMappingInterface: TableMappingInterface = this.getItemInterface() as TableMappingInterface;;
    

    id: string = dataMappingInterface!.getKey() as string;;
    
InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!.deleteWhere(BasicItemData.ID, id);
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Successfully Removed the item with ");
    
stringBuffer!.append(BasicItemData.ID);
    
stringBuffer!.append("=");
    
stringBuffer!.append(id);
    
stringBuffer!.append(" from to the Inventory table");
    

    success: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, tagStrings!.DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to remove item with from Inventory";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, tagStrings!.DO_START_TAG, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string update(){

        try {
            this.delete();
    
this.insert();
    

    success: string = "Item Successfully Updated";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed To Update Item";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public ItemInterface getItemInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.itemInterface;
    
}


};

            

