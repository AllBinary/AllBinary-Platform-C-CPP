
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

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <admin/taghelpers/MultipartRequestParamForwardHelper.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
#include <tags/HelperTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ParentInventoryTagHelper.h"
#include "AbTagData.h"

class MultipartRequestParamForwardTag: public CustomTagSupport {

    private: std::string page;

    private: std::string command;

    private: Vector paramVector;

    public: void setPage(std::string page){
this->page= page;
    
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: void setParamVector(Vector paramVector){
this->paramVector= paramVector;
    
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
    HelperTag parentTag = this->getParent() as HelperTag;;
    
ParentInventoryTagHelper::getInstance().isValid(this, parentTag);
    

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(AbTagData::PARENT, parentTag);
    

    MultipartRequestParamForwardHelper multipartRequestParamForwardHelper = MultipartRequestParamForwardHelper(parentTag, this->page, this->command, this->paramVector, this->pageContext);;
    
multipartRequestParamForwardHelper.forward();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Tag::SKIP_BODY;
    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Tag::SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Tag::SKIP_BODY;
    
}
*/
}


};

            

