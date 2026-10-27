
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/init/InitSql.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefronts/BasicStoreFront.h"
#include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"

class BasicStoreFrontsEntity: public InitSql {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "storefronts";

public: BasicStoreFrontsEntity() : InitSql(new UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTable(this->tableName);
    
}


                //@Throws(Exception.constructor)
            
    public: BasicStoreFrontInterface* getStoreFrontInterface(std::string name){

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, name);
    

    HashMap<Object*, Object*>* storeHashMap = super.getRow(keysAndValues);;
    

                        if(storeHashMap == 
                                    nullptr
                                )
                        
                                    throw new Exception("No Such Store: " +name);
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->FACTORYERROR))
                        
                                    {
                                    this->logUtil->putF("StoreFront: " +storeHashMap->toString(), this, "getStore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicStoreFrontInterface*>(new BasicStoreFront(storeHashMap));
    
}


};

            

