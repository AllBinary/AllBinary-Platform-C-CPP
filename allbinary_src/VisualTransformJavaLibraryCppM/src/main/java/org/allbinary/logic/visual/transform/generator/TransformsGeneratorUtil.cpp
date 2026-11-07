
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/generator/TransformsGeneratorUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h"

auto TransformsGeneratorUtil::instance_owner() -> TransformsGeneratorUtil* { static std::unique_ptr<TransformsGeneratorUtil> value(new TransformsGeneratorUtil()); return value.get(); }
TransformsGeneratorUtil* TransformsGeneratorUtil::instance = TransformsGeneratorUtil::instance_owner();

    auto TransformsGeneratorUtil::getInstance() -> TransformsGeneratorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformsGeneratorUtil::instance;
    
}


TransformsGeneratorUtil::TransformsGeneratorUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformsGeneratorUtil::generateComponentsFromObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, std::string group) -> std::string{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Started Group: ") +JavaString::valueOf(group), this, "generateComponentsFromObjectConfig(2)");
    

                                    }
                                

    TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = transformInfoInterface->getObjectConfigInterface();;
    

    std::string result = this->generateComponentsFromObjectConfig(abeClientInformation, transformInfoObjectConfigInterface, transformInfoInterface, group);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("End Group: ") +JavaString::valueOf(group), this, "generateComponentsFromObjectConfig(2)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformsGeneratorUtil::generateComponentsFromObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface, TransformInfoInterface* transformInfoInterface, std::string group) -> std::string{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Started Group: ") +JavaString::valueOf(group), this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

    BasicArrayList* transformInfoObjectConfigComponentVector = transformInfoObjectConfigInterface->getTransformsGroup(group);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Processing ");
    
stringBuffer->appendint(transformInfoObjectConfigComponentVector->size());
    
stringBuffer->append(" Components Group: ");
    
stringBuffer->append(group);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

                        if(transformInfoObjectConfigComponentVector->size() < 1)
                        
                                    {
                                    


                            throw Exception("No Pages Generated For Template.");
                    

                                    }
                                

    int32_t size = transformInfoObjectConfigComponentVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfoDomNode* transformInfoObjectConfigComponent = dynamic_cast<TransformInfoDomNode*>(transformInfoObjectConfigComponentVector->get(index));;
    
TransformGeneratorUtil::getInstance()->generate(abeClientInformation, transformInfoObjectConfigComponent, transformInfoInterface);
    
}


                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Done Group: ") +JavaString::valueOf(group), this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("<!-- Generated all template views successfully for View: ");
    
stringBuffer->append(transformInfoInterface->getName());
    
stringBuffer->append("-->");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_GENERATOR_TRANSFORMSGENERATORUTIL_CPP
