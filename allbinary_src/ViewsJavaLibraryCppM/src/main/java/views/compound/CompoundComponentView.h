
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

            #include "../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundTransform.h"

class CompoundComponentView: public HttpStoreComponentView {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: CompoundComponentView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_COMPOUND_COMPOUNDCOMPONENTVIEW_H
