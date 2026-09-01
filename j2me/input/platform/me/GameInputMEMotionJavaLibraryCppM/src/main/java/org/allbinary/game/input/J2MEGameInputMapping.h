
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

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "J2MEKeyFactory.h"
#include "GameKeyFactory.h"
#include "Input.h"

class J2MEGameInputMapping: public PersistentInputMapping {

public: J2MEGameInputMapping();

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface abeClientInformation);

    public: bool isDelete(Input input);

    public: bool isSystemInput(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_J2MEGAMEINPUTMAPPING_H
