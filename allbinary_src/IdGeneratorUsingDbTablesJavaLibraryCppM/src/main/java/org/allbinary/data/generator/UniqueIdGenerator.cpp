
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
        
            #include "java/lang/Long.h"
        
#include <java/io/IOException.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/generator/IdGeneratorEntity.h>

      
#include <org/allbinary/data/tables/generator/IdGeneratorEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/generator/IdGeneratorInterface.h"

class UniqueIdGenerator
            : public Object
        , public IdGeneratorInterface {

    public: static inline const std::string EXT = ".unq";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: IdGeneratorEntity* idGeneratorEntity;

    private: std::string name;

public: UniqueIdGenerator(){
this->idGeneratorEntity= dynamic_cast<IdGeneratorEntity*>(IdGeneratorEntityFactory::getInstance());
    
}


    public: void initialize(int32_t value){

        try {
            
    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->name);
    
vector->add(Long.valueOf(value)->toString());
    
this->idGeneratorEntity->insert(vector);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->IDLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "initialize", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFile(std::string filePathName, std::string name){
this->name= name;
    
}


                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getNext(){

        try {
            
    int64_t idLong = this->idGeneratorEntity->get(this->name);;
    

    int64_t newValue = (idLong.longValue() +1).toLong();;
    
this->idGeneratorEntity->update(this->name, newValue);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idLong.toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->IDLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "getNext", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}


};

            

