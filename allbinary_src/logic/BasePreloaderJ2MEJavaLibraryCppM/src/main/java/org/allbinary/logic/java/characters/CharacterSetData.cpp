
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/characters/CharacterSetData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CharacterSetData::instance_owner() -> CharacterSetData* { static std::unique_ptr<CharacterSetData> value(new CharacterSetData()); return value.get(); }
CharacterSetData* CharacterSetData::instance = CharacterSetData::instance_owner();

    auto CharacterSetData::getInstance() -> CharacterSetData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CharacterSetData::instance;
    
}


CharacterSetData::CharacterSetData(){
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_CHARACTERS_CHARACTERSETDATA_CPP
