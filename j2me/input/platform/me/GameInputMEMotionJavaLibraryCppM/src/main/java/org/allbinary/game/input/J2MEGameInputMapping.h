
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GamePersistanceStrings;
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>
class AbeClientInformationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class J2MEKeyFactory;
class GameKeyFactory;
class Input;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class J2MEGameInputMapping: public PersistentInputMapping {

public: J2MEGameInputMapping();

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface* abeClientInformation);

    public: bool isDelete(Input* input);

    public: bool isSystemInput(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>)
#include <org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/PersistentInputMapping.h>)
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include("org/allbinary/game/input/J2MEKeyFactory.h")
#include "org/allbinary/game/input/J2MEKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

        #endif
    
