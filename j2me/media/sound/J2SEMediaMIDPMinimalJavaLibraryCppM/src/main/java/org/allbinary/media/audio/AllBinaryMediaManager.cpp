
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/BufferedInputStream.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/media/Manager.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/audio/AudioContentTypeDataFactory.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Sounds.h"
#include "SoundsFactoryInterface.h"
#include "NoPlayer.h"
#include "PCClipWavPlayer.h"
//J2SEMediaMIDPMinimalJavaLibrary
class AllBinaryMediaManager
            : public Object
         {

    private: static const std::string THIS = "AllBinaryMediaManagerPC";

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
    
TsUtil::getInstance().gc();
    
}


    private: static const std::string CREATE_PLAYER = "createPlayer";

                //@Throws(Exception.constructor)
            
    public: static Player createPlayer(std::string resource){

                        if(resource.startsWith(Manager::TONE_DEVICE_LOCATOR))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryMediaManager::createPlayerFromInputStream(ByteArrayInputStream(NullUtil::getInstance().NULL_BYTE_ARRAY), AudioContentTypeDataFactory::getInstance().MIME_AUDIO_TONE.getName());;
    

                                    }
                                
                             else 
                        if(Features::getInstance().isFeature(GameFeatureFactory::getInstance().SOUND))
                        
                                    {
                                    
        try {
            
    InputStream inputStream = ResourceUtil::getInstance().getResourceAsStream(resource);;
    

    BufferedInputStream bufferedInputStream = BufferedInputStream(inputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCClipWavPlayer(bufferedInputStream);
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonString = CommonStrings::getInstance();;
    
logUtil.put(commonString.EXCEPTION, AllBinaryMediaManager::THIS, CREATE_PLAYER, e);
    



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



                            throw MediaException("No Impl");
                    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void playTone(int32_t frequency, int32_t time, int32_t volume){



                            throw MediaException("No Impl");
                    
}


    public: static bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private: AllBinaryMediaManager(){
}


};

            

