
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
        



        #ifndef TAGS_ADMIN_USERSTAG_CPP
        #define TAGS_ADMIN_USERSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/admin/UsersTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UsersTag::UsersTag(){
}


    auto UsersTag::setRole(std::string value) -> void{
this->role= value;
    
}


                //@Throws(JspTagException.constructor)
            
    auto UsersTag::doStartTag() -> int32_t{

        try {
            this->setName("Admin Users View");
    
this->setObjectFile("views.admin.user.UsersValidationView");
    

                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    this->getPropertiesHashMap()->put(UserRoleData::NAME, this->role);
    

                        if(this->getCommand()->compareTo(org.allbinary->globals->GLOBALS2->VIEW) == 0)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("No Such View Command: ") +JavaString::valueOf(this->getCommand()));
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreValidationTransformTag::doStartTag();;
    

                                    }
                                



                            throw Exception("Command Null");
                    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_ADMIN_USERSTAG_CPP
