
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENTFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PageContext;
class WeblisketSession;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransformHttpRequestDocument;
class TransformDocumentInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformHttpRequestDocumentFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static TransformDocumentInterface* getInstance(PageContext* pageContext, WeblisketSession* weblisketSession);

private: TransformHttpRequestDocumentFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENTFACTORY_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h")
#include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h")
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#endif

        #endif
    
