
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <admin/taghelpers/InventoryHelperFactory.h>

      
#include <admin/taghelpers/InventoryRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"
#include "admin/tags/ParentInventoryTagHelper.h"
#include "admin/tags/AbTagData.h"

class InventoryTag: public TableTag {

    private: std::string storeName;

public: InventoryTag() : TableTag(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTagHelperFactory(new InventoryHelperFactory());
    
this->setTagRequestHelperFactory(new InventoryRequestHelperFactory());
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(org.allbinary.globals.GLOBALS2.BACKUP) != 0 && this->getCommand()->compareTo(org.allbinary.globals.GLOBALS2.RESTORE) != 0 && this->getCommand()->compareTo(this->commonStrings.CREATE) != 0 && this->getCommand()->compareTo(this->commonStrings.DROP) != 0)
                        
                                    {
                                    
    Tag* parentTag = this->getParent();;
    
ParentInventoryTagHelper::getInstance()->isValid(this, parentTag);
    
this->getPropertiesHashMap()->put(AbTagData::PARENT, parentTag);
    
this->getPropertiesHashMap()->put(StoreFrontData::getInstance()->NAME, this->storeName);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

