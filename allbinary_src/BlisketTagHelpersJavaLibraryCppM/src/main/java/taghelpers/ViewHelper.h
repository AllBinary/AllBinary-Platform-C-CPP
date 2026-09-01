
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
        



        #ifndef TAGHELPERS_VIEWHELPER_H
        #define TAGHELPERS_VIEWHELPER_H

            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewHelper
            : public Object
        : public TransformInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: TransformInterface componentInterface;

public: ViewHelper(HashMap<any, any> hashMap, PageContext pageContext);

    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId();

                //@Throws(Exception.constructor)
            
    public: std::string view();

                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc();

    public: TransformInterface getViewObject();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface getTransformInfoInterface();

    public: TransformDocumentInterface getTransformDocumentInterface();

    public: void setTransformDocumentInterface(TransformDocumentInterface viewDocumentInterface);

};

            


        #endif //TAGHELPERS_VIEWHELPER_H
