
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
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/System.h"
        
#include <javax/microedition/media/Manager.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Sounds.h"
#include "SoundsFactoryInterface.h"
#include "NoPlayer.h"
//MediaMIDP2ForHTMLJavaLibrary
class AllBinaryMediaManager
            : public Object
         {

    private: static const std::string THIS = "AllBinaryMediaManagerHTML5";

    public: static bool isMuted(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: static void setMuted(bool aMuted){
}


    public: static bool update(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public: static void init(SoundsFactoryInterface soundsFactoryInterface){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonString = CommonStrings::getInstance();;
    
logUtil.putF(commonString.START, AllBinaryMediaManager::THIS, commonString.INIT);
    
ProgressCanvasFactory::getInstance().addNormalPortion(50, "Media Manager");
    
Sounds(soundsFactoryInterface).init();
    
}


                //@Throws(Exception.constructor)
            
    public: static void shutdown(SoundsFactoryInterface soundsFactoryInterface){
Sounds(soundsFactoryInterface).stopAll();
    
Sounds(soundsFactoryInterface).closeAll();
    
System.gc();
    
}


                //@Throws(Exception.constructor)
            
    public: static Player createPlayer(std::string resource){

                        if(Features::getInstance().isFeature(GameFeatureFactory::getInstance().SOUND))
                        
                                    {
                                    
                        if(resource.compareTo(Manager::TONE_DEVICE_LOCATOR) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Manager::createPlayer(resource);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Manager::createPlayer(resource.substring(0, resource.size() -4));;
    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoPlayer::NO_PLAYER;
    

                        }
                            
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void playTone(int32_t frequency, int32_t time, int32_t volume){

                        if(Features::getInstance().isFeature(GameFeatureFactory::getInstance().SOUND))
                        
                                    {
                                    Manager::playTone(frequency, time, volume);
    

                                    }
                                
}


private: AllBinaryMediaManager(){
}


};

            

