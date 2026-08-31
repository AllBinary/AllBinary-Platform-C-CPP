
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H

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

public constructor (std::vector<any> advertIdArray);

    public std::vector<Direction> getValidAdSpots();

    public process(GameState gameState);

    public processDemo(int32_t state);

    public setShowAds();

    public setToggleAds(bool showAds);

    public bool isShowAds();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_H
