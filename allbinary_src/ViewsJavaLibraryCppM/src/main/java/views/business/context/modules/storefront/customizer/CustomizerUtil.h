
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomizerUtil
            : public Object
         {

    private: static CustomizerUtil instance() { return CustomizerUtil(); }

    public: static CustomizerUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: CustomizerUtil();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterfaceToCustomize(TransformInfoInterface customizerTransformInfoInterface, TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformInfoObjectConfigComponentNodesToCustomize(Object customizerTransformInfoInterface, Object transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformInfoObjectConfigComponentNodes(Object transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getTransformInfoObjectConfigGroupComponentNodes(Object transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void insert(TransformInfoInterface transformInfoInterface, DomNodeInterface domNodeInterface);

                //@Throws(Exception.constructor)
            
    public: void write(TransformInfoInterface specifiedTransformInfoInterface, std::string documentString);

                //@Throws(Exception.constructor)
            
    public: Document getViewDataForComponentsInObjectConfig(Object transformInfoInterface);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H
