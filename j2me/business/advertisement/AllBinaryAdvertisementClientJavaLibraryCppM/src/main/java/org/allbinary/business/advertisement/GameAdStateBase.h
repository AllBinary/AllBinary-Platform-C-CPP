
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameType.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdConfiguration.h"
#include "Advertisements.h"

class GameAdStateBase
            : public Object
         {
        

    const adConfigurationP: AdConfiguration;

    const advertisementsP: Advertisements = new Advertisements();

    okayToShowAdsP: bool= false;

public constructor (AdConfiguration adConfiguration);

    public initViewArray(std::vector<any> viewArray);

    public onStart(any = {} anyType);

    public init();

    public bool isShowingAtLocation(int32_t location);

    public bool isShowingAt();

    public show();

    public hide();

    public onEvent(AllBinaryEventObject eventObject);

    public processAdState(GameState gameState, GameType gameType);

    public processPageAdState();

                //@Throws(Exception.constructor)
            
    public playingAdState();

                //@Throws(Exception.constructor)
            
    public playingAdStateWH(int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public notPlayingAdState();

    public setGameIsReady(bool gameIsReady);

    public bool isGameIsReady();

    public Advertisements getAdvertisements();

    public AdConfiguration getAdConfiguration();

    public bool isOkayToShowPageAd();

    public setOkayToShowAds(bool okayToShowAds);

    public bool isOkayToShowAds();

    public bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H
