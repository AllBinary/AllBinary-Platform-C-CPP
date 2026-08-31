
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
        
#include <java/io/BufferedInputStream.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/media/Manager.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
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
        

    private: static const THIS: string = "AllBinaryMediaManagerPC";

    public static bool isMuted(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public static setMuted(bool aMuted){
}


    public static bool update(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public static init(SoundsFactoryInterface soundsFactoryInterface){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonString: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.putF(commonString!.START, AllBinaryMediaManager.THIS, commonString!.INIT);
    
ProgressCanvasFactory.getInstance()!.addNormalPortion(50, "Media Manager");
    
new Sounds(soundsFactoryInterface).init();
    
}


                //@Throws(Exception.constructor)
            
    public static shutdown(SoundsFactoryInterface soundsFactoryInterface){
new Sounds(soundsFactoryInterface).stopAll();
    
new Sounds(soundsFactoryInterface).closeAll();
    
System.gc();
    
}


    private: static const CREATE_PLAYER: string = "createPlayer";

                //@Throws(Exception.constructor)
            
    public static Player createPlayer(string resource){

                        if(resource.startsWith(Manager.TONE_DEVICE_LOCATOR))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryMediaManager.createPlayerFromInputStream(new ByteArrayInputStream(NullUtil.getInstance()!.NULL_BYTE_ARRAY), AudioContentTypeDataFactory.getInstance()!.MIME_AUDIO_TONE.getName());;
    

                                    }
                                
                             else 
                        if(Features.getInstance()!.isFeature(GameFeatureFactory.getInstance()!.SOUND))
                        
                                    {
                                    
        try {
            
    inputStream: InputStream = ResourceUtil.getInstance()!.getResourceAsStream(resource)!;;
    

    bufferedInputStream: BufferedInputStream = new BufferedInputStream(inputStream);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new PCClipWavPlayer(bufferedInputStream);
    

                //: 
} catch(e) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonString: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonString!.EXCEPTION, AllBinaryMediaManager.THIS, CREATE_PLAYER, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoPlayer.NO_PLAYER;
    
}


                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoPlayer.NO_PLAYER;
    

                        }
                            
}


                //@Throws(IOException.constructor, MediaException.constructor)
            
    public static Player createPlayerFromInputStream(InputStream stream, string type){



                            throw new MediaException("No Impl");
                    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static playTone(int32_t frequency, int32_t time, int32_t volume){



                            throw new MediaException("No Impl");
                    
}


    public static bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private constructor (){

            super();
        }


};

            

