
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
        



        #ifndef ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H
        #define ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class RequestMapInterface;
class StringMaker;
class TransformInterface;
class ValidationViewHelper;
class HelperTag;
class InventoryItemView;
class DownloadableInventoryItemView;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryItemViewParentTagHelper
            : public virtual Object
         {

    private: static InventoryItemViewParentTagHelper* instance_owner();
    private: static InventoryItemViewParentTagHelper* instance;

    public: static InventoryItemViewParentTagHelper* getInstance();


            
    public: InventoryItemViewParentTagHelper();
        
                //@Throws(Exception.constructor)
            
    public: InventoryItemView* getInventoryItemView(HelperTag* inventoryTag);

                //@Throws(Exception.constructor)
            
    public: DownloadableInventoryItemView* getDownloadableInventoryItemView(HelperTag* inventoryTag);

                //@Throws(Exception.constructor)
            
    public: RequestMapInterface* getRequestMapInterface(HelperTag* inventoryTag);

                //@Throws(Exception.constructor)
            
    public: void checkForValidationViewHelper(Object* helperObject);
    public: void checkForValidationViewHelper(const std::string& helperObject) { return checkForValidationViewHelper(JavaString::box(helperObject)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void checkForValidationViewHelper(BoxValue helperObject) { return checkForValidationViewHelper(JavaBoxes::toObject(helperObject)); }

};

            


        #endif //ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/http/request/RequestMapInterface.h>)
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<taghelpers/ValidationViewHelper.h>)
#include <taghelpers/ValidationViewHelper.h>
#endif
#if __has_include(<tags/HelperTag.h>)
#include <tags/HelperTag.h>
#endif
#if __has_include(<views/admin/inventory/InventoryItemView.h>)
#include <views/admin/inventory/InventoryItemView.h>
#endif
#if __has_include(<views/admin/inventory/download/DownloadableInventoryItemView.h>)
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>
#endif

        #endif
    
