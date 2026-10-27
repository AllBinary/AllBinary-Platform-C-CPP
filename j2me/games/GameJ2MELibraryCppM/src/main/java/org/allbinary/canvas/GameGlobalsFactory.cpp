
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameGlobalsFactory
            : public Object
         {

    private: static GameGlobalsFactory* instance() { static std::unique_ptr<GameGlobalsFactory> value(new GameGlobalsFactory()); return value.get(); }

    public: static GameGlobalsFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGlobalsFactory::instance();
    
}


    public: bool newCanvas = true;

    public: int64_t newDisplaybleTime = Integer.MIN_VALUE;

    public: GPoint* point = PointFactory::getInstance()->ZERO_ZERO;

};

            

