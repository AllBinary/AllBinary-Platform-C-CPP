
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
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/UserHelperFactory.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableTag.h"

class UserTag: public TableTag {

    private: std::string role;

    private: std::string enable;

public: UserTag(){
this->setTagHelperFactory(UserHelperFactory());
    
this->setTagRequestHelperFactory(UserHelperFactory());
    
}


    public: void setRole(std::string value){
this->role= value;
    
this->getPropertiesHashMap().put(UserRoleData::NAME, this->role);
    
}


    public: void setEnable(std::string value){
this->enable= value;
    
this->getPropertiesHashMap().put(EntryData::getInstance().ENABLE, this->enable);
    
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

