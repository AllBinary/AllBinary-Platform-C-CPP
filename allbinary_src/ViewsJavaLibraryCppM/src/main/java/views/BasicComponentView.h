
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
        



        #ifndef VIEWS_BASICCOMPONENTVIEW_H
        #define VIEWS_BASICCOMPONENTVIEW_H

            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/BasicTransformer.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicComponentView
            : public Object
        : public TransformInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: TransformDocumentInterface transformDocumentInterface;

    private: TransformInfoInterface transformInfoInterface;

public: BasicComponentView(TransformInfoInterface transformInfoInterface);

    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId();

    public: TransformDocumentInterface getTransformDocumentInterface();

    public: void setTransformDocumentInterface(TransformDocumentInterface transformDocumentInterface);

    public: TransformInfoInterface getTransformInfoInterface();

    public: void setTransformInfoInterface(TransformInfoInterface transformInfoInterface);

    public: Document toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: Document getDoc();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BASICCOMPONENTVIEW_H
