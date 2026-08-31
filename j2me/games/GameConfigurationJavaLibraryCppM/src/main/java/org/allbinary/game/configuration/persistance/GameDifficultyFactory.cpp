
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameDifficultyFactory
            : public Object
         {
        

    private: static const instance: GameDifficultyFactory = new GameDifficultyFactory();

    public static GameDifficultyFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameDifficultyFactory.instance;
    
}


    private: level: int32_t = 0;

    public setLevel(int32_t level){
this.level= level;
    
}


    public int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.level;
    
}


};

            

