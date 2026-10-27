
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
        



        #ifndef ADMIN_TAGS_DOWNLOADITEMSTAG_CPP
        #define ADMIN_TAGS_DOWNLOADITEMSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/DownloadItemsTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <admin/taghelpers/DownloadItemsHelperFactory.h>

      
#include <admin/taghelpers/DownloadItemsRequestHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"
#include "admin/tags/ParentInventoryTagHelper.h"
#include "admin/tags/AbTagData.h"


DownloadItemsTag::DownloadItemsTag(){
this->setTagHelperFactory(new DownloadItemsHelperFactory());
    
this->setTagRequestHelperFactory(new DownloadItemsRequestHelperFactory());
    
}


                //@Throws(JspTagException.constructor)
            
    auto DownloadItemsTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(org.allbinary->globals->GLOBALS2->BACKUP) != 0 && this->getCommand()->compareTo(org.allbinary->globals->GLOBALS2->RESTORE) != 0 && this->getCommand()->compareTo(this->commonStrings->CREATE) != 0 && this->getCommand()->compareTo(this->commonStrings->DROP) != 0)
                        
                                    {
                                    
    Tag* parentTag = this->getParent();;
    
ParentInventoryTagHelper::getInstance()->isValid(this, parentTag);
    
this->getPropertiesHashMap()->put(AbTagData::PARENT, parentTag);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TableTag::doStartTag();;
    

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




        #endif //ADMIN_TAGS_DOWNLOADITEMSTAG_CPP
