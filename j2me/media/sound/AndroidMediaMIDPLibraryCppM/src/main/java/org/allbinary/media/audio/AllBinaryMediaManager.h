
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H

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

    public static bool isMuted();

    public static setMuted(bool aMuted);

    public static bool update();

                //@Throws(Exception.constructor)
            
    public static init(SoundsFactoryInterface soundsFactoryInterface);

                //@Throws(Exception.constructor)
            
    static shutdown(SoundsFactoryInterface soundsFactoryInterface);

                //@Throws(Exception.constructor)
            
    public static Player createPlayer(string resource);

                //@Throws(IOException.constructor, MediaException.constructor)
            
    public static Player createPlayerFromInputStream(InputStream stream, string type);

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static playTone(int32_t frequency, int32_t time, int32_t volume);

    public static bool isInitialized();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H
