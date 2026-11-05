
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
        



        #ifndef VIEWS_GENERIC_INVENTORY_AUTOVALIDATIONINVENTORYVIEW_H
        #define VIEWS_GENERIC_INVENTORY_AUTOVALIDATIONINVENTORYVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/inventory/InventoryView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AutoValidationInventoryView: public InventoryView, public virtual ValidationComponentInterface {

public: AutoValidationInventoryView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

    public: std::string validationInfo();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getTransformInfoInterface();

};

            


        #endif //VIEWS_GENERIC_INVENTORY_AUTOVALIDATIONINVENTORYVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_INVENTORY_AUTOVALIDATIONINVENTORYVIEW_H_COMPLETE)
        #define VIEWS_GENERIC_INVENTORY_AUTOVALIDATIONINVENTORYVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("views/generic/inventory/InventoryView.h")
#include "views/generic/inventory/InventoryView.h"
#endif

        #endif
    
