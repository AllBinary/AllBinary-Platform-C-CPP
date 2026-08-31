
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameGlobalsFactory
            : public Object
         {
        

    private: static const instance: GameGlobalsFactory = new GameGlobalsFactory();

    public static GameGlobalsFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGlobalsFactory.instance;
    
}


    public newCanvas: bool = true;

    public newDisplaybleTime: int64_t = Integer.MIN_VALUE;

    public point: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

};

            

