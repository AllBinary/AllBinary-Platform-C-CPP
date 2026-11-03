
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/AllBinaryMediaManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/media/audio/Sounds.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/NoPlayer.h"
#include "org/allbinary/media/audio/PCClipWavPlayer.h"
//J2SEMediaMIDPMinimalJavaLibrary

AllBinaryMediaManager::AllBinaryMediaManager(){
}


    auto AllBinaryMediaManager::isMuted() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto AllBinaryMediaManager::setMuted(bool aMuted) -> void{
}


    auto AllBinaryMediaManager::update() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryMediaManager::init(SoundsFactoryInterface* soundsFactoryInterface) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonString = CommonStrings::getInstance();;
    
logUtil->putF(commonString->START, AllBinaryMediaManager::THIS, commonString->INIT);
    
ProgressCanvasFactory::getInstance()->addNormalPortion(50, "Media Manager");
    
(new Sounds(soundsFactoryInterface))->init();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryMediaManager::shutdown(SoundsFactoryInterface* soundsFactoryInterface) -> void{
(new Sounds(soundsFactoryInterface))->stopAll();
    
(new Sounds(soundsFactoryInterface))->closeAll();
    
TsUtil::getInstance()->gc();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryMediaManager::createPlayer(std::string resource) -> Player*{

                        if(JavaString::startsWith(resource, Manager::TONE_DEVICE_LOCATOR))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AllBinaryMediaManager::createPlayerFromInputStream(new ByteArrayInputStream(NullUtil::getInstance()->NULL_BYTE_ARRAY), AudioContentTypeDataFactory::getInstance()->MIME_AUDIO_TONE->getName());;
    

                                    }
                                
                             else 
                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->SOUND))
                        
                                    {
                                    
        try {
            
    InputStream* inputStream = ResourceUtil::getInstance()->getResourceAsStream(resource);;
    

    BufferedInputStream* bufferedInputStream = new BufferedInputStream(inputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new PCClipWavPlayer(bufferedInputStream);
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonString = CommonStrings::getInstance();;
    
logUtil->put(commonString->EXCEPTION, AllBinaryMediaManager::THIS, CREATE_PLAYER, &e);
    



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
            
    auto AllBinaryMediaManager::createPlayerFromInputStream(InputStream* stream, std::string type) -> Player*{



                            throw MediaException("No Impl");
                    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryMediaManager::playTone(int32_t frequency, int32_t time, int32_t volume) -> void{



                            throw MediaException("No Impl");
                    
}


    auto AllBinaryMediaManager::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_CPP
