
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_CPP
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/LayerManagerLogging.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"


LayerManagerLogging::LayerManagerLogging() : logUtil(LogUtil::getInstance()), stringBuilder(new StringMaker()) {
        }
        auto LayerManagerLogging::instance_owner() -> LayerManagerLogging* { static std::unique_ptr<LayerManagerLogging> value(new LayerManagerLogging()); return value.get(); }
LayerManagerLogging* LayerManagerLogging::instance = LayerManagerLogging::instance_owner();

    auto LayerManagerLogging::getInstance() -> LayerManagerLogging*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerManagerLogging::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManagerLogging::append(AllBinaryLayer* layerInterface) -> void{
this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->APPEND_).append(layerInterface->getName()).toString(), this, this->APPEND);
    
}


    auto LayerManagerLogging::appendAt(AllBinaryLayer* layerInterface, int32_t index) -> void{
this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->APPEND_).append(layerInterface->getName()).append(this->_AT_).appendint(index)->toString(), this, this->APPEND);
    
}


    auto LayerManagerLogging::remove(AllBinaryLayer* layerInterface) -> void{

                        if(layerInterface == 
                                    nullptr
                                )
                        
                                    {
                                    this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->ATTEMPT_REMOVE_).append(StringUtil::getInstance()->toString(layerInterface)).toString(), this, this->REMOVE);
    

                                    }
                                
                        else {
                            this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->ATTEMPT_REMOVE_).append(layerInterface->getName()).toString(), this, this->REMOVE);
    

                        }
                            
}


    auto LayerManagerLogging::removeResult(LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result) -> void{

                        if(layerInterface == 
                                    nullptr
                                )
                        
                                    {
                                    this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->REMOVE_).append(StringUtil::getInstance()->toString(layerInterface)).toString(), this, this->REMOVE);
    

                                    }
                                
                             else 
                        if(result)
                        
                                    {
                                    
                        if(LayerManagerLogging::removeFailed)
                        
                                    {
                                    this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->REMOVE_).append(layerInterface->getName()).toString(), this, this->REMOVE);
    

                                    }
                                

                                    }
                                
                        else {
                            this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->DID_NOT_REMOVE).append(layerInterface->getName()).toString(), this, this->REMOVE);
    
LayerManagerLogging::removeFailed= true;
    

                        }
                            
}


    auto LayerManagerLogging::log(LayerManager* layerManager) -> void{
this->stringBuilder->delete_(0, this->stringBuilder->length());
    

    int32_t size = layerManager->getSize();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
this->stringBuilder->append(Integer.toHexString(TsUtil::getInstance()->hashCode(layerManager))).append(commonSeps->COLON_SEP);
    
this->stringBuilder->appendint(size)->append(commonSeps->COLON_SEP);
    

    AllBinaryLayer* allBinaryLayer;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
allBinaryLayer= (dynamic_cast<AllBinaryLayer*>(layerManager->getLayerAt(index)));
    
this->stringBuilder->append(allBinaryLayer->getName()).append(commonSeps->COMMA);
    
}

this->logUtil->putF(this->stringBuilder->toString(), this, this->REMOVE);
    
}


    auto LayerManagerLogging::clear() -> void{
this->stringBuilder->delete_(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->CLEAR).toString(), this, this->CLEAR);
    
}




        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_CPP
