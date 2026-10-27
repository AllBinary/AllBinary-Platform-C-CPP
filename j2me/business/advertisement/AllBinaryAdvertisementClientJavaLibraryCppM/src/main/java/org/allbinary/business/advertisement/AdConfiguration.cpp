
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/game/state/GameState.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdConfiguration
            : public Object
         {

    public: std::string INNERACTIVE;

    public: std::string LEADBOLT;

    public: std::string ADMOB;

public: AdConfiguration(std::vector<Object*> advertIdArray){
this->INNERACTIVE= advertIdArray[0];
    
this->ADMOB= advertIdArray[1];
    
this->LEADBOLT= advertIdArray[2];
    
}


    public: std::vector<Direction*> getValidAdSpots(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    public: void process(GameState* gameState){
}


    public: void processDemo(int32_t state){
}


    public: void setShowAds(){
}


    public: void setToggleAds(bool showAds){
}


    public: bool isShowAds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

