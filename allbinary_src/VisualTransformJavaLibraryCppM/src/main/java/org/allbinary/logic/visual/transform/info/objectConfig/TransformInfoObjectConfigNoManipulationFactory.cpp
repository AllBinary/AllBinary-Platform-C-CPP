
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGNOMANIPULATIONFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGNOMANIPULATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigNoManipulationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"

auto TransformInfoObjectConfigNoManipulationFactory::instance_owner() -> TransformInfoObjectConfigNoManipulationFactory* { static std::unique_ptr<TransformInfoObjectConfigNoManipulationFactory> value(new TransformInfoObjectConfigNoManipulationFactory()); return value.get(); }
TransformInfoObjectConfigNoManipulationFactory* TransformInfoObjectConfigNoManipulationFactory::instance = TransformInfoObjectConfigNoManipulationFactory::instance_owner();

    auto TransformInfoObjectConfigNoManipulationFactory::getInstance() -> TransformInfoObjectConfigNoManipulationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoObjectConfigNoManipulationFactory::instance;
    
}


TransformInfoObjectConfigNoManipulationFactory::TransformInfoObjectConfigNoManipulationFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfigNoManipulationFactory::getInstance(TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath) -> TransformInfoObjectConfigInterface*{

        try {
            
    TransformInfoObjectConfigData* transformInfoObjectConfigData = TransformInfoObjectConfigData::getInstance();;
    

    std::string data = (new CryptFileReader(transformInfoObjectConfigData->UNCRYPTED_EXTENSION, transformInfoObjectConfigData->getInstance()->ENCRYPTED_EXTENSION))->get(objectConfigFileAbPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TransformInfoObjectConfig(transformInfoInterface, DomDocumentHelper::create(data));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Could Not Load Object Config", this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGNOMANIPULATIONFACTORY_CPP
