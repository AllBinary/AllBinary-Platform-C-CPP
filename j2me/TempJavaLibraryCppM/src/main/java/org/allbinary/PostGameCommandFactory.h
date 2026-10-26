
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_H
        #define ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PostGameCommandFactory
            : public Object
         {

    private: static PostGameCommandFactory instance() { return PostGameCommandFactory(); }

    public: static PostGameCommandFactory getInstance();

    public: void addCommands(Canvas canvas);

};

            


        #endif //ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_H
