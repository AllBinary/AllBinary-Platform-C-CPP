
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_CAPITAL_H
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_CAPITAL_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Capital
            : public Object
         {

    private: int32_t value= 0;

public: Capital();

    public: int32_t getTotalMoney();

    public: void removeMoney(int32_t points);

    public: void addMoney(int32_t points);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_CAPITAL_H
