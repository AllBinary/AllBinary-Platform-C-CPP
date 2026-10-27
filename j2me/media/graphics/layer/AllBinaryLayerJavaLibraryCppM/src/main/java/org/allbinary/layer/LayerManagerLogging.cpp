
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

class LayerManagerLogging: public LayerManagerLoggingBase {

    private: static LayerManagerLogging* instance() { static std::unique_ptr<LayerManagerLogging> value(new LayerManagerLogging()); return value.get(); }

    public: static LayerManagerLogging* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerManagerLogging::instance();
    
}


    private: static inline bool removeFailed = false;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringMaker* stringBuilder = new StringMaker();

    private: const std::string APPEND = "append";

    private: const std::string APPEND_ = " append: ";

    private: const std::string _AT_ = " at: ";

    private: const std::string ATTEMPT_REMOVE_ = " Remove Attempt: ";

    private: const std::string REMOVE_ = " Remove: ";

    private: const std::string REMOVE = "remove";

    private: const std::string DID_NOT_REMOVE = " Did not remove: ";

    private: const std::string CLEAR = " Clear List";

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface){
this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->APPEND_).append(layerInterface->getName()).toString(), this, this->APPEND);
    
}


    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index){
this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->APPEND_).append(layerInterface->getName()).append(this->_AT_).appendint(index)->toString(), this, this->APPEND);
    
}


    public: void remove(AllBinaryLayer* layerInterface){

                        if(layerInterface == 
                                    nullptr
                                )
                        
                                    {
                                    this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->ATTEMPT_REMOVE_).append(StringUtil::getInstance()->toString(layerInterface)).toString(), this, this->REMOVE);
    

                                    }
                                
                        else {
                            this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->ATTEMPT_REMOVE_).append(layerInterface->getName()).toString(), this, this->REMOVE);
    

                        }
                            
}


    public: void removeResult(LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result){

                        if(layerInterface == 
                                    nullptr
                                )
                        
                                    {
                                    this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->REMOVE_).append(StringUtil::getInstance()->toString(layerInterface)).toString(), this, this->REMOVE);
    

                                    }
                                
                             else 
                        if(result)
                        
                                    {
                                    
                        if(LayerManagerLogging::removeFailed)
                        
                                    {
                                    this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->REMOVE_).append(layerInterface->getName()).toString(), this, this->REMOVE);
    

                                    }
                                

                                    }
                                
                        else {
                            this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->DID_NOT_REMOVE).append(layerInterface->getName()).toString(), this, this->REMOVE);
    
LayerManagerLogging::removeFailed= true;
    

                        }
                            
}


    private: void log(LayerManager* layerManager){
this->stringBuilder->delete(0, this->stringBuilder->length());
    

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


    public: void clear(){
this->stringBuilder->delete(0, this->stringBuilder->length());
    
this->logUtil->putF(this->stringBuilder->appendint(TsUtil::getInstance()->hashCode(this))->append(this->CLEAR).toString(), this, this->CLEAR);
    
}


};

            

