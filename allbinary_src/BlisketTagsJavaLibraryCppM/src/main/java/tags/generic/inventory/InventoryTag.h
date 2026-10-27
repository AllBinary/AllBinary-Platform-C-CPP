
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
        



        #ifndef TAGS_GENERIC_INVENTORY_INVENTORYTAG_H
        #define TAGS_GENERIC_INVENTORY_INVENTORYTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>
class JspTagException;
class AbResponseHandler;
class LogUtil;
class LicensingException;
class InventoryHelperFactory;
#include <tags/StoreValidationTransformTag.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryTag: public StoreValidationTransformTag {

    /*protected*/ public: LogUtil* logUtil;

public: InventoryTag();

                //@Throws(LicensingException.constructor)
            
    private: void search();

                //@Throws(LicensingException.constructor)
            
    private: void viewSummary();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_GENERIC_INVENTORY_INVENTORYTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_GENERIC_INVENTORY_INVENTORYTAG_H_COMPLETE)
        #define TAGS_GENERIC_INVENTORY_INVENTORYTAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<taghelpers/InventoryHelperFactory.h>)
#include <taghelpers/InventoryHelperFactory.h>
#endif
#if __has_include(<tags/StoreValidationTransformTag.h>)
#include <tags/StoreValidationTransformTag.h>
#endif

        #endif
    
