
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
        



        #ifndef TAGS_GENERIC_BASKET_BASKETTAG_H
        #define TAGS_GENERIC_BASKET_BASKETTAG_H

            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketTag: public StoreValidationTransformTag {

public: BasketTag();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_GENERIC_BASKET_BASKETTAG_H
