
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
        



        #ifndef ORG_ALLBINARY_CANVAS_GAMEGLOBALSFACTORY_H
        #define ORG_ALLBINARY_CANVAS_GAMEGLOBALSFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameGlobalsFactory
            : public Object
         {

    private: static GameGlobalsFactory instance() { return GameGlobalsFactory(); }

    public: static GameGlobalsFactory getInstance();

    public: bool newCanvas = true;

    public: int64_t newDisplaybleTime = Integer::MIN_VALUE;

    public: GPoint point = PointFactory::getInstance().ZERO_ZERO;

};

            


        #endif //ORG_ALLBINARY_CANVAS_GAMEGLOBALSFACTORY_H
