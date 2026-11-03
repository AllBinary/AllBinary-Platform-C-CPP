
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
        



        #ifndef TAGS_ADMIN_CUSTOMIZERS_VIEWCUSTOMIZERSTAG_CPP
        #define TAGS_ADMIN_CUSTOMIZERS_VIEWCUSTOMIZERSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/admin/customizers/ViewCustomizersTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ViewCustomizersTag::ViewCustomizersTag(){
}


                //@Throws(JspTagException.constructor)
            
    auto ViewCustomizersTag::doStartTag() -> int32_t{

        try {
            this->setName("Add Validation Customizers View");
    
this->setObjectFile("views.admin.customizers.CustomizersValidationView");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreValidationTransformTag::doStartTag();;
    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_ADMIN_CUSTOMIZERS_VIEWCUSTOMIZERSTAG_CPP
