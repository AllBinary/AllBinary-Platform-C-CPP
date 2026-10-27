
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

class GameAdStateBase
            : public Object
         {

    protected: AdConfiguration* adConfigurationP;

    protected: Advertisements* advertisementsP = new Advertisements();

    protected: bool okayToShowAdsP= false;

public: GameAdStateBase(AdConfiguration* adConfiguration){
this->adConfigurationP= adConfiguration;
    
}


    public: void initViewArray(std::vector<Object*> viewArray){
}


    public: void onStart(Object* anyType){
this->init();
    
}


    public: void init(){
}


    public: bool isShowingAtLocation(int32_t location){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isShowingAt(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void show(){
}


    public: void hide(){
}


    public: void onEvent(AllBinaryEventObject* eventObject){
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    public: void processAdState(GameState* gameState, GameType* gameType){
}


    public: void processPageAdState(){
}


                //@Throws(Exception.constructor)
            
    public: void playingAdState(){
}


                //@Throws(Exception.constructor)
            
    public: void playingAdStateWH(int32_t width, int32_t height){
}


                //@Throws(Exception.constructor)
            
    public: void notPlayingAdState(){
}


    public: void setGameIsReady(bool gameIsReady){
}


    public: bool isGameIsReady(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: Advertisements* getAdvertisements(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->advertisementsP;
    
}


    public: AdConfiguration* getAdConfiguration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adConfigurationP;
    
}


    public: bool isOkayToShowPageAd(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void setOkayToShowAds(bool okayToShowAds){
this->okayToShowAdsP= okayToShowAds;
    
}


    public: bool isOkayToShowAds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->okayToShowAdsP;
    
}


    public: bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

