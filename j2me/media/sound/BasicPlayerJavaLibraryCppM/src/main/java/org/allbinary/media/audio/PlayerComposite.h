
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/Controllable.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Controllable2.h"
//BasicPlayer
class PlayerComposite
            : public Object
        : public Controllable, public Player {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const player: Player;

    private: const timeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

public constructor (Player player, int32_t repeatTime);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addPlayerListener(PlayerListener playerListener);

    public removePlayerListener(PlayerListener playerListener);

    public close();

    public deallocate();

    public string getContentType();

    public int64_t getDuration();

    public int64_t getMediaTime();

    public prefetch();

    public realize();

    public int32_t getState();

    public setLoopCount(int32_t count);

    public int64_t setMediaTime(int64_t now);

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    public start();

    public stop();

    public Control getControl(string controlType);

    public std::vector<Control> getControls();

    public setVolume(int32_t leftVolume, int32_t rightVolume);

    public Player getPlayerP();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H
