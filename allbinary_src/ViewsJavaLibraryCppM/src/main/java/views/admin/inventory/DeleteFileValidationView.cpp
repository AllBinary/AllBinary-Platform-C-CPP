
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_DELETEFILEVALIDATIONVIEW_CPP
        #define VIEWS_ADMIN_INVENTORY_DELETEFILEVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/inventory/DeleteFileValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
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
        #include "views/admin/inventory/InventoryItemView.h"


DeleteFileValidationView::DeleteFileValidationView(TransformInfoInterface* transformInfoInterface) : InventoryItemView(transformInfoInterface, StringUtil::getInstance()->EMPTY_STRING){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->getFormData();
    
}


                //@Throws(Exception.constructor)
            
    auto DeleteFileValidationView::getFormData() -> void{

    HashMap<Object*, Object*>* hashMap = (new RequestParams(request))->toHashMap();;
    

                        if(hashMap == 
                                    nullptr
                                )
                        
                                    throw Exception("No Request Params Found");
                                
this->id= JavaBoxes::unbox<std::string>(hashMap->get(basicItemData.ID));
    
}


    auto DeleteFileValidationView::isValid() -> bool{

        try {
            
                        if(false || !StringValidationUtil::getInstance()->isNumber(this->id))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
this->itemInterface= InventoryEntityFactory::getInstance()->getInventoryEntityInstance()->getItem(this->id);
    

                        if(this->itemInterface == 
                                    nullptr
                                )
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto DeleteFileValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto DeleteFileValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto DeleteFileValidationView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(false || !StringValidationUtil::getInstance()->isNumber(this->id))
                        
                                    {
                                    stringBuffer->append("Id is not valid.<br />");
    

                                    }
                                

                        if(InventoryEntityFactory::getInstance()->getInventoryEntityInstance()->getItem(this->id) == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Item does not exist.<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Unkown Validation Error.<br />";
    
}

}


                //@Throws(Exception.constructor)
            
    auto DeleteFileValidationView::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InventoryItemView::getTransformInfoInterface();;
    
}




        #endif //VIEWS_ADMIN_INVENTORY_DELETEFILEVALIDATIONVIEW_CPP
