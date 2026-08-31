
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
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
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
        

    private: static const THIS: string = "AllBinaryMediaManagerAndroid";

    private: static mostUsedTotal: int32_t = 0;

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
    
AllBinaryMediaManager.shutdown(soundsFactoryInterface);
    
ProgressCanvasFactory.getInstance()!.addNormalPortion(50, "Media Manager");
    
System.gc();
    
new Sounds(soundsFactoryInterface).init();
    
logUtil!.putF(commonString!.END, AllBinaryMediaManager.THIS, commonString!.INIT);
    
}


                //@Throws(Exception.constructor)
            
    static shutdown(SoundsFactoryInterface soundsFactoryInterface){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonString: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.putF(commonString!.START, AllBinaryMediaManager.THIS, "shutdown");
    

                        if(soundsFactoryInterface!.isInitialized())
                        
                                    {
                                    new Sounds(soundsFactoryInterface).stopAll();
    

    soundInterfaceArray: std::vector<Sound> = soundsFactoryInterface!.getSoundInterfaceArray()!;;
    

    player: Player;;
    

    player2: Player;;
    

    androidMediaPlayerWrapper: AndroidMediaPlayerWrapper;;
    




                        for (
    i: int32_t = 0;i < soundInterfaceArray!.length; i++)
        {

                        if(soundInterfaceArray[i] != 
                                    null
                                )
                        
                                    {
                                    player= soundInterfaceArray[i]!.getPlayerP();
    

                        if(player != 
                                    null
                                )
                        
                                    {
                                    player2= (player as PlayerComposite).getPlayerP();
    

                        if(player2 instanceof AndroidMediaPlayerWrapper)
                        
                                    {
                                    androidMediaPlayerWrapper= player2 as AndroidMediaPlayerWrapper;
    
MediaPlayerUtil.getInstance()!.waitForMediaPlayer(androidMediaPlayerWrapper!.getMediaPlayer());
    

                                    }
                                
                        else {
                            


                            throw new Exception("Unknown Property Player: " +player.constructor.name.toString()!);
                    

                        }
                            

                                    }
                                

                                    }
                                
}

new Sounds(soundsFactoryInterface).closeAll();
    
System.gc();
    
soundsFactoryInterface!.setInitialized(false);
    
AllBinaryMediaManager.mostUsedTotal= 0;
    

                                    }
                                
logUtil!.putF(commonString!.START, AllBinaryMediaManager.THIS, "shutdown");
    
}


                //@Throws(Exception.constructor)
            
    public static Player createPlayer(string resource){
AllBinaryMediaManager.mostUsedTotal++;
    

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

                        if(Features.getInstance()!.isFeature(GameFeatureFactory.getInstance()!.SOUND))
                        
                                    {
                                    
        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AndroidMediaPlayerWrapper(resource);
    

                //: 
} catch(e) 
            {
logUtil!.put("Could not create AndroidMediaPlayerWrapper using NoPlayer at " +CommonLabels.getInstance()!.TOTAL_LABEL +AllBinaryMediaManager.mostUsedTotal, AllBinaryMediaManager.THIS, "createPlayer", e);
    



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



                            throw new MediaException("No Input Stream Player");
                    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static playTone(int32_t frequency, int32_t time, int32_t volume){



                            throw new MediaException("No Tone Player");
                    
}


    public static bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private constructor (){

            super();
        }


};

            

