
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGNOMANIPULATIONFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGNOMANIPULATIONFACTORY_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigData.h"
#include "TransformInfoObjectConfig.h"
#include "TransformInfoObjectConfigInterface.h"

class TransformInfoObjectConfigNoManipulationFactory
            : public Object
         {

    private: static TransformInfoObjectConfigNoManipulationFactory instance() { return TransformInfoObjectConfigNoManipulationFactory(); }

    public: static TransformInfoObjectConfigNoManipulationFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformInfoObjectConfigNoManipulationFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(TransformInfoInterface transformInfoInterface, AbPath objectConfigFileAbPath);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGNOMANIPULATIONFACTORY_H
