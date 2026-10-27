
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
        



        #ifndef ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H
        #define ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyValueFactory
            : public Object
         {

    private: static KeyValueFactory* instance() { static std::unique_ptr<KeyValueFactory> value(new KeyValueFactory()); return value.get(); }

    public: static KeyValueFactory* getInstance();

    public: ABHashtable<Object*, Object*>* MAP = StdUtil::getInstance()->createHashtable();

    public: std::string get(std::string key);

};

            


        #endif //ORG_ALLBINARY_RESOURCES_KEYVALUEFACTORY_H
