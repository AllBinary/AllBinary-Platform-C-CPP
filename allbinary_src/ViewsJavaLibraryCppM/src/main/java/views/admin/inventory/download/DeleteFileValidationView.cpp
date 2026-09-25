
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadableInventoryItemView.h"

class DeleteFileValidationView: public DownloadableInventoryItemView, public ValidationComponentInterface {

    private: std::string downloadItemId;

public: DeleteFileValidationView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface, StringUtil::getInstance().EMPTY_STRING);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->getFormData();
    
}


                //@Throws(Exception.constructor)
            
    public: void getFormData(){

    HashMap<any, any> hashMap = RequestParams(request).toHashMap();;
    

                        if(hashMap == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No Request Params Found");
                    

                                    }
                                
this->id= hashMap.get(basicItemData.ID) as string;
    
this->downloadItemId= hashMap.get(DownloadItemData::ID) as string;
    
}


    public: Boolean isValid(){

        try {
            
                        if(id == 
                                    nullptr
                                 || !StringValidationUtil::getInstance().isNumber(this->id))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    InventoryEntity inventoryEntity = InventoryEntityFactory::getInstance().getInventoryEntityInstance();;
    
this->itemInterface= inventoryEntity.getItem(this->id);
    

                        if(this->itemInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    DownloadItemsEntity downloadItemsEntity = DownloadItemsEntityFactory::getInstance().getDownloadItemsEntityInstance();;
    

    BasicArrayList vector = downloadItemsEntity.getForItem(this->id, this->downloadItemId);;
    

                        if(vector.size() != 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string validationInfo(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    

                        if(this->id == 
                                    nullptr
                                 || !StringValidationUtil::getInstance().isNumber(this->id))
                        
                                    {
                                    stringBuffer.append("Id is not valid.<br />");
    

                                    }
                                

                        if(InventoryEntityFactory::getInstance().getInventoryEntityInstance().getItem(this->id) == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("Item does not exist.<br />");
    

                                    }
                                

    DownloadItemsEntity downloadItemsEntity = DownloadItemsEntityFactory::getInstance().getDownloadItemsEntityInstance();;
    

    BasicArrayList vector = downloadItemsEntity.getForItem(this->id, this->downloadItemId);;
    

                        if(vector.size() == 0)
                        
                                    {
                                    stringBuffer.append("DownloadItem does not exist.<br />");
    

                                    }
                                

                        if(vector.size() > 1)
                        
                                    {
                                    stringBuffer.append("To Many DownloadItems exist.<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Unkown Validation Error.<br />";
    
}

}


};

            

