
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

class TransformInfoObjectConfigGeneratorFactory
            : public Object
        , public TransformInfoObjectConfigGeneratorFactoryInterface {

    private: static TransformInfoObjectConfigGeneratorFactory* instance() { static std::unique_ptr<TransformInfoObjectConfigGeneratorFactory> value(new TransformInfoObjectConfigGeneratorFactory()); return value.get(); }

    public: static TransformInfoObjectConfigGeneratorFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfigGeneratorFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: TransformInfoObjectConfigGeneratorFactory(){
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigGenerator* getInstance(TransformInfoInterface* transformInfoInterface){

    std::string type = transformInfoInterface->getObjectConfigInterface()->getOutputTypeName();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF("Generating Instance for type: " +type, this, commonStrings->GET_INSTANCE);
    

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
                            


                            throw new Exception("No Such TransformInfoObjectConfigGenerator Type");
                    

                        }
                            
}


};

            

