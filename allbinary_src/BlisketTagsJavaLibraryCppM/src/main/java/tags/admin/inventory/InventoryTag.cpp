
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
        



        #ifndef TAGS_ADMIN_INVENTORY_INVENTORYTAG_CPP
        #define TAGS_ADMIN_INVENTORY_INVENTORYTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/admin/inventory/InventoryTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InventoryTag::InventoryTag(){
}


                //@Throws(JspTagException.constructor)
            
    auto InventoryTag::doStartTag() -> int32_t{

        try {
            
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(org.allbinary->globals->GLOBALS2->VIEW) == 0)
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("No Such View Command: ") +JavaString::valueOf(this->getCommand()));
                    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings->INSERT) == 0)
                        
                                    {
                                    this->setName("Add Inventory Item Validation View");
    
this->setObjectFile("views.admin.inventory.AddFileValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings->DELETE) == 0)
                        
                                    {
                                    this->setName("Delete Inventory Item Validation View");
    
this->setObjectFile("views.admin.inventory.DeleteFileValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(org.allbinary->globals->GLOBALS2->EDIT) == 0)
                        
                                    {
                                    this->setName("Edit Inventory Item Validation View");
    
this->setObjectFile("views.admin.inventory.EditValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(org.allbinary->globals->GLOBALS2->NEW) == 0)
                        
                                    {
                                    this->setName("New Inventory Item Validation View");
    
this->setObjectFile("views.admin.inventory.NewValidationView");
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(this->commonStrings->UPDATE) == 0)
                        
                                    {
                                    this->setName("Update Inventory Item Validation View");
    
this->setObjectFile("views.admin.inventory.UpdateFileValidationView");
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("No Such View Command: ") +JavaString::valueOf(this->getCommand()));
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreValidationTransformTag::doStartTag();;
    

                                    }
                                



                            throw Exception("Command Null");
                    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_ADMIN_INVENTORY_INVENTORYTAG_CPP
