
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigAndManipulatorFactoryBase.h"
#include "TransformInfoObjectConfigData.h"
#include "TransformInfoObjectConfigInterface.h"
#include "TransformInfoObjectConfig.h"
#include "GenericStoreTransformInfoObjectConfig.h"

class TransformInfoObjectConfigAndManipulatorFactory: public TransformInfoObjectConfigAndManipulatorFactoryBase {

    private: static TransformInfoObjectConfigAndManipulatorFactory instance() { return TransformInfoObjectConfigAndManipulatorFactory(); }

    public: static TransformInfoObjectConfigAndManipulatorFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformInfoObjectConfigAndManipulatorFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, AbPath objectConfigFileAbPath);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H
