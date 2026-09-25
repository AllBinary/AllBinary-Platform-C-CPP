
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
        



            #include "../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventoryItemView.h"

class DeleteFileValidationView: public InventoryItemView, public ValidationComponentInterface {

    private: std::string id;

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
                        
                                    throw Exception("No Request Params Found");
                                
this->id= hashMap.get(basicItemData.ID) as string;
    
}


    public: Boolean isValid(){

        try {
            
                        if(false || !StringValidationUtil::getInstance().isNumber(this->id))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
this->itemInterface= InventoryEntityFactory::getInstance().getInventoryEntityInstance().getItem(this->id);
    

                        if(this->itemInterface == 
                                    nullptr
                                )
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    



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
    

                        if(false || !StringValidationUtil::getInstance().isNumber(this->id))
                        
                                    {
                                    stringBuffer.append("Id is not valid.<br />");
    

                                    }
                                

                        if(InventoryEntityFactory::getInstance().getInventoryEntityInstance().getItem(this->id) == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("Item does not exist.<br />");
    

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

            

