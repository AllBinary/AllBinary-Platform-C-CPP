
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdConfiguration
            : public Object
         {
        

    public const INNERACTIVE: string;

    public const LEADBOLT: string;

    public const ADMOB: string;

public constructor (std::vector<any> advertIdArray){

            super();
        this.INNERACTIVE= advertIdArray[0]! as string;
    
this.ADMOB= advertIdArray[1]! as string;
    
this.LEADBOLT= advertIdArray[2]! as string;
    
}


    public std::vector<Direction> getValidAdSpots(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return [];
    
}


    public process(GameState gameState){
}


    public processDemo(int32_t state){
}


    public setShowAds(){
}


    public setToggleAds(bool showAds){
}


    public bool isShowAds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

