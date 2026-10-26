
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/thread/ABRunnable.h>

      
#include <org/allbinary/thread/NullABRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialDemoGameMidlet.h"

class LicenseCheckRunnableFactory
            : public Object
         {

    public: ABRunnable getInstance(SpecialDemoGameMidlet specialDemoGameMidlet);

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_H
