
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

            #include <vector>
        
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

    protected: AdConfiguration adConfigurationP;

    protected: const Advertisements advertisementsP = Advertisements();

    protected: bool okayToShowAdsP= false;

public: GameAdStateBase(AdConfiguration adConfiguration);

    public: void initViewArray(std::vector<Object*> viewArray);

    public: void onStart(Object* anyType);

    public: void init();

    public: bool isShowingAtLocation(int32_t location);

    public: bool isShowingAt();

    public: void show();

    public: void hide();

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void processAdState(GameState gameState, GameType gameType);

    public: void processPageAdState();

                //@Throws(Exception.constructor)
            
    public: void playingAdState();

                //@Throws(Exception.constructor)
            
    public: void playingAdStateWH(int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: void notPlayingAdState();

    public: void setGameIsReady(bool gameIsReady);

    public: bool isGameIsReady();

    public: Advertisements getAdvertisements();

    public: AdConfiguration getAdConfiguration();

    public: bool isOkayToShowPageAd();

    public: void setOkayToShowAds(bool okayToShowAds);

    public: bool isOkayToShowAds();

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H
