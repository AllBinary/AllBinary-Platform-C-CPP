
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

public constructor (AdConfiguration adConfiguration){

            super();
        this.adConfigurationP= adConfiguration;
    
}


    public initViewArray(std::vector<any> viewArray){
}


    public onStart(any = {} anyType){
this.init();
    
}


    public init(){
}


    public bool isShowingAtLocation(int32_t location){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isShowingAt(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public show(){
}


    public hide(){
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public processAdState(GameState gameState, GameType gameType){
}


    public processPageAdState(){
}


                //@Throws(Exception.constructor)
            
    public playingAdState(){
}


                //@Throws(Exception.constructor)
            
    public playingAdStateWH(int32_t width, int32_t height){
}


                //@Throws(Exception.constructor)
            
    public notPlayingAdState(){
}


    public setGameIsReady(bool gameIsReady){
}


    public bool isGameIsReady(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public Advertisements getAdvertisements(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.advertisementsP;
    
}


    public AdConfiguration getAdConfiguration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adConfigurationP;
    
}


    public bool isOkayToShowPageAd(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public setOkayToShowAds(bool okayToShowAds){
this.okayToShowAdsP= okayToShowAds;
    
}


    public bool isOkayToShowAds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.okayToShowAdsP;
    
}


    public bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

