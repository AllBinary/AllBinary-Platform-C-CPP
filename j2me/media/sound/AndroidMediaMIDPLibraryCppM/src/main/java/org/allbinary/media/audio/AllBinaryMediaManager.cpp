
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
        #include "Sounds.h"
#include "SoundsFactoryInterface.h"
#include "Sound.h"
#include "AndroidMediaPlayerWrapper.h"
#include "PlayerComposite.h"
#include "MediaPlayerUtil.h"
#include "NoPlayer.h"
//AndroidMediaMIDPLibrary
class AllBinaryMediaManager
            : public Object
         {

    private: static const std::string THIS = "AllBinaryMediaManagerAndroid";

    private: static int32_t mostUsedTotal = 0;

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
    
AllBinaryMediaManager::shutdown(soundsFactoryInterface);
    
ProgressCanvasFactory::getInstance().addNormalPortion(50, "Media Manager");
    
TsUtil::getInstance().gc();
    
Sounds(soundsFactoryInterface).init();
    
logUtil.putF(commonString.END, AllBinaryMediaManager::THIS, commonString.INIT);
    
}


                //@Throws(Exception.constructor)
            
    static void shutdown(SoundsFactoryInterface soundsFactoryInterface){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonString = CommonStrings::getInstance();;
    
logUtil.putF(commonString.START, AllBinaryMediaManager::THIS, "shutdown");
    

                        if(soundsFactoryInterface.isInitialized())
                        
                                    {
                                    Sounds(soundsFactoryInterface).stopAll();
    

    std::vector<Sound> soundInterfaceArray = soundsFactoryInterface.getSoundInterfaceArray();;
    

    Player player;;
    

    Player player2;;
    

    AndroidMediaPlayerWrapper androidMediaPlayerWrapper;;
    




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
                                    player2= (player).getPlayerP();
    

                        if(player2 instanceof AndroidMediaPlayerWrapper)
                        
                                    {
                                    androidMediaPlayerWrapper= player2;
    
MediaPlayerUtil::getInstance().waitForMediaPlayer(androidMediaPlayerWrapper.getMediaPlayer());
    

                                    }
                                
                        else {
                            


                            throw Exception("Unknown Property Player: " +player.constructor.name.toString());
                    

                        }
                            

                                    }
                                

                                    }
                                
}

Sounds(soundsFactoryInterface).closeAll();
    
TsUtil::getInstance().gc();
    
soundsFactoryInterface.setInitialized(false);
    
AllBinaryMediaManager::mostUsedTotal= 0;
    

                                    }
                                
logUtil.putF(commonString.START, AllBinaryMediaManager::THIS, "shutdown");
    
}


                //@Throws(Exception.constructor)
            
    public: static Player createPlayer(std::string resource){
AllBinaryMediaManager::mostUsedTotal++;
    

    LogUtil logUtil = LogUtil::getInstance();;
    

                        if(Features::getInstance().isFeature(GameFeatureFactory::getInstance().SOUND))
                        
                                    {
                                    
        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidMediaPlayerWrapper(resource);
    

                //: 
} catch(e) 
            {
logUtil.put("Could not create AndroidMediaPlayerWrapper using NoPlayer at " +CommonLabels::getInstance().TOTAL_LABEL +AllBinaryMediaManager::mostUsedTotal, AllBinaryMediaManager::THIS, "createPlayer", e);
    



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
            
    public: static Player createPlayerFromInputStream(InputStream stream, std::string type){



                            throw MediaException("No Input Stream Player");
                    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void playTone(int32_t frequency, int32_t time, int32_t volume){



                            throw MediaException("No Tone Player");
                    
}


    public: static bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private: AllBinaryMediaManager(){
}


};

            

