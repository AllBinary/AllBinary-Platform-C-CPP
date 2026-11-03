
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/BasicGenerator.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"

auto TransformInfoObjectConfigGeneratorFactory::instance_owner() -> TransformInfoObjectConfigGeneratorFactory* { static std::unique_ptr<TransformInfoObjectConfigGeneratorFactory> value(new TransformInfoObjectConfigGeneratorFactory()); return value.get(); }
TransformInfoObjectConfigGeneratorFactory* TransformInfoObjectConfigGeneratorFactory::instance = TransformInfoObjectConfigGeneratorFactory::instance_owner();

    auto TransformInfoObjectConfigGeneratorFactory::getInstance() -> TransformInfoObjectConfigGeneratorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoObjectConfigGeneratorFactory::instance;
    
}


TransformInfoObjectConfigGeneratorFactory::TransformInfoObjectConfigGeneratorFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfigGeneratorFactory::getInstance(TransformInfoInterface* transformInfoInterface) -> TransformInfoObjectConfigGenerator*{

    std::string type = JavaBoxes::unbox<std::string>(transformInfoInterface->getObjectConfigInterface()->getOutputTypeName());;
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf("Generating Instance for type: ") +JavaString::valueOf(type), this, commonStrings->GET_INSTANCE);
    

                                    }
                                

                        if(false || type.compare(InputOutputTypeData::getInstance()->RESPONSE) == 0 || transformInfoInterface->isChild())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BasicGenerator();
    

                                    }
                                
                             else 
                        if(type.compare(InputOutputTypeData::getInstance()->FILE) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StoreFileGenerator(transformInfoInterface);
    

                                    }
                                
                        else {
                            


                            throw Exception("No Such TransformInfoObjectConfigGenerator Type");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_TRANSFORMINFOOBJECTCONFIGGENERATORFACTORY_CPP
