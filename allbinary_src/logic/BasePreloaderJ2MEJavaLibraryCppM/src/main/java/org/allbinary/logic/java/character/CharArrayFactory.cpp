
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/character/CharArrayFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CharArrayFactory::CharArrayFactory() : zeroCharArray(std::vector<char>(0)) {
        }
        auto CharArrayFactory::instance_owner() -> CharArrayFactory* { static std::unique_ptr<CharArrayFactory> value(new CharArrayFactory()); return value.get(); }
CharArrayFactory* CharArrayFactory::instance = CharArrayFactory::instance_owner();

    auto CharArrayFactory::getInstance() -> CharArrayFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CharArrayFactory::instance;
    
}


    auto CharArrayFactory::getZeroCharArray() -> std::vector<char>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->zeroCharArray;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_CPP
