
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
        



        #ifndef VIEWS_COMPOUND_COMPOUNDCOMPONENTVIEW_H
        #define VIEWS_COMPOUND_COMPOUNDCOMPONENTVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class XmlDocumentHelper;
class LogUtil;
class TransformInfoInterface;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CompoundTransform;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompoundComponentView: public HttpStoreComponentView {

    /*protected*/ public: LogUtil* logUtil;

public: CompoundComponentView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_COMPOUND_COMPOUNDCOMPONENTVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_COMPOUND_COMPOUNDCOMPONENTVIEW_H_COMPLETE)
        #define VIEWS_COMPOUND_COMPOUNDCOMPONENTVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif
#if __has_include("views/compound/CompoundTransform.h")
#include "views/compound/CompoundTransform.h"
#endif

        #endif
    
