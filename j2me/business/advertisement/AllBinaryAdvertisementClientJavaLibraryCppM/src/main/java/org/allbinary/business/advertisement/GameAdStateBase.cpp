
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/GameAdStateBase.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/GameType.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/AdConfiguration.h"
#include "org/allbinary/business/advertisement/Advertisements.h"


GameAdStateBase::GameAdStateBase(AdConfiguration* adConfiguration) : advertisementsP(new Advertisements()){
this->adConfigurationP= adConfiguration;
    
}


    auto GameAdStateBase::initViewArray(std::vector<Object*> viewArray) -> void{
}


    auto GameAdStateBase::onStart(Object* anyType) -> void{
this->init();
    
}


    auto GameAdStateBase::init() -> void{
}


    auto GameAdStateBase::isShowingAtLocation(int32_t location) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto GameAdStateBase::isShowingAt() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto GameAdStateBase::show() -> void{
}


    auto GameAdStateBase::hide() -> void{
}


    auto GameAdStateBase::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto GameAdStateBase::processAdState(GameState* gameState, GameType* gameType) -> void{
}


    auto GameAdStateBase::processPageAdState() -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameAdStateBase::playingAdState() -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameAdStateBase::playingAdStateWH(int32_t width, int32_t height) -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameAdStateBase::notPlayingAdState() -> void{
}


    auto GameAdStateBase::setGameIsReady(bool gameIsReady) -> void{
}


    auto GameAdStateBase::isGameIsReady() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto GameAdStateBase::getAdvertisements() -> Advertisements*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->advertisementsP;
    
}


    auto GameAdStateBase::getAdConfiguration() -> AdConfiguration*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adConfigurationP;
    
}


    auto GameAdStateBase::isOkayToShowPageAd() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto GameAdStateBase::setOkayToShowAds(bool okayToShowAds) -> void{
this->okayToShowAdsP= okayToShowAds;
    
}


    auto GameAdStateBase::isOkayToShowAds() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->okayToShowAdsP;
    
}


    auto GameAdStateBase::isEnabled() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_CPP
