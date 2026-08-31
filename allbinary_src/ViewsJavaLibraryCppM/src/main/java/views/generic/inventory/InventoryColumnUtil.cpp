
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
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryColumnUtil
            : public Object
         {
        

    private: static const instance: InventoryColumnUtil = new InventoryColumnUtil();

    public static InventoryColumnUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventoryColumnUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public Vector getColumnWhereLike(InventoryEntity inventoryEntity, string category, string column){
this.logUtil!.putF("Start Category: " +category, this, "getKeywords");
    

    keywords: Vector = new Vector();;
    

    vectorOfHashMaps: Vector = inventoryEntity!.getAllRows()!;;
    

    size: int32_t = vectorOfHashMaps!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    hashMap: HashMap<any, any> = vectorOfHashMaps!.get(index) as HashMap<any, any>;;
    

    categoryName: string = hashMap!.get(BasicItemData.CATEGORY) as string;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(categoryName) && categoryName!.startsWith(category))
                        
                                    {
                                    keywords.add(hashMap!.get(column));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keywords;
    
}


};

            

