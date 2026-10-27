
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
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/Sounds.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/AndroidMediaPlayerWrapper.h"
#include "org/allbinary/media/audio/PlayerComposite.h"
#include "org/allbinary/media/audio/MediaPlayerUtil.h"
#include "org/allbinary/media/audio/NoPlayer.h"
//AndroidMediaMIDPLibrary
class AllBinaryMediaManager
            : public Object
         {

    private: static inline const std::string THIS = "AllBinaryMediaManagerAndroid";

    private: static inline int32_t mostUsedTotal = 0;

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
            
    public: static void init(SoundsFactoryInterface* soundsFactoryInterface){

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonString = CommonStrings::getInstance();;
    
logUtil->putF(commonString->START, AllBinaryMediaManager::THIS, commonString->INIT);
    
AllBinaryMediaManager::shutdown(soundsFactoryInterface);
    
ProgressCanvasFactory::getInstance()->addNormalPortion(50, "Media Manager");
    
TsUtil::getInstance()->gc();
    
(new Sounds(soundsFactoryInterface))->init();
    
logUtil->putF(commonString->END, AllBinaryMediaManager::THIS, commonString->INIT);
    
}


                //@Throws(Exception.constructor)
            
    static void shutdown(SoundsFactoryInterface* soundsFactoryInterface){

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonString = CommonStrings::getInstance();;
    
logUtil->putF(commonString->START, AllBinaryMediaManager::THIS, "shutdown");
    

                        if(soundsFactoryInterface->isInitialized())
                        
                                    {
                                    (new Sounds(soundsFactoryInterface))->stopAll();
    

    std::vector<Sound*> soundInterfaceArray = soundsFactoryInterface->getSoundInterfaceArray();;
    

    Player* player;;
    

    Player* player2;;
    

    AndroidMediaPlayerWrapper* androidMediaPlayerWrapper;;
    




                        for (
    int32_t i = 0;i < soundInterfaceArray.size(); i++)
        {

                        if(soundInterfaceArray[i] != 
                                    nullptr
                                )
                        
                                    {
                                    player= soundInterfaceArray[i].getPlayerP();
    

                        if(player != 
                                    nullptr
                                )
                        
                                    {
                                    player2= (player)).getPlayerP();
    

                        if(
                                        (dynamic_cast<const AndroidMediaPlayerWrapper*>(player2) != nullptr)
                                    )
                        
                                    {
                                    androidMediaPlayerWrapper= dynamic_cast<AndroidMediaPlayerWrapper*>(player2);
    
MediaPlayerUtil::getInstance()->waitForMediaPlayer(androidMediaPlayerWrapper->getMediaPlayer());
    

                                    }
                                
                        else {
                            


                            throw new Exception("Unknown Property Player: " +player->getClass()->getName());
                    

                        }
                            

                                    }
                                

                                    }
                                
}

(new Sounds(soundsFactoryInterface))->closeAll();
    
TsUtil::getInstance()->gc();
    
soundsFactoryInterface->setInitialized(false);
    
AllBinaryMediaManager::mostUsedTotal= 0;
    

                                    }
                                
logUtil->putF(commonString->START, AllBinaryMediaManager::THIS, "shutdown");
    
}


                //@Throws(Exception.constructor)
            
    public: static Player* createPlayer(std::string resource){
AllBinaryMediaManager::mostUsedTotal++;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->SOUND))
                        
                                    {
                                    
        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AndroidMediaPlayerWrapper(resource);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put("Could not create AndroidMediaPlayerWrapper using NoPlayer at " +CommonLabels::getInstance()->TOTAL_LABEL +AllBinaryMediaManager::mostUsedTotal, AllBinaryMediaManager::THIS, "createPlayer", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoPlayer::NO_PLAYER;
    
}


                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoPlayer::NO_PLAYER;
    

                        }
                            
}


                //@Throws(IOException.constructor, MediaException.constructor)
            
    public: static Player* createPlayerFromInputStream(InputStream* stream, std::string type){



                            throw new MediaException("No Input Stream Player");
                    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void playTone(int32_t frequency, int32_t time, int32_t volume){



                            throw new MediaException("No Tone Player");
                    
}


    public: static bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private: AllBinaryMediaManager(){
}


};

            

