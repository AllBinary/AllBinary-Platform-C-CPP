
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
        



        #ifndef ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_CPP
        #define ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/resources/KeyValueFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

KeyValueFactory::KeyValueFactory() : MAP(StdUtil::getInstance()->createHashtable()) {
        }
        auto KeyValueFactory::instance_owner() -> KeyValueFactory* { static std::unique_ptr<KeyValueFactory> value(new KeyValueFactory()); return value.get(); }
KeyValueFactory* KeyValueFactory::instance = KeyValueFactory::instance_owner();

    auto KeyValueFactory::getInstance() -> KeyValueFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return KeyValueFactory::instance;
    
}


    auto KeyValueFactory::get(std::string key) -> std::string{

    std::string value = this->MAP->get(key);;
    

                        if(false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return key;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}




        #endif //ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_CPP
