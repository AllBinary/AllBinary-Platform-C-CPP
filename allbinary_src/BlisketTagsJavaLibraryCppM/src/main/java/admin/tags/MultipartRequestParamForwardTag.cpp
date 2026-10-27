
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
        



        #ifndef ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_CPP
        #define ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/MultipartRequestParamForwardTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <admin/taghelpers/MultipartRequestParamForwardHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
#include <tags/HelperTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/ParentInventoryTagHelper.h"
#include "admin/tags/AbTagData.h"


MultipartRequestParamForwardTag::MultipartRequestParamForwardTag() {
        }
        
    auto MultipartRequestParamForwardTag::setPage(std::string page) -> void{
this->page= page;
    
}


    auto MultipartRequestParamForwardTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto MultipartRequestParamForwardTag::setParamVector(BasicArrayList* paramVector) -> void{
this->paramVector= paramVector;
    
}


                //@Throws(JspTagException.constructor)
            
    auto MultipartRequestParamForwardTag::doStartTag() -> int32_t{

        try {
            
    HelperTag* parentTag = dynamic_cast<HelperTag*>(this->getParent());;
    
ParentInventoryTagHelper::getInstance()->isValid(this, parentTag);
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(AbTagData::PARENT, parentTag);
    

    MultipartRequestParamForwardHelper* multipartRequestParamForwardHelper = new MultipartRequestParamForwardHelper(parentTag, this->page, this->command, this->paramVector, this->pageContext);;
    
multipartRequestParamForwardHelper->forward();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Tag::SKIP_BODY;
    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Tag::SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Tag::SKIP_BODY;
    
}

}




        #endif //ADMIN_TAGS_MULTIPARTREQUESTPARAMFORWARDTAG_CPP
