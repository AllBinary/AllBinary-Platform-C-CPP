
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameType;
class GameState;
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AdConfiguration;
class Advertisements;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameAdStateBase
            : public virtual Object
         {

    /*protected*/ public: AdConfiguration* adConfigurationP;

    /*protected*/ public: Advertisements* advertisementsP;

    /*protected*/ public: bool okayToShowAdsP= false;

public: GameAdStateBase(AdConfiguration* adConfiguration);

    public: void initViewArray(std::vector<Object*> viewArray);

    public: void onStart(Object* anyType);
    public: void onStart(const std::string& anyType) { return onStart(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void onStart(BoxValue anyType) { return onStart(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void onStart(const std::vector<BoxElement>& anyType) { return onStart(JavaBoxes::toObject(anyType)); }

    public: void init();

    public: bool isShowingAtLocation(int32_t location);

    public: bool isShowingAt();

    public: void show();

    public: void hide();

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void processAdState(GameState* gameState, GameType* gameType);

    public: void processPageAdState();

                //@Throws(Exception.constructor)
            
    public: void playingAdState();

                //@Throws(Exception.constructor)
            
    public: void playingAdStateWH(int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: void notPlayingAdState();

    public: void setGameIsReady(bool gameIsReady);

    public: bool isGameIsReady();

    public: Advertisements* getAdvertisements();

    public: AdConfiguration* getAdConfiguration();

    public: bool isOkayToShowPageAd();

    public: void setOkayToShowAds(bool okayToShowAds);

    public: bool isOkayToShowAds();

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameType.h>)
#include <org/allbinary/game/GameType.h>
#endif
#if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include("org/allbinary/business/advertisement/AdConfiguration.h")
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Advertisements.h")
#include "org/allbinary/business/advertisement/Advertisements.h"
#endif

        #endif
    
